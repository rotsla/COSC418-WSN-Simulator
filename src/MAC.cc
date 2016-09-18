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

#include "MAC.h"

namespace wsl_csma {

Define_Module(MAC);

MAC::MAC()
    : cSimpleModule()
{

}

MAC::~MAC()
{

}

void MAC::initialize()
{
    // take parameters
    bufferSize = par("bufferSize");
    maxBackoffs = par("maxBackoffs");
    backoffDistribution = par("backoffDistribution");

    // local variables
    macBuffer.resize(bufferSize);
    backoffCounter = 0;
}

void MAC::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
}

} //namespace
