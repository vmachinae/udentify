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
#   File: udentify.pri
#
# Author: $author$
#   Date: 12/16/2021
#
# generic QtCreator project .pri file for framework udentify executable udentify
########################################################################

########################################################################
# udentify

# udentify_exe TARGET
#
udentify_exe_TARGET = udentify

# udentify_exe INCLUDEPATH
#
udentify_exe_INCLUDEPATH += \
$${udentify_INCLUDEPATH} \

# udentify_exe DEFINES
#
udentify_exe_DEFINES += \
$${udentify_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# udentify_exe OBJECTIVE_HEADERS
#
#udentify_exe_OBJECTIVE_HEADERS += \
#$${UDENTIFY_SRC}/xos/app/console/udentify/main.hh \

# udentify_exe OBJECTIVE_SOURCES
#
#udentify_exe_OBJECTIVE_SOURCES += \
#$${UDENTIFY_SRC}/xos/app/console/udentify/main.mm \

########################################################################
# udentify_exe HEADERS
#
udentify_exe_HEADERS += \
$${UDENTIFY_SRC}/xos/app/console/udentify/main_opt.hpp \
$${UDENTIFY_SRC}/xos/app/console/udentify/main.hpp \

# udentify_exe SOURCES
#
udentify_exe_SOURCES += \
$${UDENTIFY_SRC}/xos/app/console/udentify/main_opt.cpp \
$${UDENTIFY_SRC}/xos/app/console/udentify/main.cpp \

########################################################################
# udentify_exe FRAMEWORKS
#
udentify_exe_FRAMEWORKS += \
$${udentify_FRAMEWORKS} \

# udentify_exe LIBS
#
udentify_exe_LIBS += \
$${udentify_LIBS} \

########################################################################
# NO Qt
QT -= gui core

