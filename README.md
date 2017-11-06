# New fork
Please see [this new fork](https://github.com/xTVaser/pcsx2-rr) for future updates and new releases. Having a fork immediately from PCSX2 will make emulator updates easier. Thank you for your comprehension!

# pcsx2-1.4.0-rr
This README proposes a translation (and an update of certain parts, of course) of the original README (be wary that it may not be accurate as I don't speak nor understand Japanese and most of the translation comes from Google Translation). Consider this project as version 4 of PCSX2-rr.<br>
This informal emulator adds features needed to create a TAS to [pcsx2-1.4.0](https://github.com/PCSX2/pcsx2).<br>
This is inspired by [pcsx2-rr](<https://code.google.com/archive/p/pcsx2-rr/>). However, since the content has changed a lot and simple merging can not be done, the source code has changed considerably.
  

# TAS
Here are some TAS examples (made with the original pcsx2-rr v.1):
* [TAS of Chulip part0 (WIP) pcsx2-1.4.0-rr (nicovideo)](http://www.nicovideo.jp/watch/sm30385451)  
* [TAS of Chulip part0 (WIP) pcsx2-1.4.0-rr (youtube)](https://youtu.be/Ib2MnRfCCzc)  


# About desync
See this [wiki page](https://github.com/pocokhc/pcsx2-1.4.0-rr/wiki#%E3%82%AD%E3%83%BC%E3%83%A0%E3%83%BC%E3%83%93%E3%83%BC%E4%BD%9C%E6%88%90%E6%83%B3%E5%AE%9A%E6%89%8B%E9%A0%86201749%E6%9B%B4%E6%96%B0) (in Japanese).

# Download
You can download the Windows 10 executable from [here](TODO)
  
You will need the followings to run the executable:
* Visual C++ 2015 x86 Redistributable. Download it [HERE](https://www.microsoft.com/en-us/download/details.aspx?id=48145)  
  
This was tested only on Windows 10, but the application should work on the other OS supported by PCSX2.

# Added features
* KeyMovie recording
* Pause/Unpause/FrameAdvance
* Lua
* An editor for KeyMovie files
* A Virtual Pad
* Save/Load states to/from files
  
For more details, see the wikis:
* [PCSX2-rr v3](https://github.com/pocokhc/pcsx2-1.4.0-rr/wiki) (in Japanese)
* [PCSX2-rr v4](https://github.com/DocSkellington/pcsx2-1.4.0-rr/wiki) (only explains changes)


# How to build (Windows 10)
You can build this version as you would build the original PCSX2. It is easier with Visual Studio 2015 (works with 2017 version as well).
  
You will need:
1. Visual Studio Community 2015(<https://www.visualstudio.com/vs/community/>)  
2. DirectX Software Development Kit (June 2010)(<https://www.microsoft.com/en-us/download/details.aspx?id=6812>)  
3. Open the file "PCSX2_suite.sln" in Visual Studio and build.
  
# Changes from PCSX2-rr v3
* Lua engine keeps running when the end of the script is reached (allows to display data each frame);
* Save/Load states to/from files;
* Virtual Pad;
* TAS Input Manager:
*  Calls LuaManager::ControllerInterrupt
*  Reads, if it is open, the virtual pad. Be wary that the virtual pad overwrites the other sources of inputs (lua and user).
  
The added files can be found "./pcsx2/TAS"

# Activate Shortcuts for save/load
If you wish to activate the keyboard shortcuts for saving to (or loading from) a specific slot without having to manually switch the current slot to this one (so, if you don't want to use only F1, F2 and F3), here are the steps:
1. In the `PCSX2-rr_keys.ini` remove the `#` before States_SaveSlot0, States_SaveSlot1 (and so on)
2. Change the 10 into a 0 (zero)
3. In LilyPad settings, switch the Keyboard API to Raw input

# Titlebar during FrameAdvance
I had to cheat a little to force the frame counter to update in the titlebar. So, the other information displayed is not accurate (because it's not updated).

# Comments
I implemented what I find useful. If you have other ideas (or if find bugs), don't hesitate to open an issue (or write a post in TASVideos' forum).

Have fun while creating TAS! :D


------------------------
# Licence
Same as PCSX2: [License GNU LGPL](http://www.gnu.org/licenses/lgpl.html)  

