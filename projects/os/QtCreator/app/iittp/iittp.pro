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
#   File: iittp.pro
#
# Author: $author$
#   Date: 12/19/2021
#
# os specific QtCreator project .pro file for framework udentify executable iittp
########################################################################
#
# Debug: udentify/build/os/QtCreator/Debug/bin/iittp
# Release: udentify/build/os/QtCreator/Release/bin/iittp
# Profile: udentify/build/os/QtCreator/Profile/bin/iittp
#
include(../../../../../build/QtCreator/udentify.pri)
include(../../../../QtCreator/udentify.pri)
include(../../udentify.pri)
include(../../../../QtCreator/app/iittp/iittp.pri)

TARGET = $${iittp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${iittp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${iittp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${iittp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${iittp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${iittp_HEADERS} \
$${iittp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${iittp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${iittp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${iittp_LIBS} \
$${FRAMEWORKS} \

########################################################################

