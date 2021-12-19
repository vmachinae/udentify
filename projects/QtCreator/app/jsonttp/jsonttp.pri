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
#   File: jsonttp.pri
#
# Author: $author$
#   Date: 12/18/2021
#
# generic QtCreator project .pri file for framework udentify executable jsonttp
########################################################################

########################################################################
# jsonttp

# jsonttp TARGET
#
jsonttp_TARGET = jsonttp

# jsonttp INCLUDEPATH
#
jsonttp_INCLUDEPATH += \
$${udentify_INCLUDEPATH} \

# jsonttp DEFINES
#
jsonttp_DEFINES += \
$${udentify_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# jsonttp OBJECTIVE_HEADERS
#
#jsonttp_OBJECTIVE_HEADERS += \
#$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/base/main.hh \

# jsonttp OBJECTIVE_SOURCES
#
#jsonttp_OBJECTIVE_SOURCES += \
#$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/base/main.mm \

########################################################################
# jsonttp HEADERS
#
jsonttp_HEADERS += \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/xttp/client/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/base/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/base/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/client/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/protocol/jsonttp/client/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/jsonttp/client/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/jsonttp/client/main.hpp \

# jsonttp SOURCES
#
jsonttp_SOURCES += \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/jsonttp/client/main_opt.cpp \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/jsonttp/client/main.cpp \

########################################################################
# jsonttp FRAMEWORKS
#
jsonttp_FRAMEWORKS += \
$${udentify_FRAMEWORKS} \

# jsonttp LIBS
#
jsonttp_LIBS += \
$${udentify_LIBS} \

########################################################################
# NO Qt
QT -= gui core

