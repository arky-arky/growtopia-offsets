using System;

namespace addresses
{
    public const Int32 app = 0xFF8690; // get app
    public const Int32 client = 0xFF8AD0; // get client
    public const Int32 integrity_check = 0x3FBA99; // integrity check
    public const Int32 fps_limit = 0xF22DE0; // App::SetFPSLimit
    public const Int32 anti_bounce = 0x56C5B3; // anti bounce
    public const Int32 is_collidable = 0x559260; // Tile::IsCollidable
    public const Int32 anzu = 0x21D041; // this is used to show/hide ads
    public const Int32 sendpacket = 0x5442C0; // SendPacket
    public const Int32 sendpacketraw = 0x5446E0; // SendPacketRaw
    public const Int32 tankupdate = 0x3FCE90; // ProcessTankUpdatePacket
    public const Int32 logtoconsole = 0x49E1B0; // LogToConsole
    public const Int32 trackpacket = 0x414A80; // Track packets
    public const Int32 textgame = 0x3FA3A0; // OnTextGameMessage
}
