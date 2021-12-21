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
#   File: tokencgi.pro
#
# Author: $author$
#   Date: 12/21/2021
#
# os specific QtCreator project .pro file for framework udentify executable tokencgi
########################################################################
#
# Debug: udentify/build/os/QtCreator/Debug/bin/tokencgi
# Release: udentify/build/os/QtCreator/Release/bin/tokencgi
# Profile: udentify/build/os/QtCreator/Profile/bin/tokencgi
#
include(../../../../../build/QtCreator/udentify.pri)
include(../../../../QtCreator/udentify.pri)
include(../../udentify.pri)
include(../../../../QtCreator/app/tokencgi/tokencgi.pri)

TARGET = $${tokencgi_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${tokencgi_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${tokencgi_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${tokencgi_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${tokencgi_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${tokencgi_HEADERS} \
$${tokencgi_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${tokencgi_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${tokencgi_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${tokencgi_LIBS} \
$${FRAMEWORKS} \

########################################################################

