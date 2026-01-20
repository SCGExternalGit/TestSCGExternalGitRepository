#
# Simcenter Amesim system make file
#


# This makefile has been created using the following cathegory path list
#	$AME/libame
#	$AME
#	$AME/libsig
#	$AME/libmec
#	$AME/libhydr
#	$AME/libhcd
#	$AME/libhr
#	$AME/libpn
#	$AME/libpcd
#	$AME/libth
#	$AME/libthh
#	$AME/libthcd
#	$AME/libtr
#	$AME/libfi
#	$AME/libcs
#	$AME/libem
#	$AME/libtpf
#	$AME/libac
#	$AME/libemd
#	$AME/libdrv
#	$AME/libeng
#	$AME/libexh
#	$AME/libplm
#	$AME/libheat
#	$AME/libdv
#	$AME/libicar
#	$AME/libma
#	$AME/libgm
#	$AME/libcosim
#	$AME/libesc
#	$AME/libesg
#	$AME/libec
#	$AME/libfc
#	$AME/libae
#	$AME/libcf
#	$AME/libcfd1d
#	$AME/libaero
#	$AME/libace
#	$AME/libacf
#	$AME/libess
#	$AME/libeb
#	$AME/libm6dof
#	$AME/liblp
#	$AME/libgte
#	$AME/libfl
#	$AME/libflcd
#	$AME/libh2
#	$AME/libflst
#	$AME/libmotion
#	$AME/libdemos/3DMechanism
#	$AME/libdemos/libfludemos
#	$AME/libdemos/libcables
#	$AME/libdemos/libhydsys
#	$AME/libdemos/libcryo
# End category path list
# The MACHINETYPE variable can be used in -L statements
# or otherwise to separate machine dependent code

MACHINETYPE = win64-gcc

# Then the object files
OBJECTS = \
	d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/CONS00.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAGS00.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMASINK00.o \
	d:/data/amesim/v2511/amesim/libamesol/submodels/win64-gcc/THHF0.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAFS00.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP002.o \
	d:/data/amesim/v2511/amesim/libmec/submodels/win64-gcc/OMEGC0.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPIN00.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMAS0000.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP000.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP001.o \
	d:/data/amesim/v2511/amesim/libame/submodels/win64-gcc/RSTAT.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFGS010.o \
	d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/SSINK.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPF_FP01.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFSCH00.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THHS0.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFRFL000.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACTEVSB02.o \
	d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/GA00.o \
	d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/MUL00.o \
	d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/SAT0.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THSD00.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPHE0001.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFCVINT01.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THGCV00.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAMX000.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTF0.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFINT2.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFTOP2.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFREF1.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFINT1.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPF0.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFEND1.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFREF1.o \
	d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THC000.o \
	d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFINT1.o \
	d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPUCOMPVD0000.o

OBJECTS2 = \
	"d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/CONS00.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAGS00.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMASINK00.o" \
	"d:/data/amesim/v2511/amesim/libamesol/submodels/win64-gcc/THHF0.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAFS00.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP002.o" \
	"d:/data/amesim/v2511/amesim/libmec/submodels/win64-gcc/OMEGC0.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPIN00.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMAS0000.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP000.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFP001.o" \
	"d:/data/amesim/v2511/amesim/libame/submodels/win64-gcc/RSTAT.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFGS010.o" \
	"d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/SSINK.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPF_FP01.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFSCH00.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THHS0.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFRFL000.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACTEVSB02.o" \
	"d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/GA00.o" \
	"d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/MUL00.o" \
	"d:/data/amesim/v2511/amesim/libsig/submodels/win64-gcc/SAT0.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THSD00.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPHE0001.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFCVINT01.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THGCV00.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THMAMX000.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTF0.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFINT2.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFTOP2.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFREF1.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACMCTFINT1.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPF0.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFEND1.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFREF1.o" \
	"d:/data/amesim/v2511/amesim/libth/submodels/win64-gcc/THC000.o" \
	"d:/data/amesim/v2511/amesim/libac/submodels/win64-gcc/ACUCPFINT1.o" \
	"d:/data/amesim/v2511/amesim/libtpf/submodels/win64-gcc/TPFPUCOMPVD0000.o"

RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.dll: $(OBJECTS) RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.o
	@echo RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.make.link_args =
	@type RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.make.link_args
	"$(AME)\interfaces\standalonesimulator\win32\stdsim_dynlink" win64 $(CC) -m64 $(LDFLAGS) -o RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.dll RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.o @"RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.make.link_args" $(AMELIBS)

RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.o: RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.c
	"$(AME)\interfaces\user_cosim\win32\ame_user_cosim_dyncompile" $(CC) -m64 -c -I"$(AME)\interfaces\user_cosim" -I"$(AME)\interfaces\standalonesimulator" -I"$(AME)\interfaces" $(CFLAGS) -o RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.o RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.c

.c.o:
	@echo
	@echo "Warning: \"$<\" is newer than the object."
	@echo ""

.f.o:
	@echo
	@echo "Warning: \"$<\" is newer than the object."
	@echo ""

# End of file

