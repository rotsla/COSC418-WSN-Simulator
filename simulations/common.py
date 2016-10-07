COMMON_CONFIG = """\
[General]
network = Simulation

# PacketGenerator/Sink
Simulation.TransmitterNodeModule[*].PacketGeneratorModule.messageSize=64

# MAC
Simulation.TransmitterNodeModule[*].MACModule.bufferSize=5
Simulation.TransmitterNodeModule[*].MACModule.maxBackoffs=5
Simulation.TransmitterNodeModule[*].MACModule.backoffDistribution=exponential(0.03)

Simulation.ReceiverNodeModule.MACModule.bufferSize=5
Simulation.ReceiverNodeModule.MACModule.maxBackoffs=5
Simulation.ReceiverNodeModule.MACModule.backoffDistribution=exponential(0.03)

# Transceiver
Simulation.TransmitterNodeModule[*].TransceiverModule.txPowerDBm=0
Simulation.TransmitterNodeModule[*].TransceiverModule.bitRate=250000
Simulation.TransmitterNodeModule[*].TransceiverModule.csThreshDBm=-50
Simulation.TransmitterNodeModule[*].TransceiverModule.noisePowerDBm=-120
Simulation.TransmitterNodeModule[*].TransceiverModule.turnaroundTime=0.001
Simulation.TransmitterNodeModule[*].TransceiverModule.csTime=0.000125

Simulation.ReceiverNodeModule.TransceiverModule.txPowerDBm=0
Simulation.ReceiverNodeModule.TransceiverModule.bitRate=250000
Simulation.ReceiverNodeModule.TransceiverModule.csThreshDBm=-50
Simulation.ReceiverNodeModule.TransceiverModule.noisePowerDBm=-120
Simulation.ReceiverNodeModule.TransceiverModule.turnaroundTime=0.001
Simulation.ReceiverNodeModule.TransceiverModule.csTime=0.00012"""

