#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class App : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1App@rtcp@webrtc@@UEAA@XZ
    virtual ~App();

    // vIndex: 1, symbol: ?BlockLength@App@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@App@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ??0App@rtcp@webrtc@@QEAA@XZ
    MCAPI App();

    // symbol: ?Parse@App@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
