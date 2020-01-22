########################################################################
## Makefile for our Karel the Robot simulator
#  Use:
#       make <filename_without_extension>
#
#  This will create an executable of the same name
#
#  Optional flag: MODE=a
#      to compile for ASCII graphics
#
#----------------------------------------------------------------------
#  For example:    make test
#               This compiles "test.c" and produces executable "test"
#
#		   make test MODE=a
#		This compiles "test.c" and produces executable "test" 
#		but with ASCII graphics
#
#######################################################################
#
# Setting to enable BASIC_MODE. Set this to Y or N.
#      Sets the flag to ENABLE_REPEAT to allow "repeat" as valid syntax
#      Sets the flag to DISABLE_VARIABLES to disallow the use of variables

BASIC_MODE = N

#######################################################################

# Use the gcc compiler
CC = gcc


# If we are running in ASCII graphics mode
ifeq (${MODE},a)
	LINKER_FLAGS = -lm
        LIBPATH = $(KARELPATH)/src_ascii

# Else use the SDL-based graphics
# Set the flags based on the environment
else	
    ifeq ($(shell sw_vers 2>/dev/null | grep Mac | awk '{ print $$2}'),Mac)
	LDFLAGS = -framework GLUT -framework OpenGL \
		-L"/System/Library/Frameworks/OpenGL.framework/Libraries" \
	LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lm
	OPENMP =
    else
	LDFLAGS = -lglut -lGL
	LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lm
	OPENMP = -fopenmp
    endif
    LIBPATH = $(KARELPATH)/src
endif
OBJECTS0 = $(LIBPATH)/*.o $(LIBPATH)/**/*.o

# Set the basic mode or not
ifeq ($(BASIC_MODE),Y)
    CFLAGS = -g -std=c99
    KARELFLAGS = -DENABLE_REPEAT -DDISABLE_VARIABLES 
else
    CFLAGS = -g
    KARELFLAGS =  
endif


# PHONY compilation target
# This allows us to compile with "make <filename>" (where <filename> is the name of the file without the .c extension)
# The use of 'force' causes this to always be compiled
.PHONY: all force


# Compile the file
%: %.c force
	@$(CC) -w $(LDFLAGS) $(KARELFLAGS) $(CFLAGS) -I $(LIBPATH) $@.c $(OBJECTS0) $(LINKER_FLAGS) -o $@ $(OPENMP)


