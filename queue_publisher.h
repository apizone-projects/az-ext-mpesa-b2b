#ifndef _PUBLISHER_H
#define _PUBLISHER_H

#include <iostream>

class QueuePublisher
{
    public:
        void send_to_queue(std::string correlId, std::string payload);
};

#endif
