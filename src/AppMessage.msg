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

namespace wsl_csma;

packet AppMessage {
    // simulation time at which the message has been generated
    simtime_t timeStamp;
    
    // the node identification of the TransmitterNode
    int senderId;
    
    // the current value of the seqno variable
    // the seqno should get increased afterward
   	int sequenceNumber;
   	
   	// the total message size in bytes, to be taken from hte messageSize module parameter
   	int msgSize;
}
