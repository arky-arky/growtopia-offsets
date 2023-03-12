#include <cstdint>

namespace addresses
{
    std::uintptr_t app = 0xFF8690; // get app
    std::uintptr_t client = 0xFF8AD0; // get client
    std::uintptr_t integrity_check = 0x3FBA99; // integrity check
    std::uintptr_t fps_limit = 0xF22DE0; // App::SetFPSLimit
    std::uintptr_t anti_bounce = 0x56C5B3; // anti bounce
    std::uintptr_t is_collidable = 0x559260; // Tile::IsCollidable
    std::uintptr_t anzu = 0x21D041; // this is used to show/hide ads
    std::uintptr_t sendpacket = 0x5442C0; // SendPacket
    std::uintptr_t sendpacketraw = 0x5446E0; // SendPacketRaw
    std::uintptr_t tankupdate = 0x3FCE90; // ProcessTankUpdatePacket
    std::uintptr_t logtoconsole = 0x49E1B0; // LogToConsole
    std::uintptr_t trackpacket = 0x414A80; // Track packets
    std::uintptr_t textgame = 0x3FA3A0; // OnTextGameMessage
}
