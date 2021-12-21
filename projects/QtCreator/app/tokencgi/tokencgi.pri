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
#   File: tokencgi.pri
#
# Author: $author$
#   Date: 12/21/2021
#
# generic QtCreator project .pri file for framework udentify executable tokencgi
########################################################################

########################################################################
# tokencgi

# tokencgi TARGET
#
tokencgi_TARGET = tokencgi

# tokencgi INCLUDEPATH
#
tokencgi_INCLUDEPATH += \
$${udentify_INCLUDEPATH} \

# tokencgi DEFINES
#
tokencgi_DEFINES += \
$${udentify_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# tokencgi OBJECTIVE_HEADERS
#
#tokencgi_OBJECTIVE_HEADERS += \
#$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main.hh \

# tokencgi OBJECTIVE_SOURCES
#
#tokencgi_OBJECTIVE_SOURCES += \
#$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main.mm \

########################################################################
# tokencgi HEADERS
#
tokencgi_HEADERS += \
$${STARA_SRC}/xos/app/console/protocol/xttp/content/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/content/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/base/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/protocol/iittp/base/main.hpp \
\
$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main.hpp \

# tokencgi SOURCES
#
tokencgi_SOURCES += \
$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main_opt.cpp \
$${UDENTIFY_SRC}/xos/app/console/network/protocol/http/cgi/udentify/token/main.cpp \

########################################################################
# tokencgi FRAMEWORKS
#
tokencgi_FRAMEWORKS += \
$${udentify_FRAMEWORKS} \

# tokencgi LIBS
#
tokencgi_LIBS += \
$${udentify_LIBS} \

########################################################################
# NO Qt
QT -= gui core
