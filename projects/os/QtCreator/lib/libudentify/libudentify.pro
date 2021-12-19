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
#   File: libudentify.pro
#
# Author: $author$
#   Date: 12/16/2021
#
# os specific QtCreator project .pro file for framework udentify static library libudentify
########################################################################
#
# Debug: udentify/build/os/QtCreator/Debug/lib/libudentify
# Release: udentify/build/os/QtCreator/Release/lib/libudentify
# Profile: udentify/build/os/QtCreator/Profile/lib/libudentify
#
include(../../../../../build/QtCreator/udentify.pri)
include(../../../../QtCreator/udentify.pri)
include(../../udentify.pri)
include(../../../../QtCreator/lib/libudentify/libudentify.pri)

TARGET = $${libudentify_TARGET}
TEMPLATE = $${libudentify_TEMPLATE}
CONFIG += $${libudentify_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libudentify_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libudentify_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libudentify_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libudentify_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libudentify_HEADERS} \
$${libudentify_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libudentify_SOURCES} \

########################################################################

