//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __WSL_CSMA_TRANSCEIVER_H_
#define __WSL_CSMA_TRANSCEIVER_H_

#include <omnetpp.h>

using namespace omnetpp;

namespace wsl_csma {

/**
 * TODO - Generated class
 */
class Transceiver : public cSimpleModule
{
public:
    Transceiver();
    ~Transceiver();

protected:
    typedef enum
    {
        IDLE = 0,

        RX_DONE,
        RX_TIMEOUT,
        RX_ERROR,

        TX_DONE,
        TX_TIMEOUT,
    } TransceiverState_t;

protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

protected:
    // module parameters
    int txPowerDBm;
    int bitRate;
    int csThreshDBm;
    int noisePowerDBm;
    int turnaroundTime;
    int csTime;

    // internal variables
    TransceiverState_t transceiverState;
    int currentTransmissions; // TODO: maintain a list of active tranmissions
};

} //namespace

#endif