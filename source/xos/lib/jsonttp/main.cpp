///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.cpp
///
/// Author: $author$
///   Date: 12/17/2021
///////////////////////////////////////////////////////////////////////
#include "xos/lib/jsonttp/main.hpp"

#include "xos/protocol/jsonttp/content/media/subtype/name.cpp"
#include "xos/protocol/jsonttp/content/media/subtype/which.cpp"
#include "xos/protocol/jsonttp/content/media/type/name.cpp"
#include "xos/protocol/jsonttp/content/media/type/which.cpp"
#include "xos/protocol/jsonttp/content/type/name.cpp"
#include "xos/protocol/jsonttp/content/type/nameof.cpp"
#include "xos/protocol/jsonttp/content/type/which.cpp"

#include "xos/protocol/jsonttp/message/body/content.cpp"
#include "xos/protocol/jsonttp/message/header/content/length.cpp"
#include "xos/protocol/jsonttp/message/header/content/type.cpp"
#include "xos/protocol/jsonttp/message/header/field.cpp"
#include "xos/protocol/jsonttp/message/header/fields.cpp"
#include "xos/protocol/jsonttp/message/part.cpp"
#include "xos/protocol/jsonttp/message/parts.cpp"

#include "xos/protocol/jsonttp/request/line.cpp"
#include "xos/protocol/jsonttp/request/message.cpp"
#include "xos/protocol/jsonttp/request/method/name.cpp"
#include "xos/protocol/jsonttp/request/method/nameof.cpp"
#include "xos/protocol/jsonttp/request/method/which.cpp"
#include "xos/protocol/jsonttp/request/resource/identifier.cpp"
#include "xos/protocol/jsonttp/request/resource/which.cpp"

#include "xos/protocol/jsonttp/response/line.cpp"
#include "xos/protocol/jsonttp/response/message.cpp"
#include "xos/protocol/jsonttp/response/status/code.cpp"
#include "xos/protocol/jsonttp/response/status/codeof.cpp"
#include "xos/protocol/jsonttp/response/status/reason.cpp"
#include "xos/protocol/jsonttp/response/status/which.cpp"

namespace xos {
namespace lib {
namespace jsonttp {

} /// namespace jsonttp
} /// namespace lib
} /// namespace xos
