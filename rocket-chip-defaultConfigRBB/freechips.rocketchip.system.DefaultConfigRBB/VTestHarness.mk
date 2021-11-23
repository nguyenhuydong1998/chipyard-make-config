# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /opt/shared/user/hoangvm/rocket-chip/emulator/emulator-freechips.rocketchip.system-freechips.rocketchip.system.DefaultConfigRBB

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /opt/shared/user/hoangvm/rocket-chip/emulator/verilator/install/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O1 -std=c++11 -I/opt/shared/user/hoangvm/chipyard/toolchains/include -DVERILATOR -DTEST_HARNESS=VTestHarness -include /opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc/verilator.h -include /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.plusArgs \
	-I/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src -include /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/opt/shared/user/hoangvm/chipyard/toolchains/lib -Wl,-rpath,/opt/shared/user/hoangvm/chipyard/toolchains/lib -L/opt/shared/user/hoangvm/rocket-chip/emulator -lfesvr -lpthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDTM \
	SimJTAG \
	emulator \
	remote_bitbang \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDTM.o: /opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc/SimDTM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc/emulator.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /opt/shared/user/hoangvm/rocket-chip/src/main/resources/csrc/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/opt/shared/user/hoangvm/rocket-chip/emulator/emulator-freechips.rocketchip.system-freechips.rocketchip.system.DefaultConfigRBB: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
