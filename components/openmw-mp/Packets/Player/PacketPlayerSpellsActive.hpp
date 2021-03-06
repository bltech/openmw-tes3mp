#ifndef OPENMW_PACKETPLAYERSPELLSACTIVE_HPP
#define OPENMW_PACKETPLAYERSPELLSACTIVE_HPP

#include <components/openmw-mp/Packets/Player/PlayerPacket.hpp>

namespace mwmp
{
    class PacketPlayerSpellsActive : public PlayerPacket
    {
    public:
        PacketPlayerSpellsActive(RakNet::RakPeerInterface *peer);

        virtual void Packet(RakNet::BitStream *newBitstream, bool send);
    };
}

#endif //OPENMW_PACKETPLAYERSPELLSACTIVE_HPP
