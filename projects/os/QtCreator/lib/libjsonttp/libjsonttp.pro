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
#   File: libjsonttp.pro
#
# Author: $author$
#   Date: 12/17/2021
#
# os specific QtCreator project .pro file for framework udentify static library libjsonttp
########################################################################
#
# Debug: udentify/build/os/QtCreator/Debug/lib/libjsonttp
# Release: udentify/build/os/QtCreator/Release/lib/libjsonttp
# Profile: udentify/build/os/QtCreator/Profile/lib/libjsonttp
#
include(../../../../../build/QtCreator/udentify.pri)
include(../../../../QtCreator/udentify.pri)
include(../../udentify.pri)
include(../../../../QtCreator/lib/libjsonttp/libjsonttp.pri)

TARGET = $${libjsonttp_TARGET}
TEMPLATE = $${libjsonttp_TEMPLATE}
CONFIG += $${libjsonttp_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libjsonttp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libjsonttp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libjsonttp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libjsonttp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libjsonttp_HEADERS} \
$${libjsonttp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libjsonttp_SOURCES} \

########################################################################

