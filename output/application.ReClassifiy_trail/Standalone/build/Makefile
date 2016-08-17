# NOTE: This makefile is designed to be run from one level up in the directory
# hierarchy compared to where it resides. For instance, if this makefile is
# located at 'output/build/Makefile', then it can be launched as:
# 'make -f build/Makefile' from the 'output' directory.

SHELL=/bin/bash
ifeq ($(CXX),)
  CXX=g++
endif
PKGCONFIG := /home/stream/InfoSphere_Streams/4.1.1.0/bin/dst-pe-pkg-config.sh
SPL_BUNDLE_BUILDER := /home/stream/InfoSphere_Streams/4.1.1.0/system/impl/bin/spl-bundle-builder
PE_INCLUDE := $(shell $(PKGCONFIG) --cflags dst-spl-pe-install)
PE_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install)
PE_STAND_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install-standalone)
SPL_CXXFLAGS = -Wall -Wno-unused -Wno-sign-compare
SPL_CXXFLAGS += -D_REENTRANT -fPIC -finline-functions -fmessage-length=0
SPL_CXXFLAGS += $(PE_INCLUDE) -O3 -DNDEBUG  -std=gnu++98 
SPL_LDFLAGS = $(PE_LIB)

SPL_TYPES = build/type/BeJwrMcw0TSnNza0EABAkANw.o \
            build/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.o \
            build/type/BeJwrMSw2zcnMSy0GABBPANp.o \
            build/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.o 
SPL_FUNCTIONS = 
SPL_OPERATORS = build/operator/rawTree.o \
                build/operator/C50JavaOP_10.o \
                build/operator/Beacon_3_out0.o \
                build/operator/Switch_4.o 
SPL_PE_OBJS = build/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.o 
SPL_PE_BINS = bin/application.ReClassifiy_trail-a.dpe 

SPL_ADL_FILE = application.ReClassifiy_trail.adl

SPL_OUTPUT_DIR_ROOT = $(shell printf '%q' '/home/stream/StreamsStudio/workspace/ReClassifiy/output/application.ReClassifiy_trail')
SPL_OUTPUT_DIR = $(shell printf '%q' 'Standalone')

.PHONY: distclean clean all types functions operators pes svar bundle toolkits standalone sablink

all: bin types functions operators pes svar standalone bundle sablink

distclean clean:
	@rm -fr bin/* build/type build/function build/operator build/pe build/svar build/bundle build/standalone application.ReClassifiy_trail.sab

bin:
	@mkdir -m 775 bin

types: $(SPL_TYPES)

build/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.o: \
	    src/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.h \
	    src/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{csv,txt,bin,block,line}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.cpp

build/type/BeJwrMcw0TSnNza0EABAkANw.o: \
	    src/type/BeJwrMcw0TSnNza0EABAkANw.h \
	    src/type/BeJwrMcw0TSnNza0EABAkANw.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<int32 dummy>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMcw0TSnNza0EABAkANw.cpp

build/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.o: \
	    src/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.h \
	    src/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring ID,rstring lines>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.cpp

build/type/BeJwrMSw2zcnMSy0GABBPANp.o: \
	    src/type/BeJwrMSw2zcnMSy0GABBPANp.h \
	    src/type/BeJwrMSw2zcnMSy0GABBPANp.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring lines>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSw2zcnMSy0GABBPANp.cpp

build/type:
	-@mkdir -m 775 build/type

operators: $(SPL_OPERATORS)

-include build/operator/rawTree.d
build/operator/rawTree.o: \
	    src/operator/rawTree.h \
	    src/operator/rawTree.cpp\
	    build/dep/operator/rawTree.dep  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] rawTree'
	@$(CXX) -o $@ -MD -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/com.ibm.streamsx.hdfs/impl/nl/include -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/spl/spl/utility/JavaOp/../../../impl/include -I /usr/java/default/include -I /usr/java/default/include/linux -DSPLJAVAFUNCTION_ADL_FILENAME=\"application.ReClassifiy_trail.adl\" -c $(SPL_CXXFLAGS) src/operator/rawTree.cpp

-include build/operator/C50JavaOP_10.d
build/operator/C50JavaOP_10.o: \
	    src/operator/C50JavaOP_10.h \
	    src/operator/C50JavaOP_10.cpp\
	    build/dep/operator/C50JavaOP_10.dep  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] C50JavaOP_10'
	@$(CXX) -o $@ -MD -I ../../.././impl/nl/include -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/spl/spl/utility/JavaOp/../../../impl/include -I /usr/java/default/include -I /usr/java/default/include/linux -DSPLJAVAFUNCTION_ADL_FILENAME=\"application.ReClassifiy_trail.adl\" -c $(SPL_CXXFLAGS) src/operator/C50JavaOP_10.cpp

-include build/operator/Beacon_3_out0.d
build/operator/Beacon_3_out0.o: \
	    src/operator/Beacon_3_out0.h \
	    src/operator/Beacon_3_out0.cpp\
	    build/dep/operator/Beacon_3_out0.dep \
	    src/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.h  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] Beacon_3_out0'
	@$(CXX) -o $@ -MD -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/spl/impl/nl/include -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/spl/impl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"application.ReClassifiy_trail.adl\" -c $(SPL_CXXFLAGS) src/operator/Beacon_3_out0.cpp

-include build/operator/Switch_4.d
build/operator/Switch_4.o: \
	    src/operator/Switch_4.h \
	    src/operator/Switch_4.cpp\
	    build/dep/operator/Switch_4.dep  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] Switch_4'
	@$(CXX) -o $@ -MD -I /home/stream/InfoSphere_Streams/4.1.1.0/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"application.ReClassifiy_trail.adl\" -c $(SPL_CXXFLAGS) src/operator/Switch_4.cpp

build/operator:
	-@mkdir -m 775 -p build/operator

functions: $(SPL_FUNCTIONS)

pes: $(SPL_PE_BINS)

build/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.o: \
	    src/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.h \
	    src/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.cpp  \
	    build/cppOptions \
	    | build/pe
	@echo ' [CXX-pe] pe application.ReClassifiy_trail-a'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.cpp

PEapplication.ReClassifiy_trail-a = \
	    build/pe/BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.o \
	    build/operator/rawTree.o \
	    build/type/BeJwrMSw2zcnMSy0GABBPANp.o \
	    build/operator/C50JavaOP_10.o \
	    build/type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.o \
	    build/type/BeJwrMcw0TSnNza0EABAkANw.o \
	    build/operator/Beacon_3_out0.o \
	    build/type/BeJyrNI03Ti4uMy6pKDFOyswzTcrJT842ycnMSwUAf_1wJCo.o \
	    build/operator/Switch_4.o 

bin/application.ReClassifiy_trail-a.dpe: \
	$(PEapplication.ReClassifiy_trail-a) \
	build/dep/application.ReClassifiy_trail-a.dep \
	build/ldOptions
	@echo ' [LD-pe] pe application.ReClassifiy_trail-a'
	@$(CXX) $(SPL_CXXFLAGS) -o bin/application.ReClassifiy_trail-a.dpe -fPIC -shared $(PEapplication.ReClassifiy_trail-a) -lstreams-stdtk-javaop -L /usr/java/jdk1.8.0_77/jre/lib/amd64/server -Wl,-rpath -Wl,/usr/java/jdk1.8.0_77/jre/lib/amd64/server -lpthread -ldl -lstreams-stdtk-runtime -lstreams-stdtk-javaop -lpthread -ldl -lstreams-stdtk-runtime -lstreams-stdtk-runtime -lstreams_boost_iostreams -lstreams_boost_filesystem -lstreams_boost_system $(SPL_LDFLAGS)

build/pe:
	-@mkdir -m 775 build/pe

standalone: bin/standalone.exe

build/standalone/standalone.o: \
	    src/standalone/standalone.h \
	    src/standalone/standalone.cpp  \
	    build/cppOptions \
	    | build/standalone
	@echo ' [CXX-standalone] standalone'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/standalone/standalone.cpp

bin/standalone.exe: build/standalone/standalone.o build/ldOptions
	@echo ' [LD-standalone] standalone'
	@$(CXX) $(SPL_CXXFLAGS) -o bin/standalone.exe build/standalone/standalone.o $(PE_STAND_LIB)
	@echo ' [LN-standalone] standalone '
	@ln -sf standalone bin/application.ReClassifiy_trail
build/standalone:
	-@mkdir -m 775 build/standalone

sablink:

	@ln -sf ../application.ReClassifiy_trail.sab bin/sab

bundle: application.ReClassifiy_trail.sab

-include /home/stream/StreamsStudio/workspace/ReClassifiy/output/application.ReClassifiy_trail/Standalone/build/dep/application.ReClassifiy_trail.sab.d
application.ReClassifiy_trail.sab: $(SPL_PE_BINS) $(SPL_ADL_FILE) bin/standalone.exe
	@echo ' [Bundle] application.ReClassifiy_trail.sab'
	@$(SPL_BUNDLE_BUILDER) $(SPL_OUTPUT_DIR_ROOT) $(SPL_OUTPUT_DIR) $(SPL_ADL_FILE) application.ReClassifiy_trail.sab true

