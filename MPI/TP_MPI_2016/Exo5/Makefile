#
# Laboratory for Scientific Computing
# http://www.lam-mpi.org/tutorials/
# University of Notre Dame
#
# MPI Tutorial
# Sample Makefile
#
# "mpicc" adds the directories for the include and lib files.  Hence,
# -I and -L for MPI stuff is not necessary
#

CC        = mpicc
MPE_CC    = /opt/campux/mpe/bin/mpecc
#
# Modify TOPDIR if you use your own include files and library files
#

TOPDIR    = .
LIBDIR    = $(TOPDIR)/libs
INCDIR    = $(TOPDIR)/include

LIBS      = 				# add any -l's that you need here
					# don't need any for the sample program

CFLAGS    = -I$(INCDIR)
LDFLAGS   = -L$(LIBDIR) $(LIBS) -lX11 -Wl,-hash-style=sysv
MPI_LDFLAGS =

PROGRAM   = mm
SRCS      = mm.c		# source file
OBJS      = $(SRCS:.c=.o)		# object file

#
# Rules
#

.SUFFIXES: .c .o

.c.o: 
	$(CC) -c $(CFLAGS) $<

#
# Targets
#

#default: all

#all: $(PROGRAM) 

#$(PROGRAM): $(OBJS)
	#$(CC) $(OBJS) -o $(PROGRAM) $(LDFLAGS)

#clean:
	#/bin/rm -f $(OBJS) $(PROGRAM)




.PHONY: clean log trace std

$(PROGRAM) log: $(OBJS)
	$(MPE_CC) -mpilog -o $(PROGRAM) $? $(LD_FLAGS) $(MPI_LDFLAGS) 

trace: $(OBJS)
	$(MPE_CC) -mpitrace -o $(PROGRAM) $? $(LD_FLAGS) $(MPI_LDFLAGS) 

std: $(OBJS)
	$(CC) -o $(PROGRAM) $? $(LD_FLAGS) $(MPI_LDFLAGS) 

clean:
	$(RM) -f $(OBJS) $(PROGRAM)


