#ifndef OPENMW_PROCESSOROBJECTMISCELLANEOUS_HPP
#define OPENMW_PROCESSOROBJECTMISCELLANEOUS_HPP

#include "BaseObjectProcessor.hpp"

namespace mwmp
{
    class ProcessorObjectMiscellaneous final: public BaseObjectProcessor
    {
    public:
        ProcessorObjectMiscellaneous()
        {
            BPP_INIT(ID_OBJECT_MISCELLANEOUS)
        }

        virtual void Do(ObjectPacket &packet, ObjectList &objectList)
        {
            LOG_MESSAGE_SIMPLE(TimedLog::LOG_VERBOSE, "Received %s", strPacketID.c_str());

            BaseObjectProcessor::Do(packet, objectList);

            objectList.setGoldPoolsForObjects(ptrCellStore);
        }
    };
}

#endif //OPENMW_PROCESSOROBJECTMISCELLANEOUS_HPP
