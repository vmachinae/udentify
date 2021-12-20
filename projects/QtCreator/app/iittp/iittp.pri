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
#   File: iittp.pri
#
# Author: $author$
#   Date: 12/19/2021
#
# generic QtCreator project .pri file for framework udentify executable iittp
########################################################################

########################################################################
# iittp

# iittp TARGET
#
iittp_TARGET = iittp

# iittp INCLUDEPATH
#
iittp_INCLUDEPATH += \
$${udentify_INCLUDEPATH} \

# iittp DEFINES
#
iittp_DEFINES += \
$${udentify_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# iittp OBJECTIVE_HEADERS
#
#iittp_OBJECTIVE_HEADERS += \
#$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main.hh \

# iittp OBJECTIVE_SOURCES
#
#iittp_OBJECTIVE_SOURCES += \
#$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main.mm \

########################################################################
# iittp HEADERS
#
iittp_HEADERS += \
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
\
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/base/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/base/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/client/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/client/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main.hpp \

# iittp SOURCES
#
iittp_SOURCES += \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main_opt.cpp \
$${UDENTIFY_SRC}/xos/app/console/network/sockets/protocol/iittp/client/main.cpp \

########################################################################
# iittp FRAMEWORKS
#
iittp_FRAMEWORKS += \
$${udentify_FRAMEWORKS} \

# iittp LIBS
#
iittp_LIBS += \
$${udentify_LIBS} \

########################################################################
# NO Qt
QT -= gui core

