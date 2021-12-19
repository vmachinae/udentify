########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libjsonttp.pri
#
# Author: $author$
#   Date: 12/17/2021
#
# generic QtCreator project .pri file for framework udentify static library libjsonttp
########################################################################

########################################################################
# libjsonttp
XOS_LIB_JSONTTP_VERSION_BUILD_DATE = $$system(~/bin/utility/tdate)

# libjsonttp TARGET
#
libjsonttp_TARGET = jsonttp
libjsonttp_TEMPLATE = lib
libjsonttp_CONFIG += staticlib

# libjsonttp INCLUDEPATH
#
libjsonttp_INCLUDEPATH += \
$${udentify_INCLUDEPATH} \

# libjsonttp DEFINES
#
libjsonttp_DEFINES += \
$${udentify_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_JSONTTP_VERSION_BUILD_DATE=$${XOS_LIB_JSONTTP_VERSION_BUILD_DATE} \

########################################################################
# libjsonttp OBJECTIVE_HEADERS
#
#libjsonttp_OBJECTIVE_HEADERS += \
#$${UDENTIFY_SRC}/xos/lib/jsonttp/version.hh \

# libjsonttp OBJECTIVE_SOURCES
#
#libjsonttp_OBJECTIVE_SOURCES += \
#$${UDENTIFY_SRC}/xos/lib/jsonttp/version.mm \

########################################################################
# libjsonttp HEADERS
#
libjsonttp_HEADERS += \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/media/subtype/name.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/media/subtype/which.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/media/type/name.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/media/type/which.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/type/name.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/type/nameof.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/content/type/which.hpp \
\
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/body/content.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/header/content/length.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/header/content/type.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/header/field.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/header/fields.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/part.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/message/parts.hpp \
\
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/line.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/message.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/method/name.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/method/nameof.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/method/which.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/resource/identifier.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/request/resource/which.hpp \
\
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/line.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/message.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/status/code.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/status/codeof.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/status/reason.hpp \
$${UDENTIFY_SRC}/xos/protocol/jsonttp/response/status/which.hpp \
\
$${UDENTIFY_SRC}/xos/lib/jsonttp/version.hpp \
$${UDENTIFY_SRC}/xos/lib/jsonttp/main.hpp \

# libjsonttp SOURCES
#
libjsonttp_SOURCES += \
$${UDENTIFY_SRC}/xos/lib/jsonttp/version.cpp \
$${UDENTIFY_SRC}/xos/lib/jsonttp/main.cpp \

########################################################################

