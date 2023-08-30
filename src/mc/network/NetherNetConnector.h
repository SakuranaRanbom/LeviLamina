#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/ERelayServerConfigurationResult.h"
#include "mc/network/ESendType.h"
#include "mc/network/ESessionError.h"
#include "mc/network/IWebRTCSignalingInterface.h"
#include "mc/network/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct NetherNetConnector {

public:
    // prevent constructor by default
    NetherNetConnector& operator=(NetherNetConnector const&) = delete;
    NetherNetConnector(NetherNetConnector const&)            = delete;
    NetherNetConnector()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETCONNECTOR
    /**
     * @symbol ?OnBroadcastDiscoveryRequestReceivedGetResponse\@NetherNetConnector\@\@EEAA_NPEAXPEAH\@Z
     */
    MCVAPI bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int32_t*);
    /**
     * @symbol ?OnBroadcastResponseReceived\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEBXH\@Z
     */
    MCVAPI void OnBroadcastResponseReceived(struct NetherNet::NetworkID, void const*, int32_t);
    /**
     * @symbol ?OnSessionConnectFailure\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@W4ESessionError\@3\@\@Z
     */
    MCVAPI void OnSessionConnectFailure(struct NetherNet::NetworkID, enum class NetherNet::ESessionError);
    /**
     * @symbol ?OnSessionGetConnectionFlags\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCVAPI void OnSessionGetConnectionFlags(struct NetherNet::NetworkID, uint32_t*);
    /**
     * @symbol ?OnSessionRequested\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI void OnSessionRequested(struct NetherNet::NetworkID);
    /**
     * @symbol ?OnSpopViolation\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void OnSpopViolation();
    /**
     * @symbol ?_onDisable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol ?closeNetworkConnection\@NetherNetConnector\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const&);
    /**
     * @symbol ?connect\@NetherNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const&, class Social::GameConnectionInfo const&);
    /**
     * @symbol ?disconnect\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect();
    /**
     * @symbol ?getNetworkIdentifier\@NetherNetConnector\@\@UEBA?AVNetworkIdentifier\@\@XZ
     */
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;
    /**
     * @symbol ?host\@NetherNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const&);
    /**
     * @symbol ?isConnected\@NetherNetConnector\@\@UEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI bool isConnected(class NetworkIdentifier const&) const;
    /**
     * @symbol ?isServer\@NetherNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const;
    /**
     * @symbol ?runEvents\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents();
    /**
     * @symbol ?tick\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetConnector();
#endif
    /**
     * @symbol ??0NetherNetConnector\@\@QEAA\@AEBVNetherNetTransportFactory\@\@AEAUConnectionCallbacks\@Connector\@\@\@Z
     */
    MCAPI NetherNetConnector(class NetherNetTransportFactory const&, struct Connector::ConnectionCallbacks&);
    /**
     * @symbol ?clearPacketData\@NetherNetConnector\@\@QEBAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI void clearPacketData(struct NetherNet::NetworkID) const;
    /**
     * @symbol ?closeSessionWithUser\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI bool closeSessionWithUser(struct NetherNet::NetworkID) const;
    /**
     * @symbol ?disableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void disableBroadcastDiscovery() const;
    /**
     * @symbol ?enableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void enableBroadcastDiscovery() const;
    /**
     * @symbol ?getNetworkID\@NetherNetConnector\@\@QEBAAEBUNetworkID\@NetherNet\@\@XZ
     */
    MCAPI struct NetherNet::NetworkID const& getNetworkID() const;
    /**
     * @symbol ?getSessionState\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAUSessionState\@3\@\@Z
     */
    MCAPI bool getSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*) const;
    /**
     * @symbol ?isBroadcastDiscoveryEnabled\@NetherNetConnector\@\@QEBA_NXZ
     */
    MCAPI bool isBroadcastDiscoveryEnabled() const;
    /**
     * @symbol ?isPacketAvailable\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCAPI bool isPacketAvailable(struct NetherNet::NetworkID, uint32_t*) const;
    /**
     * @symbol ?readPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAXIPEAI\@Z
     */
    MCAPI bool readPacket(struct NetherNet::NetworkID, void*, uint32_t, uint32_t*) const;
    /**
     * @symbol
     * ?registerRelayServerCredentialsReadyCallback\@NetherNetConnector\@\@QEBAX$$QEAV?$function\@$$A6AXW4ERelayServerConfigurationResult\@NetherNet\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    registerRelayServerCredentialsReadyCallback(std::function<void(enum class NetherNet::ERelayServerConfigurationResult
                                                )>&&) const;
    /**
     * @symbol ?sendPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEBDIW4ESendType\@3\@\@Z
     */
    MCAPI bool sendPacket(struct NetherNet::NetworkID, char const*, uint32_t, enum class NetherNet::ESendType) const;
    /**
     * @symbol ?setBroadcastRequestCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6A_NPEAXPEAH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastRequestCallback(std::function<bool(void*, int32_t*)>&&);
    /**
     * @symbol
     * ?setBroadcastResponseCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6AXAEBUNetworkID\@NetherNet\@\@PEBXH\@Z\@std\@\@\@Z
     */
    MCAPI void
    setBroadcastResponseCallback(std::function<void(struct NetherNet::NetworkID const&, void const*, int32_t)>&&);
    /**
     * @symbol
     * ?signIntoSignalingService\@NetherNetConnector\@\@QEBAX$$QEAV?$function\@$$A6AXVerror_code\@std\@\@\@Z\@std\@\@$$QEAV?$function\@$$A6AXW4SignalingHostConnectionStatus\@NetherNet\@\@I\@Z\@3\@$$QEAUSignalingConfiguration\@IWebRTCSignalingInterface\@NetherNet\@\@\@Z
     */
    MCAPI void
    signIntoSignalingService(std::function<void(std::error_code)>&&, std::function<void(enum class NetherNet::SignalingHostConnectionStatus, uint32_t)>&&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration&&)
        const;
    /**
     * @symbol ?signOutFromSignalingService\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void signOutFromSignalingService() const;
    // NOLINTEND
};
