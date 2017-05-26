#include "PrecompiledHeader.h"
#include "TASInputManager.h"
#include "lua/LuaManager.h"

TASInputManager g_TASInput;

TASInputManager::TASInputManager() : virtualPad(false)
{
}

void TASInputManager::ControllerInterrupt(u8 & data, u8 & port, u16 & BufCount, u8 buf[])
{
	if (port >= 2)
		return;

	g_Lua.ControllerInterrupt(data, port, BufCount, buf);

	if (virtualPad)
	{
		int bufIndex = BufCount - 3;
		if (bufIndex < 0 || 6 < bufIndex)
			return;
		// Normal keys
		if (bufIndex <= 1)
			buf[BufCount] = buf[BufCount] & pad.buf[port][bufIndex];
		// Analog keys (! overrides !)
		else if (pad.buf[port][bufIndex] != 127)
			buf[BufCount] = pad.buf[port][bufIndex];
	}
}

void TASInputManager::ToggleButton(wxString button)
{
	auto normalKeys = pad.getNormalKeys(0);
	normalKeys.at(button) = !normalKeys[button];
	pad.setNormalKeys(0, normalKeys);
}

void TASInputManager::UpdateAnalog(wxString key, int value)
{
	auto analogKeys = pad.getAnalogKeys(0);
	analogKeys.at(key) = value;
	pad.setAnalogKeys(0, analogKeys);
}

void TASInputManager::SetVirtualPadReading(bool read)
{
	virtualPad = read;
}

