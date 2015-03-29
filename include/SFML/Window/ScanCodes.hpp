////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2015 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_SCANCODES_HPP
#define SFML_SCANCODES_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window/Export.hpp>


namespace sf
{

typedef Int8 ScanCode;

namespace ScanCodes
{

namespace ENUS
{
    static const ScanCode Unknown      = -1;  ///< Unmapped scan code
    static const ScanCode A            = 0;   ///< The A key
    static const ScanCode B            = 1;   ///< The B key
    static const ScanCode C            = 2;   ///< The C key
    static const ScanCode D            = 3;   ///< The D key
    static const ScanCode E            = 4;   ///< The E key
    static const ScanCode F            = 5;   ///< The F key
    static const ScanCode G            = 6;   ///< The G key
    static const ScanCode H            = 7;   ///< The H key
    static const ScanCode I            = 8;   ///< The I key
    static const ScanCode J            = 9;   ///< The J key
    static const ScanCode K            = 10;  ///< The K key
    static const ScanCode L            = 11;  ///< The L key
    static const ScanCode M            = 12;  ///< The M key
    static const ScanCode N            = 13;  ///< The N key
    static const ScanCode O            = 14;  ///< The O key
    static const ScanCode P            = 15;  ///< The P key
    static const ScanCode Q            = 16;  ///< The Q key
    static const ScanCode R            = 17;  ///< The R key
    static const ScanCode S            = 18;  ///< The S key
    static const ScanCode T            = 19;  ///< The T key
    static const ScanCode U            = 20;  ///< The U key
    static const ScanCode V            = 21;  ///< The V key
    static const ScanCode W            = 22;  ///< The W key
    static const ScanCode X            = 23;  ///< The X key
    static const ScanCode Y            = 24;  ///< The Y key
    static const ScanCode Z            = 25;  ///< The Z key
    static const ScanCode Num0         = 26;  ///< The 0 key
    static const ScanCode Num1         = 27;  ///< The 1 key
    static const ScanCode Num2         = 28;  ///< The 2 key
    static const ScanCode Num3         = 29;  ///< The 3 key
    static const ScanCode Num4         = 30;  ///< The 4 key
    static const ScanCode Num5         = 31;  ///< The 5 key
    static const ScanCode Num6         = 32;  ///< The 6 key
    static const ScanCode Num7         = 33;  ///< The 7 key
    static const ScanCode Num8         = 34;  ///< The 8 key
    static const ScanCode Num9         = 35;  ///< The 9 key
    static const ScanCode Return       = 36;  ///< The Return key
    static const ScanCode Escape       = 37;  ///< The Escape key
    static const ScanCode Backspace    = 38;  ///< The Backspace key
    static const ScanCode Tab          = 39;  ///< The Tabulation key
    static const ScanCode Space        = 40;  ///< The Space key
    static const ScanCode Dash         = 41;  ///< The - key
    static const ScanCode Equal        = 42;  ///< The = key
    static const ScanCode LBracket     = 43;  ///< The [ key
    static const ScanCode RBracket     = 44;  ///< The ] key
    static const ScanCode BackSlash    = 45;  ///< The \ key
    static const ScanCode SemiColon    = 46;  ///< The ; key
    static const ScanCode Quote        = 47;  ///< The ' key
    static const ScanCode Tilde        = 48;  ///< The ~ key
    static const ScanCode Comma        = 49;  ///< The , key
    static const ScanCode Period       = 50;  ///< The . key
    static const ScanCode Slash        = 51;  ///< The / key
    static const ScanCode CapsLock     = 52;  ///< The Caps Lock key
    static const ScanCode F1           = 53;  ///< The F1 key
    static const ScanCode F2           = 54;  ///< The F2 key
    static const ScanCode F3           = 55;  ///< The F3 key
    static const ScanCode F4           = 56;  ///< The F4 key
    static const ScanCode F5           = 57;  ///< The F5 key
    static const ScanCode F6           = 58;  ///< The F6 key
    static const ScanCode F7           = 59;  ///< The F7 key
    static const ScanCode F8           = 60;  ///< The F8 key
    static const ScanCode F9           = 61;  ///< The F9 key
    static const ScanCode F10          = 62;  ///< The F10 key
    static const ScanCode F11          = 63;  ///< The F11 key
    static const ScanCode F12          = 64;  ///< The F12 key
    static const ScanCode PrintScreen  = 65;  ///< The Print Screen key
    static const ScanCode ScrollLock   = 66;  ///< The Scroll Lock key
    static const ScanCode Pause        = 67;  ///< The Pause key
    static const ScanCode Insert       = 68;  ///< The Insert key
    static const ScanCode Home         = 69;  ///< The Home key
    static const ScanCode PageUp       = 70;  ///< The Page Up key
    static const ScanCode PageDown     = 71;  ///< The Page Down key
    static const ScanCode Delete       = 72;  ///< The Delete key
    static const ScanCode End          = 73;  ///< The End key
    static const ScanCode Left         = 74;  ///< The Left Arrow key
    static const ScanCode Right        = 75;  ///< The Right Arrow key
    static const ScanCode Up           = 76;  ///< The Up Arrow key
    static const ScanCode Down         = 77;  ///< The Down Arrow key
    static const ScanCode NumLock      = 78;  ///< The Num Lock key
    static const ScanCode LControl     = 79;  ///< The left Control  key
    static const ScanCode RControl     = 80;  ///< The right Control key
    static const ScanCode LShift       = 81;  ///< The left Shift key
    static const ScanCode RShift       = 82;  ///< The right Shift key
    static const ScanCode LAlt         = 83;  ///< The left Alt key
    static const ScanCode RAlt         = 84;  ///< The right Alt key
    static const ScanCode LSystem      = 85;  ///< The left OS specific key: window (Windows and Linux), apple (MacOS X), ...
    static const ScanCode RSystem      = 86;  ///< The right OS specific key: window (Windows and Linux), apple (MacOS X), ...
    static const ScanCode Add          = 87;  ///< The numpad + key
    static const ScanCode Substract    = 88;  ///< The numpad - key
    static const ScanCode Multiply     = 89;  ///< The numpad * key
    static const ScanCode Divide       = 90;  ///< The numpad / key
    static const ScanCode Numpad0      = 91;  ///< The numpad 0 key
    static const ScanCode Numpad1      = 92;  ///< The numpad 1 key
    static const ScanCode Numpad2      = 93;  ///< The numpad 2 key
    static const ScanCode Numpad3      = 94;  ///< The numpad 3 key
    static const ScanCode Numpad4      = 95;  ///< The numpad 4 key
    static const ScanCode Numpad5      = 96;  ///< The numpad 5 key
    static const ScanCode Numpad6      = 97;  ///< The numpad 6 key
    static const ScanCode Numpad7      = 98;  ///< The numpad 7 key
    static const ScanCode Numpad8      = 99;  ///< The numpad 8 key
    static const ScanCode Numpad9      = 100; ///< The numpad 9 key
    static const ScanCode NumpadPeriod = 101; ///< The numpad . key
    static const ScanCode NumpadReturn = 102; ///< The numpad Return key
    static const ScanCode VolumeUp     = 103; ///< The Volume Up key
    static const ScanCode VolumeDown   = 104; ///< The Volume Down key
    static const ScanCode VolumeMute   = 105; ///< The Volume Mute key
    static const ScanCode Menu         = 106; ///< The Menu key
    static const ScanCode Help         = 107; ///< The Help key
    static const ScanCode Previous     = 108; ///< The Media Previous key
    static const ScanCode Play         = 109; ///< The Media Play|Pause key
    static const ScanCode Next         = 110; ///< The Media Next key
    static const ScanCode Stop         = 111; ///< The Media Stop key

} // namespace ENUS

} // namespace ScanCodes

} // namespace sf

#endif // SFML_SCANCODES_HPP
