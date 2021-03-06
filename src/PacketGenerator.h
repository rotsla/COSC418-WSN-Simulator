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

#ifndef __WSL_CSMA_PACKETGENERATOR_H_
#define __WSL_CSMA_PACKETGENERATOR_H_

#include <omnetpp.h>
#include <stdio.h>

using namespace omnetpp;

namespace wsl_csma {

// Forward declaration
class AppMessage;

/**
 * TODO - Generated class
 */
class PacketGenerator : public cSimpleModule
{
// public methods
public:
    PacketGenerator();
    // Record data loss information for further analysis
    ~PacketGenerator();

    int numOfPacketsGenerated;

protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    AppMessage *generateMessage();

// private variable
protected:
    // parameters
    double iatDistribution;
    int messageSize;

    // internal variable
    int seqno;
    int senderId;
};

} //namespace

#endif
