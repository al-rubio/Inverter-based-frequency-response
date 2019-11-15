#include "__cf_a1_IEEE9_Ctest.h"
#include "rt_logging_mmi.h"
#include "a1_IEEE9_Ctest_capi.h"
#include <math.h>
#include "a1_IEEE9_Ctest.h"
#include "a1_IEEE9_Ctest_private.h"
#include "a1_IEEE9_Ctest_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.1 (R2019a) 23-Nov-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\a1_IEEE9_Ctest\\a1_IEEE9_Ctest_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
const creal_T a1_IEEE9_Ctest_RGND_Complex = { 0.0 , 0.0 } ; B rtB ; X rtX ;
DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = & model_S ;
real_T look1_pbinlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T prevIndex [ ] , uint32_T maxIndex ) { real_T frac ; uint32_T
iRght ; uint32_T iLeft ; uint32_T bpIdx ; uint32_T found ; if ( u0 <= bp0 [
0U ] ) { bpIdx = 0U ; frac = ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ]
) ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx = prevIndex [ 0U ] ; iLeft =
0U ; iRght = maxIndex ; found = 0U ; while ( found == 0U ) { if ( u0 < bp0 [
bpIdx ] ) { iRght = bpIdx - 1U ; bpIdx = ( iRght + iLeft ) >> 1U ; } else if
( u0 < bp0 [ bpIdx + 1U ] ) { found = 1U ; } else { iLeft = bpIdx + 1U ;
bpIdx = ( iRght + iLeft ) >> 1U ; } } frac = ( u0 - bp0 [ bpIdx ] ) / ( bp0 [
bpIdx + 1U ] - bp0 [ bpIdx ] ) ; } else { bpIdx = maxIndex - 1U ; frac = ( u0
- bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex - 1U ] ) ; }
prevIndex [ 0U ] = bpIdx ; return ( table [ bpIdx + 1U ] - table [ bpIdx ] )
* frac + table [ bpIdx ] ; } void kiwunxbxxy ( norupa124f * localDW ) {
localDW -> b0qbuxmcvn = false ; } void emxfb3k3z5 ( SimStruct * rtS_p ,
norupa124f * localDW ) { localDW -> b0qbuxmcvn = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void pu5sgumjsd (
SimStruct * rtS_e , real_T ljykjrkdhd , real_T eovmy1dz1a , c0os3n2udc *
localB , norupa124f * localDW , eachi032pd * localP ) { if ( ssIsSampleHit (
rtS_e , 1 , 0 ) && ssIsMajorTimeStep ( rtS_e ) ) { if ( ljykjrkdhd > 0.0 ) {
if ( ! localDW -> b0qbuxmcvn ) { if ( ssGetTaskTime ( rtS_e , 1 ) !=
ssGetTStart ( rtS_e ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e
) ; } localDW -> b0qbuxmcvn = true ; } } else { if ( localDW -> b0qbuxmcvn )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; kiwunxbxxy ( localDW
) ; } } } if ( localDW -> b0qbuxmcvn ) { localB -> g1evuf0ey1 = 0.0 ; localB
-> g1evuf0ey1 += localP -> HF2_D * eovmy1dz1a ; localB -> axx2pihh1y = 0.0 ;
localB -> axx2pihh1y += localP -> HF3_D * localB -> g1evuf0ey1 ; if (
ssIsMajorTimeStep ( rtS_e ) ) { srUpdateBC ( localDW -> cti4j40whk ) ; } } }
void kdayvjhiz0 ( j2ja1y5ept * localDW ) { localDW -> oxxslnaj3o = false ; }
void lcz2v1utwa ( SimStruct * rtS_m , j2ja1y5ept * localDW ) { localDW ->
oxxslnaj3o = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; }
void brervxhrpp ( SimStruct * rtS_i , real_T nxdpasjpty , real_T p5lenye1vq ,
jjc0whid3j * localB , j2ja1y5ept * localDW , h54kqyhffp * localP ) { if (
ssIsSampleHit ( rtS_i , 1 , 0 ) && ssIsMajorTimeStep ( rtS_i ) ) { if (
nxdpasjpty > 0.0 ) { if ( ! localDW -> oxxslnaj3o ) { if ( ssGetTaskTime (
rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localDW ->
oxxslnaj3o = true ; } } else { if ( localDW -> oxxslnaj3o ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; kdayvjhiz0 ( localDW )
; } } } if ( localDW -> oxxslnaj3o ) { localB -> hxsdfs3e21 = 0.0 ; localB ->
hxsdfs3e21 += localP -> HF5_D * p5lenye1vq ; localB -> dg4wofx0oz = 0.0 ;
localB -> dg4wofx0oz += localP -> HF6_D * localB -> hxsdfs3e21 ; if (
ssIsMajorTimeStep ( rtS_i ) ) { srUpdateBC ( localDW -> kr10x0g2eh ) ; } } }
void ftudftfqim ( h0x5eljdlc * localDW ) { localDW -> c3kvirad2l = false ; }
void c1f43dj3uj ( SimStruct * rtS_g , h0x5eljdlc * localDW ) { localDW ->
c3kvirad2l = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; }
void p5n4z0qa43 ( SimStruct * rtS_p , real_T h5rhfyrbi2 , real_T calg5jqcpq ,
i4jp2mcstd * localB , h0x5eljdlc * localDW , atjhtdxhdy * localP ) { if (
ssIsSampleHit ( rtS_p , 1 , 0 ) && ssIsMajorTimeStep ( rtS_p ) ) { if (
h5rhfyrbi2 > 0.0 ) { if ( ! localDW -> c3kvirad2l ) { if ( ssGetTaskTime (
rtS_p , 1 ) != ssGetTStart ( rtS_p ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } localDW ->
c3kvirad2l = true ; } } else { if ( localDW -> c3kvirad2l ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; ftudftfqim ( localDW )
; } } } if ( localDW -> c3kvirad2l ) { localB -> btj0e2kosd = 0.0 ; localB ->
btj0e2kosd += localP -> IF2_D * calg5jqcpq ; localB -> fbxapju1qk = 0.0 ;
localB -> fbxapju1qk += localP -> IF3_D * localB -> btj0e2kosd ; if (
ssIsMajorTimeStep ( rtS_p ) ) { srUpdateBC ( localDW -> agocbzgv3b ) ; } } }
void excr52sq15 ( bnirstufzs * localDW ) { localDW -> o3qekw1vde = false ; }
void ild0b0civf ( SimStruct * rtS_f , bnirstufzs * localDW ) { localDW ->
o3qekw1vde = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_f ) ; }
void n12bdjrzo2 ( SimStruct * rtS_m , real_T dnr03ncv4b , real_T d03xc203bo ,
iviovo42s2 * localB , bnirstufzs * localDW , bm5yxkrmv5 * localP ) { if (
ssIsSampleHit ( rtS_m , 1 , 0 ) && ssIsMajorTimeStep ( rtS_m ) ) { if (
dnr03ncv4b > 0.0 ) { if ( ! localDW -> o3qekw1vde ) { if ( ssGetTaskTime (
rtS_m , 1 ) != ssGetTStart ( rtS_m ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } localDW ->
o3qekw1vde = true ; } } else { if ( localDW -> o3qekw1vde ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; excr52sq15 ( localDW )
; } } } if ( localDW -> o3qekw1vde ) { localB -> k4hjurn40p = 0.0 ; localB ->
k4hjurn40p += localP -> IF5_D * d03xc203bo ; localB -> gy2v4a00mz = 0.0 ;
localB -> gy2v4a00mz += localP -> IF6_D * localB -> k4hjurn40p ; if (
ssIsMajorTimeStep ( rtS_m ) ) { srUpdateBC ( localDW -> ouauph2cdg ) ; } } }
void aua1srupyo ( lz11a3yp4s * localDW ) { localDW -> ko05akcg2h = false ; }
void gk2gtbji30 ( SimStruct * rtS_k , lz11a3yp4s * localDW ) { localDW ->
ko05akcg2h = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_k ) ; }
void nwwecupcxr ( SimStruct * rtS_c , real_T jirmxdrqxb , real_T n1xbq2kjrz ,
maz5funpmi * localB , lz11a3yp4s * localDW , mzjp5csrva * localP ) { if (
ssIsSampleHit ( rtS_c , 1 , 0 ) && ssIsMajorTimeStep ( rtS_c ) ) { if (
jirmxdrqxb > 0.0 ) { if ( ! localDW -> ko05akcg2h ) { if ( ssGetTaskTime (
rtS_c , 1 ) != ssGetTStart ( rtS_c ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ; } localDW ->
ko05akcg2h = true ; } } else { if ( localDW -> ko05akcg2h ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ; aua1srupyo ( localDW )
; } } } if ( localDW -> ko05akcg2h ) { localB -> mbbsji2qtr = 0.0 ; localB ->
mbbsji2qtr += localP -> BF2_D * n1xbq2kjrz ; localB -> hsz0ejwogb = 0.0 ;
localB -> hsz0ejwogb += localP -> BF3_D * localB -> mbbsji2qtr ; if (
ssIsMajorTimeStep ( rtS_c ) ) { srUpdateBC ( localDW -> mjauax0g2q ) ; } } }
void d142zvdjg5 ( lwxg4jpr3i * localDW ) { localDW -> al2zz4c1e2 = false ; }
void hpbcf1hh3a ( SimStruct * rtS_p , lwxg4jpr3i * localDW ) { localDW ->
al2zz4c1e2 = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; }
void eaz24jybta ( SimStruct * rtS_c , real_T j20jxgvq1h , real_T pxs0dtdbxq ,
gzx1acbj4v * localB , lwxg4jpr3i * localDW , k5yxld1yx1 * localP ) { if (
ssIsSampleHit ( rtS_c , 1 , 0 ) && ssIsMajorTimeStep ( rtS_c ) ) { if (
j20jxgvq1h > 0.0 ) { if ( ! localDW -> al2zz4c1e2 ) { if ( ssGetTaskTime (
rtS_c , 1 ) != ssGetTStart ( rtS_c ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ; } localDW ->
al2zz4c1e2 = true ; } } else { if ( localDW -> al2zz4c1e2 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ; d142zvdjg5 ( localDW )
; } } } if ( localDW -> al2zz4c1e2 ) { localB -> hn1q1abjaw = 0.0 ; localB ->
hn1q1abjaw += localP -> BF5_D * pxs0dtdbxq ; localB -> mkkgohz0kj = 0.0 ;
localB -> mkkgohz0kj += localP -> BF6_D * localB -> hn1q1abjaw ; if (
ssIsMajorTimeStep ( rtS_c ) ) { srUpdateBC ( localDW -> kyf3z0bmdo ) ; } } }
void jpeuaygsuk ( p3ijwzzkfi * localB , etvxweu2x5 * localP , fv54ow1i3z *
localX ) { localX -> gdbj40qzwu = localP -> Integrator6_IC ; localX ->
psupels3kb = localP -> Mass2_dth0 ; localB -> kpy0ya5ox1 = localP -> Ts_52_Y0
[ 3 ] ; localB -> lhytx2rzgp = localP -> dw_52_Y0 [ 3 ] ; localX ->
j2yrynoejz = localP -> Integrator6_IC_pli4mpap3v ; localX -> eo1ws4pu4d =
localP -> Mass2_dth0_n1wijkm53b ; localX -> adcbm1v10t = localP -> Mass3_dth0
; localX -> d2q1a1b41i = localP -> Integrator6_IC_mzbmk3wgxi ; localB ->
n5m4gcg231 = localP -> Ts_52_Y0_gkoe0kawjs [ 2 ] ; localB -> g0icbxhmtg =
localP -> Ts_52_Y0_gkoe0kawjs [ 3 ] ; localB -> db11rbju15 = localP ->
dw_52_Y0_abvdxog1v2 [ 2 ] ; localB -> ooemjapwiw = localP ->
dw_52_Y0_abvdxog1v2 [ 3 ] ; localX -> n1htvwbcs1 = localP ->
Integrator6_IC_b5cdfpqn4h ; localX -> dk1vg2mwy1 = localP ->
Mass2_dth0_jyjm530tk1 ; localX -> ih1bruvbpf = localP ->
Mass3_dth0_bv0vn5dyrc ; localX -> bmh0ev1dod = localP ->
Integrator6_IC_inch3awvdv ; localX -> hpmhcmxij1 = localP -> Mass4_dth0 ;
localX -> melb5kp2wk = localP -> Integrator6_IC_b0eae1b4kg ; localB ->
gitnryvoqi = localP -> Ts_52_Y0_farrcz0qtu [ 1 ] ; localB -> ew02prbfhl =
localP -> Ts_52_Y0_farrcz0qtu [ 2 ] ; localB -> iy3cmkbugo = localP ->
Ts_52_Y0_farrcz0qtu [ 3 ] ; localB -> c3ujurrogb = localP ->
dw_52_Y0_oz5qrjl0hn [ 1 ] ; localB -> a4sf2pzigh = localP ->
dw_52_Y0_oz5qrjl0hn [ 2 ] ; localB -> ecellgvita = localP ->
dw_52_Y0_oz5qrjl0hn [ 3 ] ; localX -> icujgegwsf = localP ->
Integrator6_IC_c31oei5fal ; localX -> el4ptyscen = localP ->
Mass2_dth0_pbltnmyhis ; localX -> nl2gcqurai = localP ->
Mass3_dth0_eq5g31rhav ; localX -> pc2ewfzt4m = localP ->
Integrator6_IC_bcj1qlgzjo ; localX -> bfgaz0ga22 = localP ->
Mass4_dth0_oq0xxf535c ; localX -> klbf1yfrli = localP ->
Integrator6_IC_hi2spj0lwj ; localX -> ju1kk0ptw1 = localP -> Mass5_dth0 ;
localX -> bc2kt5sqju = localP -> Integrator6_IC_ca4q4dfwww ; localB ->
ff5femn4im = localP -> Ts_52_Y0_acrz5xeixu [ 0 ] ; localB -> oe3bdzycux =
localP -> Ts_52_Y0_acrz5xeixu [ 1 ] ; localB -> jymrjwljvm = localP ->
Ts_52_Y0_acrz5xeixu [ 2 ] ; localB -> dpeyyigrxr = localP ->
Ts_52_Y0_acrz5xeixu [ 3 ] ; localB -> fnkgy3xnmr = localP ->
dw_52_Y0_cua0zcp0ln [ 0 ] ; localB -> i2ubtwsvtx = localP ->
dw_52_Y0_cua0zcp0ln [ 1 ] ; localB -> by5qrqku0e = localP ->
dw_52_Y0_cua0zcp0ln [ 2 ] ; localB -> jfc12rv0sa = localP ->
dw_52_Y0_cua0zcp0ln [ 3 ] ; localB -> i5ua1kw1wm = localP -> Tm_g_Y0 ; } void
f51d0wufen ( p3ijwzzkfi * localB , bnbhtzzh0a * localDW , etvxweu2x5 * localP
) { if ( localDW -> gmmz54p1jq ) { localDW -> gmmz54p1jq = false ; } if (
localDW -> iie0sywhx2 ) { localDW -> iie0sywhx2 = false ; } if ( localDW ->
ovpgcbssii ) { localDW -> ovpgcbssii = false ; } if ( localDW -> j4moxvna5a )
{ localDW -> j4moxvna5a = false ; } localB -> i5ua1kw1wm = localP -> Tm_g_Y0
; localDW -> k2alpqp3ma = false ; } void cmznlkl0l4 ( SimStruct * rtS_g ,
bnbhtzzh0a * localDW , jlvgnnbv0g * localXdis ) { localDW -> k2alpqp3ma =
false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; ( void )
memset ( & ( localXdis -> icujgegwsf ) , 1 , 20 * sizeof ( boolean_T ) ) ;
localDW -> gmmz54p1jq = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS_g ) ; ( void ) memset ( & ( localXdis -> gdbj40qzwu ) , 1 , 2 * sizeof (
boolean_T ) ) ; localDW -> iie0sywhx2 = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; ( void ) memset ( & (
localXdis -> j2yrynoejz ) , 1 , 4 * sizeof ( boolean_T ) ) ; localDW ->
ovpgcbssii = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; (
void ) memset ( & ( localXdis -> n1htvwbcs1 ) , 1 , 6 * sizeof ( boolean_T )
) ; localDW -> j4moxvna5a = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; ( void ) memset ( & (
localXdis -> icujgegwsf ) , 1 , 8 * sizeof ( boolean_T ) ) ; } void
eecdtyu2lc ( SimStruct * rtS_m , boolean_T lrjyga1ump , real_T nnt0wqgkqu ,
real_T ajqfl5hzih , real_T lltwkd4cpz , real_T hw5v4cmndv , real_T ea01ln4dp2
, p3ijwzzkfi * localB , bnbhtzzh0a * localDW , etvxweu2x5 * localP ,
fv54ow1i3z * localX , real_T rtp_N , jlvgnnbv0g * localXdis ) { if (
ssIsSampleHit ( rtS_m , 1 , 0 ) && ssIsMajorTimeStep ( rtS_m ) ) { if (
lrjyga1ump ) { if ( ! localDW -> k2alpqp3ma ) { if ( ssGetTaskTime ( rtS_m ,
1 ) != ssGetTStart ( rtS_m ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_m ) ; } ( void ) memset ( & ( localXdis -> icujgegwsf ) , 0 , 20 * sizeof
( boolean_T ) ) ; localDW -> k2alpqp3ma = true ; } } else { if ( localDW ->
k2alpqp3ma ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; ( void
) memset ( & ( localXdis -> icujgegwsf ) , 1 , 20 * sizeof ( boolean_T ) ) ;
f51d0wufen ( localB , localDW , localP ) ; } } } if ( localDW -> k2alpqp3ma )
{ if ( ssIsSampleHit ( rtS_m , 1 , 0 ) && ssIsMajorTimeStep ( rtS_m ) ) { if
( localP -> ctrl7_Value ) { if ( ! localDW -> gmmz54p1jq ) { if (
ssGetTaskTime ( rtS_m , 1 ) != ssGetTStart ( rtS_m ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } ( void ) memset ( &
( localXdis -> gdbj40qzwu ) , 0 , 2 * sizeof ( boolean_T ) ) ; localDW ->
gmmz54p1jq = true ; } } else { if ( localDW -> gmmz54p1jq ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; ( void ) memset ( & (
localXdis -> gdbj40qzwu ) , 1 , 2 * sizeof ( boolean_T ) ) ; localDW ->
gmmz54p1jq = false ; } } } if ( localDW -> gmmz54p1jq ) { localB ->
lhytx2rzgp = localX -> gdbj40qzwu ; localB -> nbs3u3psfl = localP -> Mass2_D
* localB -> lhytx2rzgp ; localB -> bl53k3dxld = localX -> psupels3kb ; localB
-> jhctuk0s0y = localB -> bl53k3dxld - ea01ln4dp2 ; localB -> kpy0ya5ox1 =
localP -> Mass2_K * localB -> jhctuk0s0y ; localB -> bqb4bdmqty = (
nnt0wqgkqu - localB -> kpy0ya5ox1 ) - localB -> nbs3u3psfl ; localB ->
i40vmwstt5 = 1.0 / ( 2.0 * localP -> Mass2_H ) * localB -> bqb4bdmqty ;
localB -> hvt5s5lbxb = rtp_N * 3.1415926535897931 / 30.0 * localB ->
lhytx2rzgp ; if ( ssIsMajorTimeStep ( rtS_m ) ) { srUpdateBC ( localDW ->
aowgz4u5ao ) ; } } if ( ssIsSampleHit ( rtS_m , 1 , 0 ) && ssIsMajorTimeStep
( rtS_m ) ) { if ( localP -> ctrl6_Value ) { if ( ! localDW -> iie0sywhx2 ) {
if ( ssGetTaskTime ( rtS_m , 1 ) != ssGetTStart ( rtS_m ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } ( void ) memset ( &
( localXdis -> j2yrynoejz ) , 0 , 4 * sizeof ( boolean_T ) ) ; localDW ->
iie0sywhx2 = true ; } } else { if ( localDW -> iie0sywhx2 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; ( void ) memset ( & (
localXdis -> j2yrynoejz ) , 1 , 4 * sizeof ( boolean_T ) ) ; localDW ->
iie0sywhx2 = false ; } } } if ( localDW -> iie0sywhx2 ) { localB ->
ooemjapwiw = localX -> j2yrynoejz ; localB -> dk34fmrbhx = localP ->
Mass2_D_hmvust5gzf * localB -> ooemjapwiw ; localB -> ohjtf2mpz3 = localX ->
eo1ws4pu4d ; localB -> m1tffed5dr = localB -> ohjtf2mpz3 - ea01ln4dp2 ;
localB -> g0icbxhmtg = localP -> Mass2_K_n5ie301oin * localB -> m1tffed5dr ;
localB -> o5ork5in2j = localX -> adcbm1v10t ; localB -> odbrfh23ab = localB
-> o5ork5in2j - localB -> ohjtf2mpz3 ; localB -> n5m4gcg231 = localP ->
Mass3_K * localB -> odbrfh23ab ; localB -> hhljj4zoer = ( ( localB ->
n5m4gcg231 + nnt0wqgkqu ) - localB -> g0icbxhmtg ) - localB -> dk34fmrbhx ;
localB -> fwapo2bokd = 1.0 / ( 2.0 * localP -> Mass2_H_nf44muc0pk ) * localB
-> hhljj4zoer ; localB -> jhoktonj2v = rtp_N * 3.1415926535897931 / 30.0 *
localB -> ooemjapwiw ; localB -> db11rbju15 = localX -> d2q1a1b41i ; localB
-> pd2kgxrm4t = localP -> Mass3_D * localB -> db11rbju15 ; localB ->
oep4cziwwh = ( ajqfl5hzih - localB -> n5m4gcg231 ) - localB -> pd2kgxrm4t ;
localB -> kyceu4x1az = 1.0 / ( 2.0 * localP -> Mass3_H ) * localB ->
oep4cziwwh ; localB -> owi433az41 = rtp_N * 3.1415926535897931 / 30.0 *
localB -> db11rbju15 ; if ( ssIsMajorTimeStep ( rtS_m ) ) { srUpdateBC (
localDW -> muk3ngphda ) ; } } if ( ssIsSampleHit ( rtS_m , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS_m ) ) { if ( localP -> ctrl3_Value ) { if ( ! localDW
-> ovpgcbssii ) { if ( ssGetTaskTime ( rtS_m , 1 ) != ssGetTStart ( rtS_m ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } ( void ) memset (
& ( localXdis -> n1htvwbcs1 ) , 0 , 6 * sizeof ( boolean_T ) ) ; localDW ->
ovpgcbssii = true ; } } else { if ( localDW -> ovpgcbssii ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; ( void ) memset ( & (
localXdis -> n1htvwbcs1 ) , 1 , 6 * sizeof ( boolean_T ) ) ; localDW ->
ovpgcbssii = false ; } } } if ( localDW -> ovpgcbssii ) { localB ->
ecellgvita = localX -> n1htvwbcs1 ; localB -> fwdkb3pktf = localP ->
Mass2_D_i3n5xqe03i * localB -> ecellgvita ; localB -> hkplurhtkf = localX ->
dk1vg2mwy1 ; localB -> pqg5dmghyp = localB -> hkplurhtkf - ea01ln4dp2 ;
localB -> iy3cmkbugo = localP -> Mass2_K_mj5s2gx4qf * localB -> pqg5dmghyp ;
localB -> jzfis1cord = localX -> ih1bruvbpf ; localB -> itl5srp4cs = localB
-> jzfis1cord - localB -> hkplurhtkf ; localB -> ew02prbfhl = localP ->
Mass3_K_nflfda1cbj * localB -> itl5srp4cs ; localB -> h44taomecd = ( ( localB
-> ew02prbfhl + nnt0wqgkqu ) - localB -> iy3cmkbugo ) - localB -> fwdkb3pktf
; localB -> ot2brolk5t = 1.0 / ( 2.0 * localP -> Mass2_H_fsnfqfykbe ) *
localB -> h44taomecd ; localB -> f3mwjwkpzz = rtp_N * 3.1415926535897931 /
30.0 * localB -> ecellgvita ; localB -> a4sf2pzigh = localX -> bmh0ev1dod ;
localB -> avb40bo42v = localP -> Mass3_D_m13ccyn2hz * localB -> a4sf2pzigh ;
localB -> gvglfxoj3x = localX -> hpmhcmxij1 ; localB -> oymtd3k0ad = localB
-> gvglfxoj3x - localB -> jzfis1cord ; localB -> gitnryvoqi = localP ->
Mass4_K * localB -> oymtd3k0ad ; localB -> ev2ntfnxxl = ( ( localB ->
gitnryvoqi + ajqfl5hzih ) - localB -> ew02prbfhl ) - localB -> avb40bo42v ;
localB -> hcuppylww2 = 1.0 / ( 2.0 * localP -> Mass3_H_bd0tmjd4ep ) * localB
-> ev2ntfnxxl ; localB -> lges3cleuu = rtp_N * 3.1415926535897931 / 30.0 *
localB -> a4sf2pzigh ; localB -> c3ujurrogb = localX -> melb5kp2wk ; localB
-> e52puk4cpp = localP -> Mass4_D * localB -> c3ujurrogb ; localB ->
f3vmd3wlwl = ( lltwkd4cpz - localB -> gitnryvoqi ) - localB -> e52puk4cpp ;
localB -> ar1vf0pny3 = 1.0 / ( 2.0 * localP -> Mass4_H ) * localB ->
f3vmd3wlwl ; localB -> mkjqskszpf = rtp_N * 3.1415926535897931 / 30.0 *
localB -> c3ujurrogb ; if ( ssIsMajorTimeStep ( rtS_m ) ) { srUpdateBC (
localDW -> p0qoxump3h ) ; } } if ( ssIsSampleHit ( rtS_m , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS_m ) ) { if ( localP -> ctrl2_Value ) { if ( ! localDW
-> j4moxvna5a ) { if ( ssGetTaskTime ( rtS_m , 1 ) != ssGetTStart ( rtS_m ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } ( void ) memset (
& ( localXdis -> icujgegwsf ) , 0 , 8 * sizeof ( boolean_T ) ) ; localDW ->
j4moxvna5a = true ; } } else { if ( localDW -> j4moxvna5a ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; ( void ) memset ( & (
localXdis -> icujgegwsf ) , 1 , 8 * sizeof ( boolean_T ) ) ; localDW ->
j4moxvna5a = false ; } } } if ( localDW -> j4moxvna5a ) { localB ->
jfc12rv0sa = localX -> icujgegwsf ; localB -> jfhlf3iv5n = localP ->
Mass2_D_hhukxbo4s5 * localB -> jfc12rv0sa ; localB -> ko0dmhyuxg = localX ->
el4ptyscen ; localB -> kyono01jpx = localB -> ko0dmhyuxg - ea01ln4dp2 ;
localB -> dpeyyigrxr = localP -> Mass2_K_k4md0a2vvy * localB -> kyono01jpx ;
localB -> eetysuwtq4 = localX -> nl2gcqurai ; localB -> lpe4xbouxa = localB
-> eetysuwtq4 - localB -> ko0dmhyuxg ; localB -> jymrjwljvm = localP ->
Mass3_K_ejvw5jsueq * localB -> lpe4xbouxa ; localB -> c1yu5oifr1 = ( ( localB
-> jymrjwljvm + nnt0wqgkqu ) - localB -> dpeyyigrxr ) - localB -> jfhlf3iv5n
; localB -> l52ai0evpe = 1.0 / ( 2.0 * localP -> Mass2_H_c405ssmlr4 ) *
localB -> c1yu5oifr1 ; localB -> l2vha4yigz = rtp_N * 3.1415926535897931 /
30.0 * localB -> jfc12rv0sa ; localB -> by5qrqku0e = localX -> pc2ewfzt4m ;
localB -> ixctph2rbn = localP -> Mass3_D_lq2q34lidk * localB -> by5qrqku0e ;
localB -> ifujm2ijri = localX -> bfgaz0ga22 ; localB -> g0rx4augsu = localB
-> ifujm2ijri - localB -> eetysuwtq4 ; localB -> oe3bdzycux = localP ->
Mass4_K_dj4qkyirte * localB -> g0rx4augsu ; localB -> hwlmcwltxj = ( ( localB
-> oe3bdzycux + ajqfl5hzih ) - localB -> jymrjwljvm ) - localB -> ixctph2rbn
; localB -> fqzxehuh3m = 1.0 / ( 2.0 * localP -> Mass3_H_eg0d1mo1i1 ) *
localB -> hwlmcwltxj ; localB -> cjdoqls3af = rtp_N * 3.1415926535897931 /
30.0 * localB -> by5qrqku0e ; localB -> i2ubtwsvtx = localX -> klbf1yfrli ;
localB -> ey1iv0wuwj = localP -> Mass4_D_ln2u3otdpn * localB -> i2ubtwsvtx ;
localB -> oz2qtyrljx = localX -> ju1kk0ptw1 ; localB -> lqujmxprzs = localB
-> oz2qtyrljx - localB -> ifujm2ijri ; localB -> ff5femn4im = localP ->
Mass5_K * localB -> lqujmxprzs ; localB -> i1lvxnmro2 = ( ( localB ->
ff5femn4im + lltwkd4cpz ) - localB -> oe3bdzycux ) - localB -> ey1iv0wuwj ;
localB -> kyepzjnzbe = 1.0 / ( 2.0 * localP -> Mass4_H_jwduj1nf5b ) * localB
-> i1lvxnmro2 ; localB -> codc0iym2b = rtp_N * 3.1415926535897931 / 30.0 *
localB -> i2ubtwsvtx ; localB -> fnkgy3xnmr = localX -> bc2kt5sqju ; localB
-> jhm531vmcw = localP -> Mass5_D * localB -> fnkgy3xnmr ; localB ->
loda2buo2x = ( hw5v4cmndv - localB -> ff5femn4im ) - localB -> jhm531vmcw ;
localB -> gakelvcje0 = 1.0 / ( 2.0 * localP -> Mass5_H ) * localB ->
loda2buo2x ; localB -> mladwcg0r0 = rtp_N * 3.1415926535897931 / 30.0 *
localB -> fnkgy3xnmr ; if ( ssIsMajorTimeStep ( rtS_m ) ) { srUpdateBC (
localDW -> hj211nghnp ) ; } } switch ( ( int32_T ) localP -> ctrl4_Value ) {
case 1 : localB -> i5ua1kw1wm = localB -> kpy0ya5ox1 ; break ; case 2 :
localB -> i5ua1kw1wm = localB -> g0icbxhmtg ; break ; case 3 : localB ->
i5ua1kw1wm = localB -> iy3cmkbugo ; break ; default : localB -> i5ua1kw1wm =
localB -> dpeyyigrxr ; break ; } if ( ssIsMajorTimeStep ( rtS_m ) ) {
srUpdateBC ( localDW -> mnbpbp4fph ) ; } } } void eecdtyu2lcTID4 ( SimStruct
* rtS_n , bnbhtzzh0a * localDW ) { if ( ssIsMajorTimeStep ( rtS_n ) ) {
srUpdateBC ( localDW -> mnbpbp4fph ) ; } } void poqjqkgoym ( p3ijwzzkfi *
localB , bnbhtzzh0a * localDW , m4nuliemhl * localXdot ) { if ( localDW ->
k2alpqp3ma ) { if ( localDW -> gmmz54p1jq ) { localXdot -> gdbj40qzwu =
localB -> i40vmwstt5 ; localXdot -> psupels3kb = localB -> hvt5s5lbxb ; }
else { { real_T * dx ; int_T i ; dx = & ( localXdot -> gdbj40qzwu ) ; for ( i
= 0 ; i < 2 ; i ++ ) { dx [ i ] = 0.0 ; } } } if ( localDW -> iie0sywhx2 ) {
localXdot -> j2yrynoejz = localB -> fwapo2bokd ; localXdot -> eo1ws4pu4d =
localB -> jhoktonj2v ; localXdot -> adcbm1v10t = localB -> owi433az41 ;
localXdot -> d2q1a1b41i = localB -> kyceu4x1az ; } else { { real_T * dx ;
int_T i ; dx = & ( localXdot -> j2yrynoejz ) ; for ( i = 0 ; i < 4 ; i ++ ) {
dx [ i ] = 0.0 ; } } } if ( localDW -> ovpgcbssii ) { localXdot -> n1htvwbcs1
= localB -> ot2brolk5t ; localXdot -> dk1vg2mwy1 = localB -> f3mwjwkpzz ;
localXdot -> ih1bruvbpf = localB -> lges3cleuu ; localXdot -> bmh0ev1dod =
localB -> hcuppylww2 ; localXdot -> hpmhcmxij1 = localB -> mkjqskszpf ;
localXdot -> melb5kp2wk = localB -> ar1vf0pny3 ; } else { { real_T * dx ;
int_T i ; dx = & ( localXdot -> n1htvwbcs1 ) ; for ( i = 0 ; i < 6 ; i ++ ) {
dx [ i ] = 0.0 ; } } } if ( localDW -> j4moxvna5a ) { localXdot -> icujgegwsf
= localB -> l52ai0evpe ; localXdot -> el4ptyscen = localB -> l2vha4yigz ;
localXdot -> nl2gcqurai = localB -> cjdoqls3af ; localXdot -> pc2ewfzt4m =
localB -> fqzxehuh3m ; localXdot -> bfgaz0ga22 = localB -> codc0iym2b ;
localXdot -> klbf1yfrli = localB -> kyepzjnzbe ; localXdot -> ju1kk0ptw1 =
localB -> mladwcg0r0 ; localXdot -> bc2kt5sqju = localB -> gakelvcje0 ; }
else { { real_T * dx ; int_T i ; dx = & ( localXdot -> icujgegwsf ) ; for ( i
= 0 ; i < 8 ; i ++ ) { dx [ i ] = 0.0 ; } } } } else { { real_T * dx ; int_T
i ; dx = & ( localXdot -> icujgegwsf ) ; for ( i = 0 ; i < 20 ; i ++ ) { dx [
i ] = 0.0 ; } } } } void jjji3qywjw ( itapaapw2y * localB , goxfauiosk *
localP , lemzsljfxi * localX ) { localX -> jxsbt0ssfc = localP ->
StateSpace_InitialCondition ; localB -> h3ztb2avwq = localP -> Out1_Y0 ; }
void j1dndejvu3 ( itapaapw2y * localB , jgsqdkjxle * localDW , goxfauiosk *
localP ) { localB -> h3ztb2avwq = localP -> Out1_Y0 ; localDW -> pul5ixackn =
false ; } void atxrch0hdu ( SimStruct * rtS_d , jgsqdkjxle * localDW ,
gpeibc1iz2 * localXdis ) { localDW -> pul5ixackn = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_d ) ; localXdis ->
jxsbt0ssfc = 1 ; } void cfxuytlxuw ( SimStruct * rtS_l , boolean_T fu3my0jc3b
, itapaapw2y * localB , jgsqdkjxle * localDW , goxfauiosk * localP ,
lemzsljfxi * localX , gpeibc1iz2 * localXdis ) { if ( ssIsSampleHit ( rtS_l ,
1 , 0 ) && ssIsMajorTimeStep ( rtS_l ) ) { if ( fu3my0jc3b ) { if ( ! localDW
-> pul5ixackn ) { if ( ssGetTaskTime ( rtS_l , 1 ) != ssGetTStart ( rtS_l ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_l ) ; } localXdis ->
jxsbt0ssfc = 0 ; localDW -> pul5ixackn = true ; } } else { if ( localDW ->
pul5ixackn ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_l ) ;
localXdis -> jxsbt0ssfc = 1 ; j1dndejvu3 ( localB , localDW , localP ) ; } }
} if ( localDW -> pul5ixackn ) { localB -> h3ztb2avwq = 0.0 ; localB ->
h3ztb2avwq += localP -> StateSpace_C * localX -> jxsbt0ssfc ; if (
ssIsMajorTimeStep ( rtS_l ) ) { srUpdateBC ( localDW -> pjsxu0fvzv ) ; } } }
void pzpykrvmdl ( real_T mrpb3vv5ph , jgsqdkjxle * localDW , goxfauiosk *
localP , lemzsljfxi * localX , puchu13zo3 * localXdot ) { if ( localDW ->
pul5ixackn ) { localXdot -> jxsbt0ssfc = 0.0 ; localXdot -> jxsbt0ssfc +=
localP -> StateSpace_A * localX -> jxsbt0ssfc ; localXdot -> jxsbt0ssfc +=
localP -> StateSpace_B * mrpb3vv5ph ; } else { localXdot -> jxsbt0ssfc = 0.0
; } } void rt_invd6x6_snf ( const real_T u [ 36 ] , real_T y [ 36 ] ) {
int8_T p [ 6 ] ; real_T A [ 36 ] ; int8_T ipiv [ 6 ] ; int32_T jj ; int32_T
jp1j ; int32_T c ; int32_T ix ; real_T smax ; real_T s ; int32_T iy ; int32_T
jA ; int32_T ijA ; int32_T pipk ; int32_T jBcol ; for ( iy = 0 ; iy < 36 ; iy
++ ) { y [ iy ] = 0.0 ; A [ iy ] = u [ iy ] ; } for ( iy = 0 ; iy < 6 ; iy ++
) { ipiv [ iy ] = ( int8_T ) ( 1 + iy ) ; } for ( pipk = 0 ; pipk < 5 ; pipk
++ ) { jBcol = pipk * 7 + 2 ; jj = pipk * 7 ; c = 6 - pipk ; iy = 1 ; ix =
jBcol - 2 ; smax = muDoubleScalarAbs ( A [ jj ] ) ; for ( jA = 2 ; jA <= c ;
jA ++ ) { ix ++ ; s = muDoubleScalarAbs ( A [ ix ] ) ; if ( s > smax ) { iy =
jA ; smax = s ; } } if ( A [ ( jBcol + iy ) - 3 ] != 0.0 ) { if ( iy - 1 != 0
) { ipiv [ pipk ] = ( int8_T ) ( pipk + iy ) ; ix = pipk ; iy = ( pipk + iy )
- 1 ; for ( jA = 0 ; jA < 6 ; jA ++ ) { smax = A [ ix ] ; A [ ix ] = A [ iy ]
; A [ iy ] = smax ; ix += 6 ; iy += 6 ; } } iy = jBcol - pipk ; for ( ix =
jBcol ; ix <= iy + 4 ; ix ++ ) { A [ ix - 1 ] /= A [ jj ] ; } } c = 4 - pipk
; jA = jj ; jj += 6 ; for ( jp1j = 0 ; jp1j <= c ; jp1j ++ ) { if ( A [ jj ]
!= 0.0 ) { smax = - A [ jj ] ; ix = jBcol - 1 ; iy = jA - pipk ; for ( ijA =
jA + 8 ; ijA <= iy + 12 ; ijA ++ ) { A [ ijA - 1 ] += A [ ix ] * smax ; ix ++
; } } jj += 6 ; jA += 6 ; } } for ( iy = 0 ; iy < 6 ; iy ++ ) { p [ iy ] = (
int8_T ) ( 1 + iy ) ; } for ( jA = 0 ; jA < 5 ; jA ++ ) { if ( ipiv [ jA ] >
1 + jA ) { pipk = p [ ipiv [ jA ] - 1 ] ; p [ ipiv [ jA ] - 1 ] = p [ jA ] ;
p [ jA ] = ( int8_T ) pipk ; } } for ( jA = 0 ; jA < 6 ; jA ++ ) { jBcol = p
[ jA ] - 1 ; y [ jA + 6 * ( p [ jA ] - 1 ) ] = 1.0 ; for ( pipk = jA + 1 ;
pipk < 7 ; pipk ++ ) { if ( y [ ( 6 * jBcol + pipk ) - 1 ] != 0.0 ) { for (
ix = pipk + 1 ; ix < 7 ; ix ++ ) { y [ ( ix + 6 * jBcol ) - 1 ] -= A [ ( (
pipk - 1 ) * 6 + ix ) - 1 ] * y [ ( 6 * jBcol + pipk ) - 1 ] ; } } } } for (
pipk = 0 ; pipk < 6 ; pipk ++ ) { jBcol = 6 * pipk ; for ( jA = 5 ; jA >= 0 ;
jA -- ) { jj = 6 * jA ; if ( y [ jA + jBcol ] != 0.0 ) { y [ jA + jBcol ] /=
A [ jA + jj ] ; iy = jA - 1 ; for ( ix = 0 ; ix <= iy ; ix ++ ) { y [ ix +
jBcol ] -= y [ jA + jBcol ] * A [ ix + jj ] ; } } } } } void o5n5elxdxc (
nm45ujaypf * localP , jwoppf1s1t * localX ) { localX -> ari1ul3qn4 = localP
-> Integrator_IC_ayozevzpbr ; localX -> dpsrgueukm = localP -> Integrator_IC
; } void fmeu431hwa ( hgpoxvgvmn * localDW ) { if ( localDW -> ogactvnuca ) {
localDW -> ogactvnuca = false ; } localDW -> pkfggmzabf = false ; } void
jglthweouv ( SimStruct * rtS_o , hgpoxvgvmn * localDW , i3dogwilm3 *
localXdis ) { localDW -> pkfggmzabf = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_o ) ; ( void ) memset ( & (
localXdis -> ari1ul3qn4 ) , 1 , 2 * sizeof ( boolean_T ) ) ; localDW ->
ogactvnuca = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_o ) ;
localXdis -> dpsrgueukm = 1 ; } void i3kxfqtdpb ( SimStruct * rtS_n , real_T
nfv4uomazo , const real_T fiw3e0y1hy [ 6 ] , jx0ulpnvrr * localB , hgpoxvgvmn
* localDW , nm45ujaypf * localP , jwoppf1s1t * localX , i3dogwilm3 *
localXdis ) { real_T hkgtuw3wrq [ 36 ] ; int32_T i ; static const int8_T tmp
[ 3 ] = { 0 , 4 , 5 } ; int32_T i_p ; int32_T i_e ; if ( ssIsSampleHit (
rtS_n , 1 , 0 ) && ssIsMajorTimeStep ( rtS_n ) ) { if ( nfv4uomazo > 0.0 ) {
if ( ! localDW -> pkfggmzabf ) { if ( ssGetTaskTime ( rtS_n , 1 ) !=
ssGetTStart ( rtS_n ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_n
) ; } ( void ) memset ( & ( localXdis -> ari1ul3qn4 ) , 0 , 2 * sizeof (
boolean_T ) ) ; localDW -> pkfggmzabf = true ; } } else { if ( localDW ->
pkfggmzabf ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_n ) ; ( void
) memset ( & ( localXdis -> ari1ul3qn4 ) , 1 , 2 * sizeof ( boolean_T ) ) ;
fmeu431hwa ( localDW ) ; } } } if ( localDW -> pkfggmzabf ) { localB ->
d5v0t5ntsn [ 0 ] = localP -> uLl_d_Gain [ 0 ] * fiw3e0y1hy [ 1 ] ; localB ->
d5v0t5ntsn [ 1 ] = localP -> uLl_d_Gain [ 1 ] * fiw3e0y1hy [ 2 ] ; localB ->
d5v0t5ntsn [ 2 ] = localP -> uLl_d_Gain [ 2 ] * fiw3e0y1hy [ 3 ] ; localB ->
ll5eoz1d2u = ( localB -> d5v0t5ntsn [ 0 ] + localB -> d5v0t5ntsn [ 1 ] ) +
localB -> d5v0t5ntsn [ 2 ] ; localB -> duiwcnw1dd = localX -> ari1ul3qn4 ;
localB -> dihuht4le1 = ( ( localP -> u1_Value [ 0 ] + localP -> u1_Value [ 1
] ) + localP -> u1_Value [ 2 ] ) + 1.0 / localB -> duiwcnw1dd ; localB ->
ij3q0zbi3l = 1.0 / localB -> dihuht4le1 ; localB -> k20j2gazrc = localB ->
ll5eoz1d2u * localB -> ij3q0zbi3l ; if ( ssIsMajorTimeStep ( rtS_n ) ) {
localDW -> mluji53bh3 = ( localB -> k20j2gazrc >= 0.0 ) ; } localB ->
fbenzmtppb = localDW -> mluji53bh3 > 0 ? localB -> k20j2gazrc : - localB ->
k20j2gazrc ; localB -> af4c0v52gc = look1_pbinlxpw ( localB -> fbenzmtppb ,
localP -> uDLookupTable_bp01Data_gyedwqazik , localP ->
uDLookupTable_tableData_i2zfzseq4g , & localDW -> hkg1chr3r0 , 1U ) ; if (
ssIsMajorTimeStep ( rtS_n ) ) { localDW -> i3acn4dcbd = ( localB ->
af4c0v52gc != 0.0 ) ; } if ( localDW -> i3acn4dcbd ) { localB -> ah11f2ygtm =
localB -> fbenzmtppb / localB -> af4c0v52gc ; localB -> i4ugegskmj = localB
-> ah11f2ygtm ; } else { localB -> i4ugegskmj = localP ->
Constant1_Value_ackdshn4cy ; } localB -> c1ixhjszj3 = localP -> Lmd_Gain *
localB -> i4ugegskmj ; localB -> csmh50wmip = localB -> c1ixhjszj3 - localB
-> duiwcnw1dd ; localB -> jasswtzioa = localP -> uTT1e6s_Gain_ojglsalmh4 *
localB -> csmh50wmip ; if ( ssIsSampleHit ( rtS_n , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS_n ) ) { if ( localP -> Constant1_Value_nmgvlz3nbv ) {
if ( ! localDW -> ogactvnuca ) { if ( ssGetTaskTime ( rtS_n , 1 ) !=
ssGetTStart ( rtS_n ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_n
) ; } localXdis -> dpsrgueukm = 0 ; localDW -> ogactvnuca = true ; } } else {
if ( localDW -> ogactvnuca ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_n ) ; localXdis -> dpsrgueukm = 1 ; localDW -> ogactvnuca = false ; } } }
if ( localDW -> ogactvnuca ) { localB -> ftuxeqycb0 [ 0 ] = localP ->
uLl_q_Gain [ 0 ] * fiw3e0y1hy [ 0 ] ; localB -> ftuxeqycb0 [ 1 ] = localP ->
uLl_q_Gain [ 1 ] * fiw3e0y1hy [ 4 ] ; localB -> ftuxeqycb0 [ 2 ] = localP ->
uLl_q_Gain [ 2 ] * fiw3e0y1hy [ 5 ] ; localB -> bnyondxcjv = ( localB ->
ftuxeqycb0 [ 0 ] + localB -> ftuxeqycb0 [ 1 ] ) + localB -> ftuxeqycb0 [ 2 ]
; localB -> nf1sf5tzwd = localX -> dpsrgueukm ; localB -> bn3nwhmnsw = ( (
localP -> u2_Value [ 0 ] + localP -> u2_Value [ 1 ] ) + localP -> u2_Value [
2 ] ) + 1.0 / localB -> nf1sf5tzwd ; localB -> panplb2kcl = 1.0 / localB ->
bn3nwhmnsw ; localB -> fc0b411b05 = localB -> bnyondxcjv * localB ->
panplb2kcl ; if ( ssIsMajorTimeStep ( rtS_n ) ) { localDW -> kv5wbwosvp = (
localB -> fc0b411b05 >= 0.0 ) ; } localB -> prazrivnew = localDW ->
kv5wbwosvp > 0 ? localB -> fc0b411b05 : - localB -> fc0b411b05 ; localB ->
conllmef5l = look1_pbinlxpw ( localB -> prazrivnew , localP ->
uDLookupTable_bp01Data , localP -> uDLookupTable_tableData , & localDW ->
e0vwqmxycq , 1U ) ; if ( ssIsMajorTimeStep ( rtS_n ) ) { localDW ->
aqf41ojl24 = ( localB -> conllmef5l != 0.0 ) ; } if ( localDW -> aqf41ojl24 )
{ localB -> gbqzjyc1lr = localB -> prazrivnew / localB -> conllmef5l ; localB
-> hcbf1wupcn = localB -> gbqzjyc1lr ; } else { localB -> hcbf1wupcn = localP
-> Constant1_Value ; } localB -> kx4qnyp3vx = localP -> Lmq_Gain * localB ->
hcbf1wupcn ; localB -> lwhbbxzwer = localB -> kx4qnyp3vx - localB ->
nf1sf5tzwd ; localB -> j321y5gdsl = localP -> uTT1e6s_Gain * localB ->
lwhbbxzwer ; if ( ssIsMajorTimeStep ( rtS_n ) ) { srUpdateBC ( localDW ->
ilxp0cy4vk ) ; } } if ( localP -> Constant2_Value ) { localB -> cfzslcgkae =
localB -> kx4qnyp3vx ; } else { localB -> cfzslcgkae = localP -> u3_Value ; }
memcpy ( & hkgtuw3wrq [ 0 ] , & localP -> u1_Value_icc0ye1jhp [ 0 ] , 36U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 3 ; i ++ ) { hkgtuw3wrq [ 6 * tmp [ i
] ] = localB -> cfzslcgkae ; hkgtuw3wrq [ 4 + 6 * tmp [ i ] ] = localB ->
cfzslcgkae ; hkgtuw3wrq [ 5 + 6 * tmp [ i ] ] = localB -> cfzslcgkae ; } for
( i = 0 ; i < 3 ; i ++ ) { hkgtuw3wrq [ 1 + 6 * ( 1 + i ) ] = localB ->
c1ixhjszj3 ; hkgtuw3wrq [ 2 + 6 * ( 1 + i ) ] = localB -> c1ixhjszj3 ;
hkgtuw3wrq [ 3 + 6 * ( 1 + i ) ] = localB -> c1ixhjszj3 ; } for ( i = 0 ; i <
36 ; i ++ ) { localB -> pgfwu2nhuw [ i ] = hkgtuw3wrq [ i ] + localP ->
u5_Value [ i ] ; } rt_invd6x6_snf ( localB -> pgfwu2nhuw , localB ->
nztfpw3vzb ) ; for ( i = 0 ; i < 6 ; i ++ ) { for ( i_p = 0 ; i_p < 6 ; i_p
++ ) { localB -> bmx5oxytsv [ i_p + 6 * i ] = 0.0 ; for ( i_e = 0 ; i_e < 6 ;
i_e ++ ) { localB -> bmx5oxytsv [ i_p + 6 * i ] += localP ->
u1_Value_pe5pxiu5sw [ 6 * i_e + i_p ] * localB -> nztfpw3vzb [ 6 * i + i_e ]
; } } } if ( localP -> Constant3_Value ) { localB -> b5usiw2dap = localB ->
panplb2kcl ; } else { localB -> b5usiw2dap = localP -> u2_Value_pkolckzy0i ;
} if ( ssIsMajorTimeStep ( rtS_n ) ) { srUpdateBC ( localDW -> darzzav0jw ) ;
} } } void i3kxfqtdpbTID4 ( SimStruct * rtS_b , hgpoxvgvmn * localDW ) { if (
ssIsMajorTimeStep ( rtS_b ) ) { srUpdateBC ( localDW -> ilxp0cy4vk ) ;
srUpdateBC ( localDW -> darzzav0jw ) ; } } void eqqqipz3sc ( jx0ulpnvrr *
localB , hgpoxvgvmn * localDW , hjdigkutaj * localXdot ) { if ( localDW ->
pkfggmzabf ) { localXdot -> ari1ul3qn4 = localB -> jasswtzioa ; if ( localDW
-> ogactvnuca ) { localXdot -> dpsrgueukm = localB -> j321y5gdsl ; } else {
localXdot -> dpsrgueukm = 0.0 ; } } else { { real_T * dx ; int_T i ; dx = & (
localXdot -> ari1ul3qn4 ) ; for ( i = 0 ; i < 2 ; i ++ ) { dx [ i ] = 0.0 ; }
} } } void p1ntdzf2ir ( jx0ulpnvrr * localB , hgpoxvgvmn * localDW ,
mbi1khccur * localZCSV ) { if ( localDW -> pkfggmzabf ) { localZCSV ->
m3cwlfk1qq = localB -> k20j2gazrc ; localZCSV -> dx1sucsatg = localB ->
af4c0v52gc ; if ( localDW -> ogactvnuca ) { localZCSV -> jigfnq1j3r = localB
-> fc0b411b05 ; localZCSV -> lygzyfpqvv = localB -> conllmef5l ; } else { {
real_T * zcsv = & ( localZCSV -> jigfnq1j3r ) ; int_T i ; for ( i = 0 ; i < 2
; i ++ ) { zcsv [ i ] = 0.0 ; } } } } else { { real_T * zcsv = & ( localZCSV
-> m3cwlfk1qq ) ; int_T i ; for ( i = 0 ; i < 4 ; i ++ ) { zcsv [ i ] = 0.0 ;
} } } } void aiyjfcdcgo ( ffedy0f3nw * localDW ) { localDW -> pbxv33eaog =
false ; } void d2rews4rry ( SimStruct * rtS_kt , ffedy0f3nw * localDW ) {
localDW -> pbxv33eaog = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS_kt ) ; } void ef3bwkvl4e ( SimStruct * rtS_lt , real_T khlumm2aqc ,
real_T on0rfcpfjx , mky4wgoovg * localB , ffedy0f3nw * localDW ) { if (
ssIsSampleHit ( rtS_lt , 1 , 0 ) && ssIsMajorTimeStep ( rtS_lt ) ) { if (
khlumm2aqc > 0.0 ) { if ( ! localDW -> pbxv33eaog ) { if ( ssGetTaskTime (
rtS_lt , 1 ) != ssGetTStart ( rtS_lt ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_lt ) ; } localDW ->
pbxv33eaog = true ; } } else { if ( localDW -> pbxv33eaog ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_lt ) ; aiyjfcdcgo ( localDW
) ; } } } if ( localDW -> pbxv33eaog ) { localB -> o0whdfflfv = on0rfcpfjx ;
if ( ssIsMajorTimeStep ( rtS_lt ) ) { srUpdateBC ( localDW -> hsbxtekslw ) ;
} } } void khd1002t2x ( SimStruct * rtS_pj ) { if ( ssGetTaskTime ( rtS_pj ,
0 ) != ssGetTStart ( rtS_pj ) ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS_pj ) ; } } void pnow1l4kyo ( SimStruct * rtS_ap ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_ap ) ; } void n1lfiimiby (
SimStruct * rtS_po , real_T fmz5jwugbd , real_T bcu4phbam0 , awbgcbrtew *
localB ) { localB -> fvh0mv5ped = fmz5jwugbd ; if ( ssIsSampleHit ( rtS_po ,
1 , 0 ) ) { localB -> ga42gsoznq = bcu4phbam0 ; } } void kz5gtnsahb (
ncv4ywdvgw * localB , eaxkoxenm5 * localP ) { localB -> ivesxeoeky = localP
-> Out1_Y0 ; localB -> hqvgkhiase = localP -> Out2_Y0 ; } void n2esxjfgsp (
SimStruct * rtS_d0 ) { if ( ssGetTaskTime ( rtS_d0 , 0 ) != ssGetTStart (
rtS_d0 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_d0 ) ; } } void
ltcbsbpito ( SimStruct * rtS_pk , ncv4ywdvgw * localB , eaxkoxenm5 * localP )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_pk ) ; localB ->
ivesxeoeky = localP -> Out1_Y0 ; localB -> hqvgkhiase = localP -> Out2_Y0 ; }
void agyrpuacxw ( SimStruct * rtS_kh , real_T gb4054edpb , real_T n3ich25dpv
, ncv4ywdvgw * localB ) { localB -> ivesxeoeky = gb4054edpb ; if (
ssIsSampleHit ( rtS_kh , 1 , 0 ) ) { localB -> hqvgkhiase = n3ich25dpv ; } }
void kev2z1swdg ( c24jiyudwc * localB , alg0v0bidu * localP ) { localB ->
j0quskwuuz = localP -> Out1_Y0 ; localB -> pnuewr4pnd = localP -> Out2_Y0 ; }
void mxyuoe1l2f ( SimStruct * rtS_m4 ) { if ( ssGetTaskTime ( rtS_m4 , 0 ) !=
ssGetTStart ( rtS_m4 ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_m4 ) ; } } void j1cwalzf33 ( SimStruct * rtS_fv , c24jiyudwc * localB ,
alg0v0bidu * localP ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_fv )
; localB -> j0quskwuuz = localP -> Out1_Y0 ; } void okacab3hem ( SimStruct *
rtS_nf , real_T gte5alvamk , real_T g3glbw5d5r , c24jiyudwc * localB ) {
localB -> j0quskwuuz = gte5alvamk ; if ( ssIsSampleHit ( rtS_nf , 1 , 0 ) ) {
localB -> pnuewr4pnd = g3glbw5d5r ; } } void MdlInitialize ( void ) { int32_T
i ; rtX . pdhes0243g = rtP . Integrator2_IC ; rtX . bbqpxef5jj = rtP .
Integrator_IC_hpgpjt0nop ; rtX . iac0bbig40 [ 0 ] = rtP .
Integrator_IC_emuxkppjp0 [ 0 ] ; rtX . iac0bbig40 [ 1 ] = rtP .
Integrator_IC_emuxkppjp0 [ 1 ] ; rtX . muu4p2nsxg = rtP .
Integrator2_IC_k2g24to2ei ; rtX . b2y4k4jhrs = rtP . Integrator_IC_pucsnhcpsl
; rtX . dqrbmqffu1 [ 0 ] = rtP . Integrator_IC_f1grwpn21h [ 0 ] ; rtX .
dqrbmqffu1 [ 1 ] = rtP . Integrator_IC_f1grwpn21h [ 1 ] ; for ( i = 0 ; i < 6
; i ++ ) { rtX . fakh1pyzk2 [ i ] = rtP . Integrator_IC [ i ] ; rtX .
bkgemaqqxf [ i ] = rtP . Integrator_IC_bvi3ahtegq [ i ] ; rtX . kciqokkdbp [
i ] = rtP . Integrator_IC_gij5w20q3t [ i ] ; } rtX . mz4c440sms = rtP .
Integrator2_IC_jaqgdxnzf1 ; rtX . b2k3puejst = rtP . Integrator_IC_cmny1zo24a
; rtX . arn4ygznlx = rtP . StateSpace_InitialCondition ; rtX . foapz3f1gp =
rtP . StateSpace_InitialCondition_ifndqs2dzt ; rtX . k1dns1lhtr = rtP .
StateSpace_InitialCondition_fiqqx4xn4m ; rtX . bdufyngs0z = rtP .
StateSpace_InitialCondition_ltjalipc0r ; rtX . epcfokhqja = rtP .
StateSpace_InitialCondition_i3ooklv4hw ; rtX . ms4psfipsu = rtP .
StateSpace_InitialCondition_mqng3gryqh ; rtX . eujma4gurb = rtP .
Integrator_IC_gmwlqri0qi ; rtX . oapbefqol1 = rtP . Integrator_IC_pnvsf1ba1m
; rtX . peym1sqh5w = rtP . Integrator_IC_nl0jgal5ea ; rtX . mcp3qy3qh1 = rtP
. Integrator1_IC ; rtX . odbqoh1kbo = rtP . Integrator1_IC_p32eurgy5l ; rtX .
cdyb24riin = rtP . Integrator1_IC_bjb4q2iz5y ; rtX . geqsiyq0ae = rtP .
StateSpace_InitialCondition_m25r5xr5cb ; rtX . buk4mce4wc = rtP .
StateSpace_InitialCondition_hefobfpllp ; rtX . gkw3v2je2c = rtP .
StateSpace_InitialCondition_hwumlcdoea ; rtX . bl1q553mat [ 0 ] = rtP .
Integrator_IC_drqoe3ig4x [ 0 ] ; rtX . ah4t522etq [ 0 ] = 0.0 ; rtX .
bl1q553mat [ 1 ] = rtP . Integrator_IC_drqoe3ig4x [ 1 ] ; rtX . ah4t522etq [
1 ] = 0.0 ; rtX . bvtq2ilbrl = 0.0 ; rtX . khgmpyjcwf = 0.0 ; rtX .
b1sh5asqq5 = 0.0 ; rtX . iyljq0p2q2 = 0.0 ; rtX . a3ejw4k1vb [ 0 ] = 0.0 ;
rtX . a3ejw4k1vb [ 1 ] = 0.0 ; rtX . a3ejw4k1vb [ 2 ] = 0.0 ; rtX .
jkanx1c2sy = 0.0 ; rtX . eteakgjugc = 0.0 ; rtX . jjz0dmgypl [ 0 ] = 0.0 ;
rtX . jjz0dmgypl [ 1 ] = 0.0 ; rtX . pktwyfaegj = 0.0 ; rtX . kmavtzptxb =
0.0 ; rtX . mjafdcmdy1 = 0.0 ; rtX . dypjdbgmol = 0.0 ; rtX . fyveu4cgze [ 0
] = 0.0 ; rtX . fyveu4cgze [ 1 ] = 0.0 ; rtX . fyveu4cgze [ 2 ] = 0.0 ; rtX .
mvpvh5z4vn = 0.0 ; rtX . e23vbkc2br = 0.0 ; rtX . ikmxhmo1xy [ 0 ] = 0.0 ;
rtX . ikmxhmo1xy [ 1 ] = 0.0 ; rtX . bifrows3ko = 0.0 ; rtX . gurxs4gmgn =
0.0 ; rtX . dubgfafbwh = 0.0 ; rtX . d2qv1tdugi = 0.0 ; rtX . bmd550nn1i [ 0
] = 0.0 ; rtX . bmd550nn1i [ 1 ] = 0.0 ; rtX . bmd550nn1i [ 2 ] = 0.0 ; rtX .
ghhf5zgons = 0.0 ; rtX . crwxe3fyj2 = 0.0 ; rtX . okhrzumzrc = rtP .
StateSpace_InitialCondition_k0lpwmqnhh ; rtX . ftkzr43zza = rtP .
StateSpace_InitialCondition_jzsa1qw0wj ; rtX . dxbfyhuf2d = rtP .
StateSpace_InitialCondition_dfgndrpfvg ; rtX . c5xg25dykk = rtP .
speedregulator_g0 ; rtX . ex5tdiigau = rtP .
StateSpace_InitialCondition_idtqzsy2gb ; rtDW . iw2uuju0gd = ( rtInf ) ; rtDW
. gjffyzrfxn = ( rtInf ) ; rtX . hxdgb1014z = rtP .
StateSpace_InitialCondition_b2fyvswv1j ; rtX . jcmiv2o5uc = rtP .
StateSpace_InitialCondition_jzj00ak32w ; rtX . a1yjnjjcnf = rtP .
StateSpace_InitialCondition_l4ut445mc4 ; rtX . cj1z4j4qf4 = rtP .
StateSpace_InitialCondition_ooah045sog ; rtX . j1uiwy3djt = rtP .
speedregulator_g0_b4tdlya2jo ; rtX . hvtpmx4w53 = rtP .
StateSpace_InitialCondition_gf0hqls5d3 ; rtDW . a21uxkuhet = ( rtInf ) ; rtDW
. pvmeybyawr = ( rtInf ) ; rtX . kdzkh5hxbg = rtP .
StateSpace_InitialCondition_hmq15ssacn ; rtX . bln3vroqur = rtP .
StateSpace_InitialCondition_i2mtcc4jn1 ; rtX . hdvfrnkcmn = rtP .
StateSpace_InitialCondition_bj4ax5hyxu ; rtX . p2ai4f0o54 = rtP .
StateSpace_InitialCondition_an3kqgeozj ; rtX . a0k4henh31 = rtP .
speedregulator_g0_kw3dxhyhmf ; rtX . nyms3o1twt = rtP .
StateSpace_InitialCondition_gzvtpd02iz ; rtDW . dclt4t2f5x [ 0 ] = rtP .
Delay_InitialCondition ; rtDW . fj3pd2kyk2 [ 0 ] = rtP .
Delay_InitialCondition_mjzvst1qqx ; rtDW . n013u3cmat [ 0 ] = rtP .
Delay_InitialCondition_io0pemxg3l ; rtDW . dclt4t2f5x [ 1 ] = rtP .
Delay_InitialCondition ; rtDW . fj3pd2kyk2 [ 1 ] = rtP .
Delay_InitialCondition_mjzvst1qqx ; rtDW . n013u3cmat [ 1 ] = rtP .
Delay_InitialCondition_io0pemxg3l ; rtDW . ni1mvxhipb = ( rtInf ) ; rtDW .
ecyaenex24 = ( rtInf ) ; rtDW . f54via14pl = ( rtInf ) ; rtDW . maclwnp4zs =
( rtInf ) ; rtDW . gphntququz = ( rtInf ) ; rtDW . p4touhmkio = ( rtInf ) ;
rtDW . a2ge1egm5c = ( rtInf ) ; rtDW . hysefqvhk1 = ( rtInf ) ; rtDW .
gfxywmnqxm = ( rtInf ) ; rtDW . pn323d2g0n = ( rtInf ) ; o5n5elxdxc ( & rtP .
lfyyzy3mj4 , & rtX . lfyyzy3mj4 ) ; o5n5elxdxc ( & rtP . i3kxfqtdpbp , & rtX
. i3kxfqtdpbp ) ; o5n5elxdxc ( & rtP . jiiczdlcrb , & rtX . jiiczdlcrb ) ;
jjji3qywjw ( & rtB . mikcvz5h1f , & rtP . mikcvz5h1f , & rtX . mikcvz5h1f ) ;
jjji3qywjw ( & rtB . naitari34m , & rtP . naitari34m , & rtX . naitari34m ) ;
jjji3qywjw ( & rtB . c4bfgvlf1r , & rtP . c4bfgvlf1r , & rtX . c4bfgvlf1r ) ;
jjji3qywjw ( & rtB . cfxuytlxuwh , & rtP . cfxuytlxuwh , & rtX . cfxuytlxuwh
) ; jpeuaygsuk ( & rtB . eecdtyu2lcn , & rtP . eecdtyu2lcn , & rtX .
eecdtyu2lcn ) ; kz5gtnsahb ( & rtB . agyrpuacxw3 , & rtP . agyrpuacxw3 ) ;
kev2z1swdg ( & rtB . okacab3hemp , & rtP . okacab3hemp ) ; jjji3qywjw ( & rtB
. oq2a2iz1om , & rtP . oq2a2iz1om , & rtX . oq2a2iz1om ) ; jjji3qywjw ( & rtB
. n4yw4kkm3u , & rtP . n4yw4kkm3u , & rtX . n4yw4kkm3u ) ; jjji3qywjw ( & rtB
. hqbkpgyaw2 , & rtP . hqbkpgyaw2 , & rtX . hqbkpgyaw2 ) ; jjji3qywjw ( & rtB
. kl4qbbwlk2 , & rtP . kl4qbbwlk2 , & rtX . kl4qbbwlk2 ) ; jpeuaygsuk ( & rtB
. iicqzjvjtu , & rtP . iicqzjvjtu , & rtX . iicqzjvjtu ) ; kz5gtnsahb ( & rtB
. emv01xexxw , & rtP . emv01xexxw ) ; kev2z1swdg ( & rtB . civchsdznw , & rtP
. civchsdznw ) ; jjji3qywjw ( & rtB . im3skmxke2 , & rtP . im3skmxke2 , & rtX
. im3skmxke2 ) ; jjji3qywjw ( & rtB . i1jub4ytlu , & rtP . i1jub4ytlu , & rtX
. i1jub4ytlu ) ; jjji3qywjw ( & rtB . l2otctcrwa , & rtP . l2otctcrwa , & rtX
. l2otctcrwa ) ; jjji3qywjw ( & rtB . p3atgr1lvy , & rtP . p3atgr1lvy , & rtX
. p3atgr1lvy ) ; jpeuaygsuk ( & rtB . g0suhtc3bz , & rtP . g0suhtc3bz , & rtX
. g0suhtc3bz ) ; kz5gtnsahb ( & rtB . al5ms3ycop , & rtP . al5ms3ycop ) ;
kev2z1swdg ( & rtB . iwezxor5da , & rtP . iwezxor5da ) ; } void MdlStart (
void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2
= ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { int_T dimensions [ 1 ] = { 2 } ;
rtDW . ojv5uxhdfd . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "DTH" , SS_DOUBLE , 0 , 0 , 0 , 2 , 1 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 1 , 0.016666666666666666 , 1 ) ; if ( rtDW .
ojv5uxhdfd . LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 1 ] = {
3 } ; rtDW . easjgmyxrc . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "Pa" , SS_DOUBLE , 0 , 1 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.016666666666666666 , 1 ) ; if ( rtDW . easjgmyxrc . LoggedData == ( NULL )
) return ; } { int_T dimensions [ 1 ] = { 3 } ; rtDW . bo5hxdyszn .
LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS )
, ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Vt" ,
SS_DOUBLE , 0 , 1 , 0 , 3 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , (
NULL ) , 0 , 1 , 0.016666666666666666 , 1 ) ; if ( rtDW . bo5hxdyszn .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 1 ] = { 3 } ; rtDW .
j33iuvbthk . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "EFD" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 1 , 0.016666666666666666 , 1 ) ; if ( rtDW .
j33iuvbthk . LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 1 ] = {
3 } ; rtDW . erq1ovxym4 . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "PSS" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.016666666666666666 , 1 ) ; if ( rtDW . erq1ovxym4 . LoggedData == ( NULL )
) return ; } { int_T dimensions [ 1 ] = { 3 } ; rtDW . hu1rcwtl0f .
LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS )
, ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Pe" ,
SS_DOUBLE , 0 , 0 , 0 , 3 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , (
NULL ) , 0 , 1 , 0.016666666666666666 , 1 ) ; if ( rtDW . hu1rcwtl0f .
LoggedData == ( NULL ) ) return ; } { int_T dimensions [ 1 ] = { 1 } ; rtDW .
dzggppucqe . LoggedData = rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "t" , SS_DOUBLE , 0 , 0 , 0 , 1 , 1 , dimensions , NO_LOGVALDIMS , (
NULL ) , ( NULL ) , 0 , 1 , 0.016666666666666666 , 1 ) ; if ( rtDW .
dzggppucqe . LoggedData == ( NULL ) ) return ; } jglthweouv ( rtS , & rtDW .
lfyyzy3mj4 , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> lfyyzy3mj4 )
; jglthweouv ( rtS , & rtDW . i3kxfqtdpbp , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> i3kxfqtdpbp ) ; jglthweouv ( rtS , & rtDW
. jiiczdlcrb , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> jiiczdlcrb
) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } gk2gtbji30 ( rtS , & rtDW .
nwwecupcxr3 ) ; hpbcf1hh3a ( rtS , & rtDW . eaz24jybtas ) ; c1f43dj3uj ( rtS
, & rtDW . p5n4z0qa43g ) ; ild0b0civf ( rtS , & rtDW . n12bdjrzo2e ) ;
emxfb3k3z5 ( rtS , & rtDW . pu5sgumjsdm ) ; lcz2v1utwa ( rtS , & rtDW .
brervxhrpps ) ; gk2gtbji30 ( rtS , & rtDW . b3kk3xvbzl ) ; hpbcf1hh3a ( rtS ,
& rtDW . cmxdysxk15 ) ; c1f43dj3uj ( rtS , & rtDW . ako1qu1fpl ) ; ild0b0civf
( rtS , & rtDW . hkobjilnmt ) ; emxfb3k3z5 ( rtS , & rtDW . fxig4dac3b ) ;
lcz2v1utwa ( rtS , & rtDW . osligu4cvh ) ; gk2gtbji30 ( rtS , & rtDW .
iajwi2yieg ) ; hpbcf1hh3a ( rtS , & rtDW . mtlhcioyxm ) ; c1f43dj3uj ( rtS ,
& rtDW . cnotxc2z3h ) ; ild0b0civf ( rtS , & rtDW . ivzbiu131n ) ; emxfb3k3z5
( rtS , & rtDW . gsfdft5hdw ) ; lcz2v1utwa ( rtS , & rtDW . fdljmutgrr ) ;
atxrch0hdu ( rtS , & rtDW . mikcvz5h1f , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> mikcvz5h1f ) ; atxrch0hdu ( rtS , & rtDW
. naitari34m , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> naitari34m
) ; atxrch0hdu ( rtS , & rtDW . c4bfgvlf1r , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> c4bfgvlf1r ) ; atxrch0hdu ( rtS , & rtDW
. cfxuytlxuwh , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ->
cfxuytlxuwh ) ; cmznlkl0l4 ( rtS , & rtDW . eecdtyu2lcn , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> eecdtyu2lcn ) ; rtDW . ikdujdqbhz = - 1 ;
d2rews4rry ( rtS , & rtDW . ef3bwkvl4et ) ; rtDW . c3m352mirs = - 1 ;
atxrch0hdu ( rtS , & rtDW . oq2a2iz1om , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> oq2a2iz1om ) ; atxrch0hdu ( rtS , & rtDW
. n4yw4kkm3u , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> n4yw4kkm3u
) ; atxrch0hdu ( rtS , & rtDW . hqbkpgyaw2 , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> hqbkpgyaw2 ) ; atxrch0hdu ( rtS , & rtDW
. kl4qbbwlk2 , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> kl4qbbwlk2
) ; cmznlkl0l4 ( rtS , & rtDW . iicqzjvjtu , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> iicqzjvjtu ) ; rtDW . carppcocfa = - 1 ;
d2rews4rry ( rtS , & rtDW . bfu21rlfhj ) ; rtDW . bi0bokrgo0 = - 1 ;
atxrch0hdu ( rtS , & rtDW . im3skmxke2 , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> im3skmxke2 ) ; atxrch0hdu ( rtS , & rtDW
. i1jub4ytlu , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> i1jub4ytlu
) ; atxrch0hdu ( rtS , & rtDW . l2otctcrwa , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> l2otctcrwa ) ; atxrch0hdu ( rtS , & rtDW
. p3atgr1lvy , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> p3atgr1lvy
) ; cmznlkl0l4 ( rtS , & rtDW . g0suhtc3bz , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> g0suhtc3bz ) ; rtDW . gyxlvs3yne = - 1 ;
d2rews4rry ( rtS , & rtDW . bkh4bldsrc ) ; rtDW . fqseq5egae = - 1 ;
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T jm15w1uz2s ;
real_T gz5bujd4zh ; real_T o1bovy5wfl ; real_T * lastU ; real_T mjmwpz3hat ;
boolean_T llvwpql3ra ; real_T hvxfwg50kf ; int8_T rtPrevAction ; int8_T
rtAction ; boolean_T pegf0ujucm ; real_T k353nkijvg ; boolean_T ok1cl11fbo ;
real_T jc0d42jx0q ; real_T f5mrfc0rmf [ 36 ] ; int32_T i ; int32_T i_p ;
real_T re ; real_T im ; real_T re_p ; real_T im_p ; real_T eiagzuoprf ;
real_T im_e ; real_T re_e ; real_T im_i ; real_T re_i ; real_T im_m ;
srClearBC ( rtDW . pu5sgumjsdm . cti4j40whk ) ; srClearBC ( rtDW .
brervxhrpps . kr10x0g2eh ) ; srClearBC ( rtDW . p5n4z0qa43g . agocbzgv3b ) ;
srClearBC ( rtDW . n12bdjrzo2e . ouauph2cdg ) ; srClearBC ( rtDW .
nwwecupcxr3 . mjauax0g2q ) ; srClearBC ( rtDW . eaz24jybtas . kyf3z0bmdo ) ;
srClearBC ( rtDW . eecdtyu2lcn . aowgz4u5ao ) ; srClearBC ( rtDW .
eecdtyu2lcn . muk3ngphda ) ; srClearBC ( rtDW . eecdtyu2lcn . p0qoxump3h ) ;
srClearBC ( rtDW . eecdtyu2lcn . hj211nghnp ) ; srClearBC ( rtDW .
eecdtyu2lcn . mnbpbp4fph ) ; srClearBC ( rtDW . cfxuytlxuwh . pjsxu0fvzv ) ;
srClearBC ( rtDW . i3kxfqtdpbp . ilxp0cy4vk ) ; srClearBC ( rtDW .
i3kxfqtdpbp . darzzav0jw ) ; srClearBC ( rtDW . ef3bwkvl4et . hsbxtekslw ) ;
srClearBC ( rtDW . n1lfiimibyh . jiohbu5vfc ) ; srClearBC ( rtDW .
agyrpuacxw3 . i3jfuj41qy ) ; srClearBC ( rtDW . okacab3hemp . ioximvoylt ) ;
for ( i = 0 ; i < 6 ; i ++ ) { rtB . oi4me3vzpe [ i ] = rtX . fakh1pyzk2 [ i
] ; } i3kxfqtdpb ( rtS , rtP . Constant1_Value , rtB . oi4me3vzpe , & rtB .
lfyyzy3mj4 , & rtDW . lfyyzy3mj4 , & rtP . lfyyzy3mj4 , & rtX . lfyyzy3mj4 ,
& ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> lfyyzy3mj4 ) ; if ( rtP .
Constant3_Value >= rtP . Switch_Threshold_c5kmeiffji ) { memcpy ( & rtB .
ff0vn1mbyk [ 0 ] , & rtB . lfyyzy3mj4 . nztfpw3vzb [ 0 ] , 36U * sizeof (
real_T ) ) ; } else { memcpy ( & rtB . ff0vn1mbyk [ 0 ] , & rtP .
Constant4_Value [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0 ; i < 6 ; i
++ ) { rtB . kkrqvuep53 [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) {
rtB . kkrqvuep53 [ i ] += rtB . ff0vn1mbyk [ 6 * i_p + i ] * rtB . oi4me3vzpe
[ i_p ] ; } rtB . jncvcbdtnq [ i ] = rtP . changeIqIdcurrentsigns_Gain [ i ]
* rtB . kkrqvuep53 [ i ] ; } rtB . o5tuhgm2rk . re = rtB . jncvcbdtnq [ 1 ] ;
rtB . o5tuhgm2rk . im = rtB . jncvcbdtnq [ 0 ] ; rtB . kwzkk1c41h = rtX .
pdhes0243g ; rtB . e5i5ktyv12 = rtP . web2_Gain * ssGetT ( rtS ) ; rtB .
ed24evenri = rtB . kwzkk1c41h + rtB . e5i5ktyv12 ; rtB . avoekdfeau = rtX .
bbqpxef5jj ; rtB . irikf2pyub = rtB . ed24evenri - rtB . avoekdfeau ; rtB .
bjzub5mhka . re = rtP . Gain2_Gain_hkzhczsimv . re * rtB . irikf2pyub ; rtB .
bjzub5mhka . im = rtP . Gain2_Gain_hkzhczsimv . im * rtB . irikf2pyub ;
mjmwpz3hat = muDoubleScalarExp ( rtB . bjzub5mhka . re ) ; if ( rtB .
bjzub5mhka . im == 0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; }
else { eiagzuoprf = mjmwpz3hat * muDoubleScalarCos ( rtB . bjzub5mhka . im )
; mjmwpz3hat *= muDoubleScalarSin ( rtB . bjzub5mhka . im ) ; } rtB .
kjc134rogj . re = rtB . o5tuhgm2rk . re * eiagzuoprf - rtB . o5tuhgm2rk . im
* mjmwpz3hat ; rtB . kjc134rogj . im = rtB . o5tuhgm2rk . re * mjmwpz3hat +
rtB . o5tuhgm2rk . im * eiagzuoprf ; rtB . fo2gdsn113 [ 0 ] = rtX .
iac0bbig40 [ 0 ] ; rtB . fo2gdsn113 [ 1 ] = rtX . iac0bbig40 [ 1 ] ; rtB .
c5s0yzynsx . re = rtB . fo2gdsn113 [ 0 ] ; rtB . c5s0yzynsx . im = rtB .
fo2gdsn113 [ 1 ] ; rtB . hyvrvnapov . re = rtB . kjc134rogj . re + rtB .
c5s0yzynsx . re ; rtB . hyvrvnapov . im = rtB . kjc134rogj . im + rtB .
c5s0yzynsx . im ; rtB . iuws5wbcoh . re = rtP . a2_Gain . re * rtB .
kjc134rogj . re - rtP . a2_Gain . im * rtB . kjc134rogj . im ; rtB .
iuws5wbcoh . im = rtP . a2_Gain . re * rtB . kjc134rogj . im + rtP . a2_Gain
. im * rtB . kjc134rogj . re ; rtB . lgacn4c3ag . re = rtP . a_Gain . re *
rtB . c5s0yzynsx . re - rtP . a_Gain . im * rtB . c5s0yzynsx . im ; rtB .
lgacn4c3ag . im = rtP . a_Gain . re * rtB . c5s0yzynsx . im + rtP . a_Gain .
im * rtB . c5s0yzynsx . re ; rtB . apuymfs4jd . re = rtB . iuws5wbcoh . re +
rtB . lgacn4c3ag . re ; rtB . apuymfs4jd . im = rtB . iuws5wbcoh . im + rtB .
lgacn4c3ag . im ; rtB . l4xpyw1lla [ 0 ] . re = rtP . PU2A_Gain * rtB .
hyvrvnapov . re ; rtB . l4xpyw1lla [ 0 ] . im = rtP . PU2A_Gain * rtB .
hyvrvnapov . im ; rtB . l4xpyw1lla [ 1 ] . re = rtP . PU2A_Gain * rtB .
apuymfs4jd . re ; rtB . l4xpyw1lla [ 1 ] . im = rtP . PU2A_Gain * rtB .
apuymfs4jd . im ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . grih5mbomn [ i ] = rtX
. bkgemaqqxf [ i ] ; } i3kxfqtdpb ( rtS , rtP . Constant1_Value_cwyab01xdw ,
rtB . grih5mbomn , & rtB . i3kxfqtdpbp , & rtDW . i3kxfqtdpbp , & rtP .
i3kxfqtdpbp , & rtX . i3kxfqtdpbp , & ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) -> i3kxfqtdpbp ) ; if ( rtP . Constant3_Value_h0iqkhgyun >= rtP .
Switch_Threshold_ewsie1q0xo ) { memcpy ( & rtB . oepxo5qytl [ 0 ] , & rtB .
i3kxfqtdpbp . nztfpw3vzb [ 0 ] , 36U * sizeof ( real_T ) ) ; } else { memcpy
( & rtB . oepxo5qytl [ 0 ] , & rtP . Constant4_Value_nfs10s13hz [ 0 ] , 36U *
sizeof ( real_T ) ) ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB . nempxuambx [ i ]
= 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . nempxuambx [ i ] += rtB .
oepxo5qytl [ 6 * i_p + i ] * rtB . grih5mbomn [ i_p ] ; } rtB . nz52gdgv4a [
i ] = rtP . changeIqIdcurrentsigns_Gain_mcjihstxnd [ i ] * rtB . nempxuambx [
i ] ; } rtB . bwhwvubvvc . re = rtB . nz52gdgv4a [ 1 ] ; rtB . bwhwvubvvc .
im = rtB . nz52gdgv4a [ 0 ] ; rtB . lx0j4ypnjr = rtX . muu4p2nsxg ; rtB .
nmcuxy3j1k = rtP . web2_Gain_lcgt1j5joi * ssGetT ( rtS ) ; rtB . juah0kknyf =
rtB . lx0j4ypnjr + rtB . nmcuxy3j1k ; rtB . ae400exzcu = rtX . b2y4k4jhrs ;
rtB . dqupdqrsdd = rtB . juah0kknyf - rtB . ae400exzcu ; rtB . pbp5ng2avr .
re = rtP . Gain2_Gain_i5y4vbvcfk . re * rtB . dqupdqrsdd ; rtB . pbp5ng2avr .
im = rtP . Gain2_Gain_i5y4vbvcfk . im * rtB . dqupdqrsdd ; mjmwpz3hat =
muDoubleScalarExp ( rtB . pbp5ng2avr . re ) ; if ( rtB . pbp5ng2avr . im ==
0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; } else { eiagzuoprf =
mjmwpz3hat * muDoubleScalarCos ( rtB . pbp5ng2avr . im ) ; mjmwpz3hat *=
muDoubleScalarSin ( rtB . pbp5ng2avr . im ) ; } rtB . ggyvxlxmi3 . re = rtB .
bwhwvubvvc . re * eiagzuoprf - rtB . bwhwvubvvc . im * mjmwpz3hat ; rtB .
ggyvxlxmi3 . im = rtB . bwhwvubvvc . re * mjmwpz3hat + rtB . bwhwvubvvc . im
* eiagzuoprf ; rtB . okaisqi0u5 [ 0 ] = rtX . dqrbmqffu1 [ 0 ] ; rtB .
okaisqi0u5 [ 1 ] = rtX . dqrbmqffu1 [ 1 ] ; rtB . al4bbhjpb3 . re = rtB .
okaisqi0u5 [ 0 ] ; rtB . al4bbhjpb3 . im = rtB . okaisqi0u5 [ 1 ] ; rtB .
lkgchv4mjj . re = rtB . ggyvxlxmi3 . re + rtB . al4bbhjpb3 . re ; rtB .
lkgchv4mjj . im = rtB . ggyvxlxmi3 . im + rtB . al4bbhjpb3 . im ; rtB .
de2i1oyqat . re = rtP . a2_Gain_hwupnoab4s . re * rtB . ggyvxlxmi3 . re - rtP
. a2_Gain_hwupnoab4s . im * rtB . ggyvxlxmi3 . im ; rtB . de2i1oyqat . im =
rtP . a2_Gain_hwupnoab4s . re * rtB . ggyvxlxmi3 . im + rtP .
a2_Gain_hwupnoab4s . im * rtB . ggyvxlxmi3 . re ; rtB . dlrxhzxxd0 . re = rtP
. a_Gain_fjdmgsyium . re * rtB . al4bbhjpb3 . re - rtP . a_Gain_fjdmgsyium .
im * rtB . al4bbhjpb3 . im ; rtB . dlrxhzxxd0 . im = rtP . a_Gain_fjdmgsyium
. re * rtB . al4bbhjpb3 . im + rtP . a_Gain_fjdmgsyium . im * rtB .
al4bbhjpb3 . re ; rtB . bwz24ezfr0 . re = rtB . de2i1oyqat . re + rtB .
dlrxhzxxd0 . re ; rtB . bwz24ezfr0 . im = rtB . de2i1oyqat . im + rtB .
dlrxhzxxd0 . im ; rtB . m0khf1wybm [ 0 ] . re = rtP . PU2A_Gain_azmhbsp3d5 *
rtB . lkgchv4mjj . re ; rtB . m0khf1wybm [ 0 ] . im = rtP .
PU2A_Gain_azmhbsp3d5 * rtB . lkgchv4mjj . im ; rtB . m0khf1wybm [ 1 ] . re =
rtP . PU2A_Gain_azmhbsp3d5 * rtB . bwz24ezfr0 . re ; rtB . m0khf1wybm [ 1 ] .
im = rtP . PU2A_Gain_azmhbsp3d5 * rtB . bwz24ezfr0 . im ; for ( i = 0 ; i < 6
; i ++ ) { rtB . hkzza5jukv [ i ] = rtX . kciqokkdbp [ i ] ; } i3kxfqtdpb (
rtS , rtP . Constant1_Value_gfebqf10cs , rtB . hkzza5jukv , & rtB .
jiiczdlcrb , & rtDW . jiiczdlcrb , & rtP . jiiczdlcrb , & rtX . jiiczdlcrb ,
& ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> jiiczdlcrb ) ; if ( rtP .
Constant3_Value_jmi2b1y04h >= rtP . Switch_Threshold_he4u3f2dth ) { memcpy (
& rtB . hh1wohcsqs [ 0 ] , & rtB . jiiczdlcrb . nztfpw3vzb [ 0 ] , 36U *
sizeof ( real_T ) ) ; } else { memcpy ( & rtB . hh1wohcsqs [ 0 ] , & rtP .
Constant4_Value_e053asnnap [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0
; i < 6 ; i ++ ) { rtB . cmzxioqfdz [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ;
i_p ++ ) { rtB . cmzxioqfdz [ i ] += rtB . hh1wohcsqs [ 6 * i_p + i ] * rtB .
hkzza5jukv [ i_p ] ; } rtB . dx0e1lhobw [ i ] = rtP .
changeIqIdcurrentsigns_Gain_gezrjo2oai [ i ] * rtB . cmzxioqfdz [ i ] ; } rtB
. blymzd2uc5 . re = rtB . dx0e1lhobw [ 1 ] ; rtB . blymzd2uc5 . im = rtB .
dx0e1lhobw [ 0 ] ; rtB . pdzx3ova52 = rtX . mz4c440sms ; rtB . irfszz0pfb =
rtP . web2_Gain_f1t1hge5pw * ssGetT ( rtS ) ; rtB . fi4j4wpwdt = rtB .
pdzx3ova52 + rtB . irfszz0pfb ; rtB . jayffz3010 = rtX . b2k3puejst ; rtB .
lejchdnshr = rtB . fi4j4wpwdt - rtB . jayffz3010 ; rtB . liwm2bevu0 . re =
rtP . Gain2_Gain_inkkx3wv0g . re * rtB . lejchdnshr ; rtB . liwm2bevu0 . im =
rtP . Gain2_Gain_inkkx3wv0g . im * rtB . lejchdnshr ; mjmwpz3hat =
muDoubleScalarExp ( rtB . liwm2bevu0 . re ) ; if ( rtB . liwm2bevu0 . im ==
0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; } else { eiagzuoprf =
mjmwpz3hat * muDoubleScalarCos ( rtB . liwm2bevu0 . im ) ; mjmwpz3hat *=
muDoubleScalarSin ( rtB . liwm2bevu0 . im ) ; } rtB . epdgie01be . re = rtB .
blymzd2uc5 . re * eiagzuoprf - rtB . blymzd2uc5 . im * mjmwpz3hat ; rtB .
epdgie01be . im = rtB . blymzd2uc5 . re * mjmwpz3hat + rtB . blymzd2uc5 . im
* eiagzuoprf ; rtB . h1fv3imr2t [ 0 ] = rtX . bl1q553mat [ 0 ] ; rtB .
h1fv3imr2t [ 1 ] = rtX . bl1q553mat [ 1 ] ; rtB . dusuwyivzd . re = rtB .
h1fv3imr2t [ 0 ] ; rtB . dusuwyivzd . im = rtB . h1fv3imr2t [ 1 ] ; rtB .
aldfxrbloj . re = rtB . epdgie01be . re + rtB . dusuwyivzd . re ; rtB .
aldfxrbloj . im = rtB . epdgie01be . im + rtB . dusuwyivzd . im ; rtB .
gzyb44vxr5 . re = rtP . a2_Gain_okuzjezrwu . re * rtB . epdgie01be . re - rtP
. a2_Gain_okuzjezrwu . im * rtB . epdgie01be . im ; rtB . gzyb44vxr5 . im =
rtP . a2_Gain_okuzjezrwu . re * rtB . epdgie01be . im + rtP .
a2_Gain_okuzjezrwu . im * rtB . epdgie01be . re ; rtB . omaqtkjuu4 . re = rtP
. a_Gain_btx4wcssk2 . re * rtB . dusuwyivzd . re - rtP . a_Gain_btx4wcssk2 .
im * rtB . dusuwyivzd . im ; rtB . omaqtkjuu4 . im = rtP . a_Gain_btx4wcssk2
. re * rtB . dusuwyivzd . im + rtP . a_Gain_btx4wcssk2 . im * rtB .
dusuwyivzd . re ; rtB . mr3dilex2b . re = rtB . gzyb44vxr5 . re + rtB .
omaqtkjuu4 . re ; rtB . mr3dilex2b . im = rtB . gzyb44vxr5 . im + rtB .
omaqtkjuu4 . im ; rtB . kz3f0psz4w [ 0 ] . re = rtP . PU2A_Gain_jwwlz35jgo *
rtB . aldfxrbloj . re ; rtB . kz3f0psz4w [ 0 ] . im = rtP .
PU2A_Gain_jwwlz35jgo * rtB . aldfxrbloj . im ; rtB . kz3f0psz4w [ 1 ] . re =
rtP . PU2A_Gain_jwwlz35jgo * rtB . mr3dilex2b . re ; rtB . kz3f0psz4w [ 1 ] .
im = rtP . PU2A_Gain_jwwlz35jgo * rtB . mr3dilex2b . im ; rtB . frzz42cwjl =
0.0 ; rtB . frzz42cwjl += rtP . StateSpace_C * rtX . arn4ygznlx ; rtB .
iu3aa1vbnh = 0.0 ; rtB . iu3aa1vbnh += rtP . StateSpace_C_jbglukssej * rtX .
foapz3f1gp ; rtB . jj2dlwza4q . re = rtB . frzz42cwjl ; rtB . jj2dlwza4q . im
= rtB . iu3aa1vbnh ; rtB . eaxfxtm05w . re = rtP . a2_Gain_hdpbuksf2w . re *
rtB . jj2dlwza4q . re - rtP . a2_Gain_hdpbuksf2w . im * rtB . jj2dlwza4q . im
; rtB . eaxfxtm05w . im = rtP . a2_Gain_hdpbuksf2w . re * rtB . jj2dlwza4q .
im + rtP . a2_Gain_hdpbuksf2w . im * rtB . jj2dlwza4q . re ; rtB . olde1vrxhn
= 0.0 ; rtB . olde1vrxhn += rtP . StateSpace_C_h3nfr2du2i * rtX . k1dns1lhtr
; rtB . fpjav3aihc = 0.0 ; rtB . fpjav3aihc += rtP . StateSpace_C_erhqcd3yut
* rtX . bdufyngs0z ; rtB . klooybbqkh . re = rtB . olde1vrxhn ; rtB .
klooybbqkh . im = rtB . fpjav3aihc ; rtB . g0iuzw4goy . re = rtP .
a2_Gain_gooewqhr41 . re * rtB . klooybbqkh . re - rtP . a2_Gain_gooewqhr41 .
im * rtB . klooybbqkh . im ; rtB . g0iuzw4goy . im = rtP . a2_Gain_gooewqhr41
. re * rtB . klooybbqkh . im + rtP . a2_Gain_gooewqhr41 . im * rtB .
klooybbqkh . re ; rtB . dqmwztxdnr = 0.0 ; rtB . dqmwztxdnr += rtP .
StateSpace_C_kxy3xw0jje * rtX . epcfokhqja ; rtB . fye3btyrzs = 0.0 ; rtB .
fye3btyrzs += rtP . StateSpace_C_kbolkmh3op * rtX . ms4psfipsu ; rtB .
fhus4knob4 . re = rtB . dqmwztxdnr ; rtB . fhus4knob4 . im = rtB . fye3btyrzs
; rtB . ec35jpgpyq . re = rtP . a2_Gain_dwoclxyn35 . re * rtB . fhus4knob4 .
re - rtP . a2_Gain_dwoclxyn35 . im * rtB . fhus4knob4 . im ; rtB . ec35jpgpyq
. im = rtP . a2_Gain_dwoclxyn35 . re * rtB . fhus4knob4 . im + rtP .
a2_Gain_dwoclxyn35 . im * rtB . fhus4knob4 . re ; rtB . ag4s5axk25 [ 0 ] =
rtP . SwitchCurrents_Value [ 0 ] . re ; rtB . ag4s5axk25 [ 1 ] = rtP .
SwitchCurrents_Value [ 1 ] . re ; rtB . ag4s5axk25 [ 2 ] = rtP .
SwitchCurrents_Value [ 2 ] . re ; rtB . ag4s5axk25 [ 3 ] = rtB . l4xpyw1lla [
0 ] . re ; rtB . ag4s5axk25 [ 5 ] = rtB . m0khf1wybm [ 0 ] . re ; rtB .
ag4s5axk25 [ 7 ] = rtB . kz3f0psz4w [ 0 ] . re ; rtB . ag4s5axk25 [ 4 ] = rtB
. l4xpyw1lla [ 1 ] . re ; rtB . ag4s5axk25 [ 6 ] = rtB . m0khf1wybm [ 1 ] .
re ; rtB . ag4s5axk25 [ 8 ] = rtB . kz3f0psz4w [ 1 ] . re ; rtB . ag4s5axk25
[ 9 ] = rtB . eaxfxtm05w . re ; rtB . ag4s5axk25 [ 10 ] = rtB . jj2dlwza4q .
re ; rtB . ag4s5axk25 [ 11 ] = rtB . g0iuzw4goy . re ; rtB . ag4s5axk25 [ 12
] = rtB . klooybbqkh . re ; rtB . ag4s5axk25 [ 13 ] = rtB . ec35jpgpyq . re ;
rtB . ag4s5axk25 [ 14 ] = rtB . fhus4knob4 . re ; rtB . et55wkirxx [ 0 ] =
rtP . SwitchCurrents_Value [ 0 ] . im ; rtB . et55wkirxx [ 1 ] = rtP .
SwitchCurrents_Value [ 1 ] . im ; rtB . et55wkirxx [ 2 ] = rtP .
SwitchCurrents_Value [ 2 ] . im ; rtB . et55wkirxx [ 3 ] = rtB . l4xpyw1lla [
0 ] . im ; rtB . et55wkirxx [ 5 ] = rtB . m0khf1wybm [ 0 ] . im ; rtB .
et55wkirxx [ 7 ] = rtB . kz3f0psz4w [ 0 ] . im ; rtB . et55wkirxx [ 4 ] = rtB
. l4xpyw1lla [ 1 ] . im ; rtB . et55wkirxx [ 6 ] = rtB . m0khf1wybm [ 1 ] .
im ; rtB . et55wkirxx [ 8 ] = rtB . kz3f0psz4w [ 1 ] . im ; rtB . et55wkirxx
[ 9 ] = rtB . eaxfxtm05w . im ; rtB . et55wkirxx [ 10 ] = rtB . jj2dlwza4q .
im ; rtB . et55wkirxx [ 11 ] = rtB . g0iuzw4goy . im ; rtB . et55wkirxx [ 12
] = rtB . klooybbqkh . im ; rtB . et55wkirxx [ 13 ] = rtB . ec35jpgpyq . im ;
rtB . et55wkirxx [ 14 ] = rtB . fhus4knob4 . im ; mjmwpz3hat = ssGetT ( rtS )
; if ( mjmwpz3hat == 0.0 ) { rtB . is5fcofe05 = rtP . LookUpTable_Yat0 ; }
else { rtB . is5fcofe05 = rt_Lookup ( rtP . LookUpTable_XData , 4 ,
mjmwpz3hat , rtP . LookUpTable_YData ) ; } if ( rtP . C4_Value >= rtP .
Switch3_Threshold ) { rtB . dtt1kgmp2k = rtP . com_Value ; } else { rtB .
dtt1kgmp2k = rtB . is5fcofe05 ; } rtB . eqjugw2g4v = rt_Lookup ( rtP .
LookUpTable_XData_kmcs344j1j , 5 , ssGetT ( rtS ) , rtP .
LookUpTable_YData_fkv0qiz3iv ) ; if ( rtP . C4_Value_nvdjz5243s >= rtP .
Switch3_Threshold_f1mmjkngez ) { if ( rtP . ThreePhaseBreaker_SwitchA >= rtP
. Switch_Threshold ) { rtB . pxtmgndjyo = rtB . dtt1kgmp2k ; } else { rtB .
pxtmgndjyo = rtP . Constant5_Value ; } rtB . cqcamkkows = rtB . pxtmgndjyo ;
} else { rtB . cqcamkkows = rtB . eqjugw2g4v ; } rtB . hjzava2wz4 = rt_Lookup
( rtP . LookUpTable_XData_ohhmiqbaf3 , 5 , ssGetT ( rtS ) , rtP .
LookUpTable_YData_id2gp0uwqj ) ; if ( rtP . C4_Value_pnyuipndxg >= rtP .
Switch3_Threshold_nnqr4pvbky ) { if ( rtP . ThreePhaseBreaker_SwitchB >= rtP
. Switch1_Threshold ) { rtB . clj1apcqaj = rtB . dtt1kgmp2k ; } else { rtB .
clj1apcqaj = rtP . Constant5_Value ; } rtB . c1dqwcqr33 = rtB . clj1apcqaj ;
} else { rtB . c1dqwcqr33 = rtB . hjzava2wz4 ; } rtB . cdoxozri4g = rt_Lookup
( rtP . LookUpTable_XData_etcctsvmw3 , 5 , ssGetT ( rtS ) , rtP .
LookUpTable_YData_hfimmiqrun ) ; if ( rtP . C4_Value_oo3moohz2g >= rtP .
Switch3_Threshold_bxrxnkofap ) { if ( rtP . ThreePhaseBreaker_SwitchC >= rtP
. Switch2_Threshold ) { rtB . gt4dvriw2c = rtB . dtt1kgmp2k ; } else { rtB .
gt4dvriw2c = rtP . Constant5_Value ; } rtB . hkyauco4mx = rtB . gt4dvriw2c ;
} else { rtB . hkyauco4mx = rtB . cdoxozri4g ; } { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnOutputs ( rts , 0 ) ; } for ( i = 0 ; i <
105 ; i ++ ) { rtB . bhnb4tmjw1 [ i ] . re = rtB . jjfqmcafuv [ i ] ; rtB .
bhnb4tmjw1 [ i ] . im = rtB . jjfqmcafuv [ i + 105 ] ; } rtB . ox3rpabdma =
rtX . eujma4gurb ; rtB . lrja4qihgz = rtP . nomspeed_Value + rtB . ox3rpabdma
; rtB . l3b2ivdy05 = rtP . units_Gain * rtB . lrja4qihgz ; rtB . gxjenmymi3 =
rtX . oapbefqol1 ; rtB . gnmso3ufns = rtP . nomspeed_Value_c0nk3zhzcj + rtB .
gxjenmymi3 ; rtB . ibjh32sw1c = rtP . units_Gain_g4mnkkbnfx * rtB .
gnmso3ufns ; rtB . a2wjqrujdb = rtX . peym1sqh5w ; rtB . jxxv1skywx = rtP .
nomspeed_Value_izoa4dwj5u + rtB . a2wjqrujdb ; rtB . emr2fhbqxu = rtP .
units_Gain_jccxsq1mba * rtB . jxxv1skywx ; rtB . n3ykg5oum3 = rtX .
mcp3qy3qh1 ; rtB . izczrwjtiy = rtX . odbqoh1kbo ; mjmwpz3hat = rtP .
theta_Gain_okb0e1taom * rtB . izczrwjtiy ; rtB . dvocrbaqy2 = rtP .
theta_Gain * rtB . n3ykg5oum3 - mjmwpz3hat ; rtB . mn5e1uhnee = rtX .
cdyb24riin ; rtB . m02kxelm2q = rtP . theta_Gain_kqbezehmli * rtB .
mn5e1uhnee - mjmwpz3hat ; rtB . niyytuv12u [ 1 ] = rtP . uLl_q_Gain [ 1 ] *
rtB . grih5mbomn [ 4 ] ; rtB . niyytuv12u [ 2 ] = rtP . uLl_q_Gain [ 2 ] *
rtB . grih5mbomn [ 5 ] ; rtB . nhivzcmpkc . re = rtB . lkgchv4mjj . re + rtB
. bwz24ezfr0 . re ; rtB . nhivzcmpkc . im = rtB . lkgchv4mjj . im + rtB .
bwz24ezfr0 . im ; rtB . aezifhoqem . re = rtP . inv_Gain * rtB . nhivzcmpkc .
re ; rtB . aezifhoqem . im = rtP . inv_Gain * rtB . nhivzcmpkc . im ; if (
rtP . Constant1_Value_kkwfuxsc30 ) { rtB . dyeev12q22 = rtB . nz52gdgv4a [ 5
] ; } else { rtB . dyeev12q22 = rtP . Constant2_Value ; } rtB . niyytuv12u [
0 ] = rtP . uLl_q_Gain [ 0 ] * rtB . grih5mbomn [ 0 ] ; if ( rtP .
Constant8_Value >= rtP . Switch3_Threshold_pzemxjv5z4 ) { rtB . hikp3uxxab [
0 ] = rtB . i3kxfqtdpbp . b5usiw2dap ; rtB . hikp3uxxab [ 1 ] = rtB .
i3kxfqtdpbp . ij3q0zbi3l ; } else { rtB . hikp3uxxab [ 0 ] = rtP .
Laqd_nosat_Value [ 0 ] ; rtB . hikp3uxxab [ 1 ] = rtP . Laqd_nosat_Value [ 1
] ; } rtB . ghwhuiv0f3 [ 0 ] = rtB . niyytuv12u [ 0 ] * rtB . hikp3uxxab [ 0
] ; rtB . ghwhuiv0f3 [ 1 ] = rtB . niyytuv12u [ 1 ] * rtB . hikp3uxxab [ 0 ]
; rtB . ghwhuiv0f3 [ 2 ] = rtB . niyytuv12u [ 2 ] * rtB . hikp3uxxab [ 0 ] ;
rtB . dlrbenzskg [ 0 ] = rtP . uLl_d_Gain [ 0 ] * rtB . grih5mbomn [ 1 ] ;
rtB . gssetobfwf [ 0 ] = rtB . dlrbenzskg [ 0 ] * rtB . hikp3uxxab [ 1 ] ;
rtB . dlrbenzskg [ 1 ] = rtP . uLl_d_Gain [ 1 ] * rtB . grih5mbomn [ 2 ] ;
rtB . gssetobfwf [ 1 ] = rtB . dlrbenzskg [ 1 ] * rtB . hikp3uxxab [ 1 ] ;
rtB . dlrbenzskg [ 2 ] = rtP . uLl_d_Gain [ 2 ] * rtB . grih5mbomn [ 3 ] ;
rtB . gssetobfwf [ 2 ] = rtB . dlrbenzskg [ 2 ] * rtB . hikp3uxxab [ 1 ] ;
rtB . lxmrydslve = ( rtB . ghwhuiv0f3 [ 0 ] + rtB . ghwhuiv0f3 [ 1 ] ) + rtB
. ghwhuiv0f3 [ 2 ] ; rtB . kmmteah4sx = ( rtB . gssetobfwf [ 0 ] + rtB .
gssetobfwf [ 1 ] ) + rtB . gssetobfwf [ 2 ] ; rtB . i1iwhmdtne [ 0 ] . re =
rtP . V2PU_Gain * rtB . bhnb4tmjw1 [ 5 ] . re ; rtB . i1iwhmdtne [ 0 ] . im =
rtP . V2PU_Gain * rtB . bhnb4tmjw1 [ 5 ] . im ; rtB . i1iwhmdtne [ 1 ] . re =
rtP . V2PU_Gain * rtB . bhnb4tmjw1 [ 6 ] . re ; rtB . i1iwhmdtne [ 1 ] . im =
rtP . V2PU_Gain * rtB . bhnb4tmjw1 [ 6 ] . im ; rtB . jh4i51pged . re = rtP .
Gain_Gain * rtB . i1iwhmdtne [ 0 ] . re ; rtB . jh4i51pged . im = rtP .
Gain_Gain * rtB . i1iwhmdtne [ 0 ] . im ; rtB . hnoiwjpdz2 . re = rtP .
a23_Gain . re * rtB . i1iwhmdtne [ 1 ] . re - rtP . a23_Gain . im * rtB .
i1iwhmdtne [ 1 ] . im ; rtB . hnoiwjpdz2 . im = rtP . a23_Gain . re * rtB .
i1iwhmdtne [ 1 ] . im + rtP . a23_Gain . im * rtB . i1iwhmdtne [ 1 ] . re ;
rtB . iabhed2cwe . re = rtB . jh4i51pged . re - rtB . hnoiwjpdz2 . re ; rtB .
iabhed2cwe . im = rtB . jh4i51pged . im - rtB . hnoiwjpdz2 . im ; rtB .
bclbk5wmfw . re = rtP . Gain2_Gain_okd3wig2v4 . re * rtB . dqupdqrsdd ; rtB .
bclbk5wmfw . im = rtP . Gain2_Gain_okd3wig2v4 . im * rtB . dqupdqrsdd ;
mjmwpz3hat = muDoubleScalarExp ( rtB . bclbk5wmfw . re ) ; if ( rtB .
bclbk5wmfw . im == 0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; }
else { eiagzuoprf = mjmwpz3hat * muDoubleScalarCos ( rtB . bclbk5wmfw . im )
; mjmwpz3hat *= muDoubleScalarSin ( rtB . bclbk5wmfw . im ) ; } rtB .
gh1tfsfcj3 . re = rtB . iabhed2cwe . re * eiagzuoprf - rtB . iabhed2cwe . im
* mjmwpz3hat ; rtB . gh1tfsfcj3 . im = rtB . iabhed2cwe . re * mjmwpz3hat +
rtB . iabhed2cwe . im * eiagzuoprf ; rtB . ig54dujev0 = rtB . gh1tfsfcj3 . re
; rtB . o4dhc1s2rp = rtB . gh1tfsfcj3 . im ; if ( rtP .
Constant5_Value_byc02c1cb0 >= rtP . Switch2_Threshold_kl4mto40ys ) { rtB .
pgkigxvlp5 [ 0 ] = rtB . i3kxfqtdpbp . cfzslcgkae ; rtB . pgkigxvlp5 [ 1 ] =
rtB . i3kxfqtdpbp . c1ixhjszj3 ; } else { rtB . pgkigxvlp5 [ 0 ] = rtP .
Lmqd_nosat_Value [ 0 ] ; rtB . pgkigxvlp5 [ 1 ] = rtP . Lmqd_nosat_Value [ 1
] ; } rtB . gsxir4rqgm . re = rtB . o4dhc1s2rp ; rtB . gsxir4rqgm . im = rtB
. ig54dujev0 ; rtB . erxode5ea3 = rtP . rad2deg_Gain * muDoubleScalarAtan2 (
rtB . gsxir4rqgm . im , rtB . gsxir4rqgm . re ) ; rtB . pbrr1rxtxa = rtB .
o4dhc1s2rp * rtB . nz52gdgv4a [ 0 ] ; rtB . doqu5z43rw = rtB . ig54dujev0 *
rtB . nz52gdgv4a [ 1 ] ; rtB . iygyndnj0r = rtB . pbrr1rxtxa + rtB .
doqu5z43rw ; rtB . lkesajlrqb = rtP . Gain_Gain_fuxiybkzq2 * rtB . iygyndnj0r
; rtB . ikmuu1a5g4 = rtB . o4dhc1s2rp * rtB . nz52gdgv4a [ 1 ] ; rtB .
myucio2yie = rtB . ig54dujev0 * rtB . nz52gdgv4a [ 0 ] ; rtB . bawcla15pq =
rtB . ikmuu1a5g4 - rtB . myucio2yie ; rtB . fzsr3x3cab = rtP . Gain1_Gain *
rtB . bawcla15pq ; rtB . njdy43etag [ 0 ] = rtP . outputformatting_Gain [ 0 ]
* muDoubleScalarHypot ( rtB . lkgchv4mjj . re , rtB . lkgchv4mjj . im ) ; rtB
. njdy43etag [ 1 ] = rtP . outputformatting_Gain [ 1 ] * muDoubleScalarHypot
( rtB . bwz24ezfr0 . re , rtB . bwz24ezfr0 . im ) ; rtB . njdy43etag [ 2 ] =
rtP . outputformatting_Gain [ 2 ] * muDoubleScalarHypot ( rtB . aezifhoqem .
re , rtB . aezifhoqem . im ) ; rtB . njdy43etag [ 3 ] = rtP .
outputformatting_Gain [ 3 ] * rtB . nz52gdgv4a [ 0 ] ; rtB . njdy43etag [ 4 ]
= rtP . outputformatting_Gain [ 4 ] * rtB . nz52gdgv4a [ 1 ] ; rtB .
njdy43etag [ 5 ] = rtP . outputformatting_Gain [ 5 ] * rtB . nz52gdgv4a [ 2 ]
; rtB . njdy43etag [ 6 ] = rtP . outputformatting_Gain [ 6 ] * rtB .
nz52gdgv4a [ 4 ] ; rtB . njdy43etag [ 7 ] = rtP . outputformatting_Gain [ 7 ]
* rtB . dyeev12q22 ; rtB . njdy43etag [ 8 ] = rtP . outputformatting_Gain [ 8
] * rtB . nz52gdgv4a [ 3 ] ; rtB . njdy43etag [ 9 ] = rtP .
outputformatting_Gain [ 9 ] * rtB . lxmrydslve ; rtB . njdy43etag [ 10 ] =
rtP . outputformatting_Gain [ 10 ] * rtB . kmmteah4sx ; rtB . njdy43etag [ 11
] = rtP . outputformatting_Gain [ 11 ] * rtB . o4dhc1s2rp ; rtB . njdy43etag
[ 12 ] = rtP . outputformatting_Gain [ 12 ] * rtB . ig54dujev0 ; rtB .
njdy43etag [ 15 ] = rtP . outputformatting_Gain [ 15 ] * rtB . erxode5ea3 ;
rtB . njdy43etag [ 16 ] = rtP . outputformatting_Gain [ 16 ] * rtB .
lkesajlrqb ; rtB . njdy43etag [ 17 ] = rtP . outputformatting_Gain [ 17 ] *
rtB . fzsr3x3cab ; rtB . d5hgb54uda . re = rtB . njdy43etag [ 12 ] ; rtB .
d5hgb54uda . im = rtB . njdy43etag [ 11 ] ; rtB . njdy43etag [ 13 ] = rtP .
outputformatting_Gain [ 13 ] * rtB . pgkigxvlp5 [ 0 ] ; rtB . kpmvggerll [ 1
] = rtP . uLl_q_Gain_m4orsjlybo [ 1 ] * rtB . hkzza5jukv [ 4 ] ; rtB .
njdy43etag [ 14 ] = rtP . outputformatting_Gain [ 14 ] * rtB . pgkigxvlp5 [ 1
] ; rtB . kpmvggerll [ 2 ] = rtP . uLl_q_Gain_m4orsjlybo [ 2 ] * rtB .
hkzza5jukv [ 5 ] ; rtB . l5mkzavglx . re = rtB . aldfxrbloj . re + rtB .
mr3dilex2b . re ; rtB . l5mkzavglx . im = rtB . aldfxrbloj . im + rtB .
mr3dilex2b . im ; rtB . opu0t5oruo . re = rtP . inv_Gain_f5iiny2kdh * rtB .
l5mkzavglx . re ; rtB . opu0t5oruo . im = rtP . inv_Gain_f5iiny2kdh * rtB .
l5mkzavglx . im ; if ( rtP . Constant1_Value_bcir5gue4t ) { rtB . po02yjscca
= rtB . dx0e1lhobw [ 5 ] ; } else { rtB . po02yjscca = rtP .
Constant2_Value_euai3peff4 ; } rtB . kpmvggerll [ 0 ] = rtP .
uLl_q_Gain_m4orsjlybo [ 0 ] * rtB . hkzza5jukv [ 0 ] ; if ( rtP .
Constant8_Value_nqzndlbmyn >= rtP . Switch3_Threshold_omnblshz1u ) { rtB .
myn40sspki [ 0 ] = rtB . jiiczdlcrb . b5usiw2dap ; rtB . myn40sspki [ 1 ] =
rtB . jiiczdlcrb . ij3q0zbi3l ; } else { rtB . myn40sspki [ 0 ] = rtP .
Laqd_nosat_Value_ntxalhi1f0 [ 0 ] ; rtB . myn40sspki [ 1 ] = rtP .
Laqd_nosat_Value_ntxalhi1f0 [ 1 ] ; } rtB . pr1amzbkmd [ 0 ] = rtB .
kpmvggerll [ 0 ] * rtB . myn40sspki [ 0 ] ; rtB . pr1amzbkmd [ 1 ] = rtB .
kpmvggerll [ 1 ] * rtB . myn40sspki [ 0 ] ; rtB . pr1amzbkmd [ 2 ] = rtB .
kpmvggerll [ 2 ] * rtB . myn40sspki [ 0 ] ; rtB . g1crc1v45r [ 0 ] = rtP .
uLl_d_Gain_cjl2qp12zk [ 0 ] * rtB . hkzza5jukv [ 1 ] ; rtB . jibti1widf [ 0 ]
= rtB . g1crc1v45r [ 0 ] * rtB . myn40sspki [ 1 ] ; rtB . g1crc1v45r [ 1 ] =
rtP . uLl_d_Gain_cjl2qp12zk [ 1 ] * rtB . hkzza5jukv [ 2 ] ; rtB . jibti1widf
[ 1 ] = rtB . g1crc1v45r [ 1 ] * rtB . myn40sspki [ 1 ] ; rtB . g1crc1v45r [
2 ] = rtP . uLl_d_Gain_cjl2qp12zk [ 2 ] * rtB . hkzza5jukv [ 3 ] ; rtB .
jibti1widf [ 2 ] = rtB . g1crc1v45r [ 2 ] * rtB . myn40sspki [ 1 ] ; rtB .
lvryth0cgv = ( rtB . pr1amzbkmd [ 0 ] + rtB . pr1amzbkmd [ 1 ] ) + rtB .
pr1amzbkmd [ 2 ] ; rtB . krvyr1dnqp = ( rtB . jibti1widf [ 0 ] + rtB .
jibti1widf [ 1 ] ) + rtB . jibti1widf [ 2 ] ; rtB . cqs4cshl4z [ 0 ] . re =
rtP . V2PU_Gain_jylzvxj0fw * rtB . bhnb4tmjw1 [ 7 ] . re ; rtB . cqs4cshl4z [
0 ] . im = rtP . V2PU_Gain_jylzvxj0fw * rtB . bhnb4tmjw1 [ 7 ] . im ; rtB .
cqs4cshl4z [ 1 ] . re = rtP . V2PU_Gain_jylzvxj0fw * rtB . bhnb4tmjw1 [ 8 ] .
re ; rtB . cqs4cshl4z [ 1 ] . im = rtP . V2PU_Gain_jylzvxj0fw * rtB .
bhnb4tmjw1 [ 8 ] . im ; rtB . k15rsg53lj . re = rtP . Gain_Gain_enugkn2c1j *
rtB . cqs4cshl4z [ 0 ] . re ; rtB . k15rsg53lj . im = rtP .
Gain_Gain_enugkn2c1j * rtB . cqs4cshl4z [ 0 ] . im ; rtB . c1huvwgkys . re =
rtP . a23_Gain_n31xyh4pll . re * rtB . cqs4cshl4z [ 1 ] . re - rtP .
a23_Gain_n31xyh4pll . im * rtB . cqs4cshl4z [ 1 ] . im ; rtB . c1huvwgkys .
im = rtP . a23_Gain_n31xyh4pll . re * rtB . cqs4cshl4z [ 1 ] . im + rtP .
a23_Gain_n31xyh4pll . im * rtB . cqs4cshl4z [ 1 ] . re ; rtB . dy3neew0rm .
re = rtB . k15rsg53lj . re - rtB . c1huvwgkys . re ; rtB . dy3neew0rm . im =
rtB . k15rsg53lj . im - rtB . c1huvwgkys . im ; rtB . m5fphwhceu . re = rtP .
Gain2_Gain_a3du3utrce . re * rtB . lejchdnshr ; rtB . m5fphwhceu . im = rtP .
Gain2_Gain_a3du3utrce . im * rtB . lejchdnshr ; mjmwpz3hat =
muDoubleScalarExp ( rtB . m5fphwhceu . re ) ; if ( rtB . m5fphwhceu . im ==
0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; } else { eiagzuoprf =
mjmwpz3hat * muDoubleScalarCos ( rtB . m5fphwhceu . im ) ; mjmwpz3hat *=
muDoubleScalarSin ( rtB . m5fphwhceu . im ) ; } rtB . ksyyfsfrhu . re = rtB .
dy3neew0rm . re * eiagzuoprf - rtB . dy3neew0rm . im * mjmwpz3hat ; rtB .
ksyyfsfrhu . im = rtB . dy3neew0rm . re * mjmwpz3hat + rtB . dy3neew0rm . im
* eiagzuoprf ; rtB . ddn0abp02q = rtB . ksyyfsfrhu . re ; rtB . evb2ap4hyf =
rtB . ksyyfsfrhu . im ; if ( rtP . Constant5_Value_juo455eqgt >= rtP .
Switch2_Threshold_i4uiceoq4q ) { rtB . af0ll3t0it [ 0 ] = rtB . jiiczdlcrb .
cfzslcgkae ; rtB . af0ll3t0it [ 1 ] = rtB . jiiczdlcrb . c1ixhjszj3 ; } else
{ rtB . af0ll3t0it [ 0 ] = rtP . Lmqd_nosat_Value_khr3l4ldnq [ 0 ] ; rtB .
af0ll3t0it [ 1 ] = rtP . Lmqd_nosat_Value_khr3l4ldnq [ 1 ] ; } rtB .
ehf1f4sdjc . re = rtB . evb2ap4hyf ; rtB . ehf1f4sdjc . im = rtB . ddn0abp02q
; rtB . jmkl1hx03l = rtP . rad2deg_Gain_jsmpmrxmy1 * muDoubleScalarAtan2 (
rtB . ehf1f4sdjc . im , rtB . ehf1f4sdjc . re ) ; rtB . h5dczvthdo = rtB .
evb2ap4hyf * rtB . dx0e1lhobw [ 0 ] ; rtB . bgtxkdur4r = rtB . ddn0abp02q *
rtB . dx0e1lhobw [ 1 ] ; rtB . fhlo3wub13 = rtB . h5dczvthdo + rtB .
bgtxkdur4r ; rtB . j400cigacb = rtP . Gain_Gain_mkjdsitib3 * rtB . fhlo3wub13
; rtB . njmpqznwj1 = rtB . evb2ap4hyf * rtB . dx0e1lhobw [ 1 ] ; rtB .
guxhiaybyq = rtB . ddn0abp02q * rtB . dx0e1lhobw [ 0 ] ; rtB . nzbbqlfkyq =
rtB . njmpqznwj1 - rtB . guxhiaybyq ; rtB . j0tvvndpvt = rtP .
Gain1_Gain_kcb1kj5lxc * rtB . nzbbqlfkyq ; rtB . lv3jukjnqp [ 0 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 0 ] * muDoubleScalarHypot ( rtB .
aldfxrbloj . re , rtB . aldfxrbloj . im ) ; rtB . lv3jukjnqp [ 1 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 1 ] * muDoubleScalarHypot ( rtB .
mr3dilex2b . re , rtB . mr3dilex2b . im ) ; rtB . lv3jukjnqp [ 2 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 2 ] * muDoubleScalarHypot ( rtB .
opu0t5oruo . re , rtB . opu0t5oruo . im ) ; rtB . lv3jukjnqp [ 3 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 3 ] * rtB . dx0e1lhobw [ 0 ] ; rtB .
lv3jukjnqp [ 4 ] = rtP . outputformatting_Gain_eurqkbk52k [ 4 ] * rtB .
dx0e1lhobw [ 1 ] ; rtB . lv3jukjnqp [ 5 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 5 ] * rtB . dx0e1lhobw [ 2 ] ; rtB .
lv3jukjnqp [ 6 ] = rtP . outputformatting_Gain_eurqkbk52k [ 6 ] * rtB .
dx0e1lhobw [ 4 ] ; rtB . lv3jukjnqp [ 7 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 7 ] * rtB . po02yjscca ; rtB . lv3jukjnqp
[ 8 ] = rtP . outputformatting_Gain_eurqkbk52k [ 8 ] * rtB . dx0e1lhobw [ 3 ]
; rtB . lv3jukjnqp [ 9 ] = rtP . outputformatting_Gain_eurqkbk52k [ 9 ] * rtB
. lvryth0cgv ; rtB . lv3jukjnqp [ 10 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 10 ] * rtB . krvyr1dnqp ; rtB . lv3jukjnqp
[ 11 ] = rtP . outputformatting_Gain_eurqkbk52k [ 11 ] * rtB . evb2ap4hyf ;
rtB . lv3jukjnqp [ 12 ] = rtP . outputformatting_Gain_eurqkbk52k [ 12 ] * rtB
. ddn0abp02q ; rtB . lv3jukjnqp [ 15 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 15 ] * rtB . jmkl1hx03l ; rtB . lv3jukjnqp
[ 16 ] = rtP . outputformatting_Gain_eurqkbk52k [ 16 ] * rtB . j400cigacb ;
rtB . lv3jukjnqp [ 17 ] = rtP . outputformatting_Gain_eurqkbk52k [ 17 ] * rtB
. j0tvvndpvt ; rtB . l1rgbw0nlj . re = rtB . lv3jukjnqp [ 12 ] ; rtB .
l1rgbw0nlj . im = rtB . lv3jukjnqp [ 11 ] ; rtB . lv3jukjnqp [ 13 ] = rtP .
outputformatting_Gain_eurqkbk52k [ 13 ] * rtB . af0ll3t0it [ 0 ] ; rtB .
otmddottxs [ 1 ] = rtP . uLl_q_Gain_k2erowxigx [ 1 ] * rtB . oi4me3vzpe [ 4 ]
; rtB . lv3jukjnqp [ 14 ] = rtP . outputformatting_Gain_eurqkbk52k [ 14 ] *
rtB . af0ll3t0it [ 1 ] ; rtB . otmddottxs [ 2 ] = rtP . uLl_q_Gain_k2erowxigx
[ 2 ] * rtB . oi4me3vzpe [ 5 ] ; rtB . ehbbdbn0mj . re = rtB . hyvrvnapov .
re + rtB . apuymfs4jd . re ; rtB . ehbbdbn0mj . im = rtB . hyvrvnapov . im +
rtB . apuymfs4jd . im ; rtB . bxght5sgmp . re = rtP . inv_Gain_o0k1xjmpyi *
rtB . ehbbdbn0mj . re ; rtB . bxght5sgmp . im = rtP . inv_Gain_o0k1xjmpyi *
rtB . ehbbdbn0mj . im ; if ( rtP . Constant1_Value_po4mycliud ) { rtB .
jpaozznh4a = rtB . jncvcbdtnq [ 5 ] ; } else { rtB . jpaozznh4a = rtP .
Constant2_Value_jyqy0bxnpc ; } rtB . otmddottxs [ 0 ] = rtP .
uLl_q_Gain_k2erowxigx [ 0 ] * rtB . oi4me3vzpe [ 0 ] ; if ( rtP .
Constant8_Value_dry4cujolh >= rtP . Switch3_Threshold_myji0ayfbe ) { rtB .
olxp0ksh3c [ 0 ] = rtB . lfyyzy3mj4 . b5usiw2dap ; rtB . olxp0ksh3c [ 1 ] =
rtB . lfyyzy3mj4 . ij3q0zbi3l ; } else { rtB . olxp0ksh3c [ 0 ] = rtP .
Laqd_nosat_Value_erv1vavdol [ 0 ] ; rtB . olxp0ksh3c [ 1 ] = rtP .
Laqd_nosat_Value_erv1vavdol [ 1 ] ; } rtB . lmaafy1vao [ 0 ] = rtB .
otmddottxs [ 0 ] * rtB . olxp0ksh3c [ 0 ] ; rtB . lmaafy1vao [ 1 ] = rtB .
otmddottxs [ 1 ] * rtB . olxp0ksh3c [ 0 ] ; rtB . lmaafy1vao [ 2 ] = rtB .
otmddottxs [ 2 ] * rtB . olxp0ksh3c [ 0 ] ; rtB . jn1uxn3eed [ 0 ] = rtP .
uLl_d_Gain_hwqwx4zfxw [ 0 ] * rtB . oi4me3vzpe [ 1 ] ; rtB . p0eqkg2xpt [ 0 ]
= rtB . jn1uxn3eed [ 0 ] * rtB . olxp0ksh3c [ 1 ] ; rtB . jn1uxn3eed [ 1 ] =
rtP . uLl_d_Gain_hwqwx4zfxw [ 1 ] * rtB . oi4me3vzpe [ 2 ] ; rtB . p0eqkg2xpt
[ 1 ] = rtB . jn1uxn3eed [ 1 ] * rtB . olxp0ksh3c [ 1 ] ; rtB . jn1uxn3eed [
2 ] = rtP . uLl_d_Gain_hwqwx4zfxw [ 2 ] * rtB . oi4me3vzpe [ 3 ] ; rtB .
p0eqkg2xpt [ 2 ] = rtB . jn1uxn3eed [ 2 ] * rtB . olxp0ksh3c [ 1 ] ; rtB .
cugdolnzuc = ( rtB . lmaafy1vao [ 0 ] + rtB . lmaafy1vao [ 1 ] ) + rtB .
lmaafy1vao [ 2 ] ; rtB . oazwmeb0mw = ( rtB . p0eqkg2xpt [ 0 ] + rtB .
p0eqkg2xpt [ 1 ] ) + rtB . p0eqkg2xpt [ 2 ] ; rtB . cca3b1x2me [ 0 ] . re =
rtP . V2PU_Gain_iabdfw52ge * rtB . bhnb4tmjw1 [ 3 ] . re ; rtB . cca3b1x2me [
0 ] . im = rtP . V2PU_Gain_iabdfw52ge * rtB . bhnb4tmjw1 [ 3 ] . im ; rtB .
cca3b1x2me [ 1 ] . re = rtP . V2PU_Gain_iabdfw52ge * rtB . bhnb4tmjw1 [ 4 ] .
re ; rtB . cca3b1x2me [ 1 ] . im = rtP . V2PU_Gain_iabdfw52ge * rtB .
bhnb4tmjw1 [ 4 ] . im ; rtB . ei1suet2uc . re = rtP . Gain_Gain_mfdsiezu4w *
rtB . cca3b1x2me [ 0 ] . re ; rtB . ei1suet2uc . im = rtP .
Gain_Gain_mfdsiezu4w * rtB . cca3b1x2me [ 0 ] . im ; rtB . cbojbss3xi . re =
rtP . a23_Gain_ba0lkcbkw1 . re * rtB . cca3b1x2me [ 1 ] . re - rtP .
a23_Gain_ba0lkcbkw1 . im * rtB . cca3b1x2me [ 1 ] . im ; rtB . cbojbss3xi .
im = rtP . a23_Gain_ba0lkcbkw1 . re * rtB . cca3b1x2me [ 1 ] . im + rtP .
a23_Gain_ba0lkcbkw1 . im * rtB . cca3b1x2me [ 1 ] . re ; rtB . cia03dz34z .
re = rtB . ei1suet2uc . re - rtB . cbojbss3xi . re ; rtB . cia03dz34z . im =
rtB . ei1suet2uc . im - rtB . cbojbss3xi . im ; rtB . d3n0x3iygr . re = rtP .
Gain2_Gain_jeblpkwxie . re * rtB . irikf2pyub ; rtB . d3n0x3iygr . im = rtP .
Gain2_Gain_jeblpkwxie . im * rtB . irikf2pyub ; mjmwpz3hat =
muDoubleScalarExp ( rtB . d3n0x3iygr . re ) ; if ( rtB . d3n0x3iygr . im ==
0.0 ) { eiagzuoprf = mjmwpz3hat ; mjmwpz3hat = 0.0 ; } else { eiagzuoprf =
mjmwpz3hat * muDoubleScalarCos ( rtB . d3n0x3iygr . im ) ; mjmwpz3hat *=
muDoubleScalarSin ( rtB . d3n0x3iygr . im ) ; } rtB . hjsy01qvep . re = rtB .
cia03dz34z . re * eiagzuoprf - rtB . cia03dz34z . im * mjmwpz3hat ; rtB .
hjsy01qvep . im = rtB . cia03dz34z . re * mjmwpz3hat + rtB . cia03dz34z . im
* eiagzuoprf ; rtB . iotelzl0ji = rtB . hjsy01qvep . re ; rtB . meosjda20f =
rtB . hjsy01qvep . im ; if ( rtP . Constant5_Value_bduiv5wz1d >= rtP .
Switch2_Threshold_cl5slpkzcf ) { rtB . jpfuef53sj [ 0 ] = rtB . lfyyzy3mj4 .
cfzslcgkae ; rtB . jpfuef53sj [ 1 ] = rtB . lfyyzy3mj4 . c1ixhjszj3 ; } else
{ rtB . jpfuef53sj [ 0 ] = rtP . Lmqd_nosat_Value_dd1sxxfkzn [ 0 ] ; rtB .
jpfuef53sj [ 1 ] = rtP . Lmqd_nosat_Value_dd1sxxfkzn [ 1 ] ; } rtB .
nmcos0ph0e . re = rtB . meosjda20f ; rtB . nmcos0ph0e . im = rtB . iotelzl0ji
; rtB . gybrfck0av = rtP . rad2deg_Gain_bi21yr5jsd * muDoubleScalarAtan2 (
rtB . nmcos0ph0e . im , rtB . nmcos0ph0e . re ) ; rtB . mhyppzhid3 = rtB .
meosjda20f * rtB . jncvcbdtnq [ 0 ] ; rtB . gqzpn3yh2d = rtB . iotelzl0ji *
rtB . jncvcbdtnq [ 1 ] ; rtB . f2o1qwxrii = rtB . mhyppzhid3 + rtB .
gqzpn3yh2d ; rtB . a3ksxkomy4 = rtP . Gain_Gain_pvip314yc1 * rtB . f2o1qwxrii
; rtB . nxsqazfoel = rtB . meosjda20f * rtB . jncvcbdtnq [ 1 ] ; rtB .
d0uuzaa31o = rtB . iotelzl0ji * rtB . jncvcbdtnq [ 0 ] ; rtB . aevbn5ptmj =
rtB . nxsqazfoel - rtB . d0uuzaa31o ; rtB . nbpdovn150 = rtP .
Gain1_Gain_eevh35f1mr * rtB . aevbn5ptmj ; rtB . jmxojepiit [ 0 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 0 ] * muDoubleScalarHypot ( rtB .
hyvrvnapov . re , rtB . hyvrvnapov . im ) ; rtB . jmxojepiit [ 1 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 1 ] * muDoubleScalarHypot ( rtB .
apuymfs4jd . re , rtB . apuymfs4jd . im ) ; rtB . jmxojepiit [ 2 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 2 ] * muDoubleScalarHypot ( rtB .
bxght5sgmp . re , rtB . bxght5sgmp . im ) ; rtB . jmxojepiit [ 3 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 3 ] * rtB . jncvcbdtnq [ 0 ] ; rtB .
jmxojepiit [ 4 ] = rtP . outputformatting_Gain_dax2g0f12l [ 4 ] * rtB .
jncvcbdtnq [ 1 ] ; rtB . jmxojepiit [ 5 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 5 ] * rtB . jncvcbdtnq [ 2 ] ; rtB .
jmxojepiit [ 6 ] = rtP . outputformatting_Gain_dax2g0f12l [ 6 ] * rtB .
jncvcbdtnq [ 4 ] ; rtB . jmxojepiit [ 7 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 7 ] * rtB . jpaozznh4a ; rtB . jmxojepiit
[ 8 ] = rtP . outputformatting_Gain_dax2g0f12l [ 8 ] * rtB . jncvcbdtnq [ 3 ]
; rtB . jmxojepiit [ 9 ] = rtP . outputformatting_Gain_dax2g0f12l [ 9 ] * rtB
. cugdolnzuc ; rtB . jmxojepiit [ 10 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 10 ] * rtB . oazwmeb0mw ; rtB . jmxojepiit
[ 11 ] = rtP . outputformatting_Gain_dax2g0f12l [ 11 ] * rtB . meosjda20f ;
rtB . jmxojepiit [ 12 ] = rtP . outputformatting_Gain_dax2g0f12l [ 12 ] * rtB
. iotelzl0ji ; rtB . jmxojepiit [ 13 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 13 ] * rtB . jpfuef53sj [ 0 ] ; rtB .
jmxojepiit [ 14 ] = rtP . outputformatting_Gain_dax2g0f12l [ 14 ] * rtB .
jpfuef53sj [ 1 ] ; rtB . jmxojepiit [ 15 ] = rtP .
outputformatting_Gain_dax2g0f12l [ 15 ] * rtB . gybrfck0av ; rtB . jmxojepiit
[ 16 ] = rtP . outputformatting_Gain_dax2g0f12l [ 16 ] * rtB . a3ksxkomy4 ;
rtB . jmxojepiit [ 17 ] = rtP . outputformatting_Gain_dax2g0f12l [ 17 ] * rtB
. nbpdovn150 ; rtB . ojzpfer4xr . re = rtB . jmxojepiit [ 12 ] ; rtB .
ojzpfer4xr . im = rtB . jmxojepiit [ 11 ] ; if ( ssIsMajorTimeStep ( rtS ) )
{ rtDW . edpue2swv0 [ 0 ] = ( rtB . dvocrbaqy2 >= 0.0 ) ; rtDW . edpue2swv0 [
1 ] = ( rtB . m02kxelm2q >= 0.0 ) ; } rtB . gpvkimloub [ 0 ] = rtDW .
edpue2swv0 [ 0 ] > 0 ? rtB . dvocrbaqy2 : - rtB . dvocrbaqy2 ; rtB .
gpvkimloub [ 1 ] = rtDW . edpue2swv0 [ 1 ] > 0 ? rtB . m02kxelm2q : - rtB .
m02kxelm2q ; if ( ssIsMajorTimeStep ( rtS ) ) { rtB . kszsro50ue = rtB .
gpvkimloub [ 0 ] ; rtDW . o5mbsiz1a5 = 0 ; if ( rtB . gpvkimloub [ 1 ] > rtB
. gpvkimloub [ 0 ] ) { rtB . kszsro50ue = rtB . gpvkimloub [ 1 ] ; rtDW .
o5mbsiz1a5 = 1 ; } } else { rtB . kszsro50ue = rtB . gpvkimloub [ rtDW .
o5mbsiz1a5 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . hkfuu4lvsn = ( rtB . kszsro50ue > rtP .
Pref2_Value ) ; } if ( rtDW . hkfuu4lvsn ) { ssSetStopRequested ( rtS , 1 ) ;
} } rtB . paudgqgyvo = ( ( rtB . l3b2ivdy05 + rtB . ibjh32sw1c ) + rtB .
emr2fhbqxu ) * rtP . Gain_Gain_pefifgifx1 ; if ( ssIsSampleHit ( rtS , 3 , 0
) ) { rtB . coxhl2jphl [ 0 ] = rtB . dvocrbaqy2 ; rtB . coxhl2jphl [ 1 ] =
rtB . m02kxelm2q ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 3 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ojv5uxhdfd
. LoggedData ) , & rtB . coxhl2jphl [ 0 ] , 0 ) ; } } } rtB . csjdiwf3cs [ 0
] = a1_IEEE9_Ctest_RGND_Complex ; rtB . csjdiwf3cs [ 1 ] =
a1_IEEE9_Ctest_RGND_Complex ; rtB . csjdiwf3cs [ 2 ] =
a1_IEEE9_Ctest_RGND_Complex ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 3 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . easjgmyxrc
. LoggedData ) , & rtB . csjdiwf3cs [ 0 ] , 0 ) ; } } } rtB . lsibg0fi20 [ 0
] = rtB . d5hgb54uda ; rtB . lsibg0fi20 [ 1 ] = rtB . l1rgbw0nlj ; rtB .
lsibg0fi20 [ 2 ] = rtB . ojzpfer4xr ; if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 3 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . bo5hxdyszn
. LoggedData ) , & rtB . lsibg0fi20 [ 0 ] , 0 ) ; } } } } rtB . ezbttr0mux =
0.0 ; rtB . ezbttr0mux += rtP . StateSpace_C_no0abjcm0z * rtX . geqsiyq0ae ;
rtB . eeelttb4vr = 0.0 ; rtB . eeelttb4vr += rtP . StateSpace_C_d2qsphy3r2 *
rtX . buk4mce4wc ; rtB . gvmx2cbgqe = 0.0 ; rtB . gvmx2cbgqe += rtP .
StateSpace_C_d442xxcprt * rtX . gkw3v2je2c ; if ( ssIsSampleHit ( rtS , 3 , 0
) ) { rtB . gipd15agxl [ 0 ] = rtB . ezbttr0mux ; rtB . gipd15agxl [ 1 ] =
rtB . eeelttb4vr ; rtB . gipd15agxl [ 2 ] = rtB . gvmx2cbgqe ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . j33iuvbthk . LoggedData ) , & rtB . gipd15agxl [ 0 ] , 0
) ; } } } } rtB . eperc4aiqz = 0.0 ; rtB . eperc4aiqz += rtP .
LFandIFspeedsensor_C [ 0 ] * rtX . ah4t522etq [ 0 ] ; rtB . eperc4aiqz += rtP
. LFandIFspeedsensor_C [ 1 ] * rtX . ah4t522etq [ 1 ] ; rtB . awwhoalixp =
rtP . Gain3_Gain * rtB . eperc4aiqz ; rtB . mzxovrpolv = 0.0 ; rtB .
mzxovrpolv += rtP . BF1_C * rtX . bvtq2ilbrl ; rtB . mzxovrpolv += rtP .
BF1_D * rtB . awwhoalixp ; nwwecupcxr ( rtS , rtP . Constant_Value , rtB .
mzxovrpolv , & rtB . nwwecupcxr3 , & rtDW . nwwecupcxr3 , & rtP . nwwecupcxr3
) ; if ( rtP . Constant_Value >= rtP . Switch1_Threshold_k5puaipvcc ) { rtB .
f3ymdpwmh3 = rtB . nwwecupcxr3 . hsz0ejwogb ; } else { rtB . f3ymdpwmh3 = rtB
. mzxovrpolv ; } rtB . d51au3mhb4 = rtP . Gain4_Gain * rtB . eperc4aiqz ; rtB
. oloboocpj3 = 0.0 ; rtB . oloboocpj3 += rtP . BF7_C * rtX . khgmpyjcwf ; rtB
. oloboocpj3 += rtP . BF7_D * rtB . d51au3mhb4 ; eaz24jybta ( rtS , rtP .
Constant_Value , rtB . oloboocpj3 , & rtB . eaz24jybtas , & rtDW .
eaz24jybtas , & rtP . eaz24jybtas ) ; if ( rtP . Constant_Value >= rtP .
Switch2_Threshold_exksgoyntx ) { rtB . lhe5tb0zwz = rtB . eaz24jybtas .
mkkgohz0kj ; } else { rtB . lhe5tb0zwz = rtB . oloboocpj3 ; } rtB .
lxp4geswhz = rtB . f3ymdpwmh3 - rtB . lhe5tb0zwz ; rtB . g3ewpazjdf = rtP .
Gain_Gain_p20n5p05nq * rtB . lxp4geswhz ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . l1i2nunuqi = rtB . g3ewpazjdf >= rtP . LimiteurBF_UpperSat ? 1 : rtB .
g3ewpazjdf > rtP . LimiteurBF_LowerSat ? 0 : - 1 ; } rtB . m0ia5xfr2h = rtDW
. l1i2nunuqi == 1 ? rtP . LimiteurBF_UpperSat : rtDW . l1i2nunuqi == - 1 ?
rtP . LimiteurBF_LowerSat : rtB . g3ewpazjdf ; rtB . ftewt3tckc = rtP .
Gain5_Gain * rtB . eperc4aiqz ; rtB . j50l2on4dk = 0.0 ; rtB . j50l2on4dk +=
rtP . IF1_C * rtX . b1sh5asqq5 ; rtB . j50l2on4dk += rtP . IF1_D * rtB .
ftewt3tckc ; p5n4z0qa43 ( rtS , rtP . Constant_Value , rtB . j50l2on4dk , &
rtB . p5n4z0qa43g , & rtDW . p5n4z0qa43g , & rtP . p5n4z0qa43g ) ; if ( rtP .
Constant_Value >= rtP . Switch1_Threshold_higbj4xflz ) { rtB . eooejdbxkv =
rtB . p5n4z0qa43g . fbxapju1qk ; } else { rtB . eooejdbxkv = rtB . j50l2on4dk
; } rtB . d0t3muozz1 = rtP . Gain6_Gain * rtB . eperc4aiqz ; rtB . lvhok0lvhj
= 0.0 ; rtB . lvhok0lvhj += rtP . IF4_C * rtX . iyljq0p2q2 ; rtB . lvhok0lvhj
+= rtP . IF4_D * rtB . d0t3muozz1 ; n12bdjrzo2 ( rtS , rtP . Constant_Value ,
rtB . lvhok0lvhj , & rtB . n12bdjrzo2e , & rtDW . n12bdjrzo2e , & rtP .
n12bdjrzo2e ) ; if ( rtP . Constant_Value >= rtP .
Switch2_Threshold_dfewbkt1bp ) { rtB . bigkx4jiaf = rtB . n12bdjrzo2e .
gy2v4a00mz ; } else { rtB . bigkx4jiaf = rtB . lvhok0lvhj ; } rtB .
hhootlqxel = rtB . eooejdbxkv - rtB . bigkx4jiaf ; rtB . jizjehvotg = rtP .
Gain1_Gain_idvyeskg5d * rtB . hhootlqxel ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . gldf0honah = rtB . jizjehvotg >= rtP . LimiteurIF_UpperSat ? 1 : rtB .
jizjehvotg > rtP . LimiteurIF_LowerSat ? 0 : - 1 ; } rtB . iurbyn4f3e = rtDW
. gldf0honah == 1 ? rtP . LimiteurIF_UpperSat : rtDW . gldf0honah == - 1 ?
rtP . LimiteurIF_LowerSat : rtB . jizjehvotg ; rtB . l05tbmdmcy = 0.0 ; rtB .
l05tbmdmcy += rtP . HFspeedsensor_C [ 0 ] * rtX . a3ejw4k1vb [ 0 ] ; rtB .
l05tbmdmcy += rtP . HFspeedsensor_C [ 1 ] * rtX . a3ejw4k1vb [ 1 ] ; rtB .
l05tbmdmcy += rtP . HFspeedsensor_C [ 2 ] * rtX . a3ejw4k1vb [ 2 ] ; rtB .
kbec521dmo = rtP . Gain7_Gain * rtB . l05tbmdmcy ; rtB . mt3x4tpiy5 = 0.0 ;
rtB . mt3x4tpiy5 += rtP . HF1_C * rtX . jkanx1c2sy ; rtB . mt3x4tpiy5 += rtP
. HF1_D * rtB . kbec521dmo ; pu5sgumjsd ( rtS , rtP . Constant_Value , rtB .
mt3x4tpiy5 , & rtB . pu5sgumjsdm , & rtDW . pu5sgumjsdm , & rtP . pu5sgumjsdm
) ; if ( rtP . Constant_Value >= rtP . Switch1_Threshold_bebm4nhf3m ) { rtB .
kfviw5xxdj = rtB . pu5sgumjsdm . axx2pihh1y ; } else { rtB . kfviw5xxdj = rtB
. mt3x4tpiy5 ; } rtB . ao5ufmavwz = rtP . Gain8_Gain * rtB . l05tbmdmcy ; rtB
. pigyzw5utu = 0.0 ; rtB . pigyzw5utu += rtP . HF4_C * rtX . eteakgjugc ; rtB
. pigyzw5utu += rtP . HF4_D * rtB . ao5ufmavwz ; brervxhrpp ( rtS , rtP .
Constant_Value , rtB . pigyzw5utu , & rtB . brervxhrpps , & rtDW .
brervxhrpps , & rtP . brervxhrpps ) ; if ( rtP . Constant_Value >= rtP .
Switch2_Threshold_jfwrn52rvc ) { rtB . oldduokwv4 = rtB . brervxhrpps .
dg4wofx0oz ; } else { rtB . oldduokwv4 = rtB . pigyzw5utu ; } rtB .
btketabkge = rtB . kfviw5xxdj - rtB . oldduokwv4 ; rtB . brlvy4qoad = rtP .
Gain2_Gain * rtB . btketabkge ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ih3l5pbpnd = rtB . brlvy4qoad >= rtP . LimiteurHF_UpperSat ? 1 : rtB .
brlvy4qoad > rtP . LimiteurHF_LowerSat ? 0 : - 1 ; } rtB . hrkmur4ikk = rtDW
. ih3l5pbpnd == 1 ? rtP . LimiteurHF_UpperSat : rtDW . ih3l5pbpnd == - 1 ?
rtP . LimiteurHF_LowerSat : rtB . brlvy4qoad ; rtB . gtyff5ppu3 = ( rtB .
m0ia5xfr2h + rtB . iurbyn4f3e ) + rtB . hrkmur4ikk ; rtB . jw4i100wy2 = rtP .
Gain9_Gain * rtB . gtyff5ppu3 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
m0b44wq00m = rtB . jw4i100wy2 >= rtP . LimiteurVS_UpperSat ? 1 : rtB .
jw4i100wy2 > rtP . LimiteurVS_LowerSat ? 0 : - 1 ; } rtB . captiiuzhe = rtDW
. m0b44wq00m == 1 ? rtP . LimiteurVS_UpperSat : rtDW . m0b44wq00m == - 1 ?
rtP . LimiteurVS_LowerSat : rtB . jw4i100wy2 ; if ( ( int32_T ) rtB .
dtk2xqandk == 1 ) { rtB . htm2jjyomv = rtP . PSSmodel3_Value ; } else { rtB .
htm2jjyomv = rtB . captiiuzhe ; } rtB . pzxaqhzupm = 0.0 ; rtB . pzxaqhzupm
+= rtP . LFandIFspeedsensor_C_buv4nfuqcm [ 0 ] * rtX . jjz0dmgypl [ 0 ] ; rtB
. pzxaqhzupm += rtP . LFandIFspeedsensor_C_buv4nfuqcm [ 1 ] * rtX .
jjz0dmgypl [ 1 ] ; rtB . gglhgpul1g = rtP . Gain3_Gain_pksauoc4if * rtB .
pzxaqhzupm ; rtB . ayhiio0zji = 0.0 ; rtB . ayhiio0zji += rtP .
BF1_C_mret0gzhdq * rtX . pktwyfaegj ; rtB . ayhiio0zji += rtP .
BF1_D_fdcfea2fgs * rtB . gglhgpul1g ; nwwecupcxr ( rtS , rtP .
Constant_Value_itoyuxxojl , rtB . ayhiio0zji , & rtB . b3kk3xvbzl , & rtDW .
b3kk3xvbzl , & rtP . b3kk3xvbzl ) ; if ( rtP . Constant_Value_itoyuxxojl >=
rtP . Switch1_Threshold_iy1ylasral ) { rtB . glsj4qlm45 = rtB . b3kk3xvbzl .
hsz0ejwogb ; } else { rtB . glsj4qlm45 = rtB . ayhiio0zji ; } rtB .
l5n1225hlb = rtP . Gain4_Gain_b5ejcvbgpn * rtB . pzxaqhzupm ; rtB .
kb3b33ug34 = 0.0 ; rtB . kb3b33ug34 += rtP . BF7_C_hdionlpawu * rtX .
kmavtzptxb ; rtB . kb3b33ug34 += rtP . BF7_D_isjljmj01n * rtB . l5n1225hlb ;
eaz24jybta ( rtS , rtP . Constant_Value_itoyuxxojl , rtB . kb3b33ug34 , & rtB
. cmxdysxk15 , & rtDW . cmxdysxk15 , & rtP . cmxdysxk15 ) ; if ( rtP .
Constant_Value_itoyuxxojl >= rtP . Switch2_Threshold_had1z5prla ) { rtB .
g1so2i4pws = rtB . cmxdysxk15 . mkkgohz0kj ; } else { rtB . g1so2i4pws = rtB
. kb3b33ug34 ; } rtB . mku3iga4y2 = rtB . glsj4qlm45 - rtB . g1so2i4pws ; rtB
. oos1lluski = rtP . Gain_Gain_iiqaym2nmi * rtB . mku3iga4y2 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . kuqzbin1hn = rtB . oos1lluski >= rtP .
LimiteurBF_UpperSat_o3x5bjfxqd ? 1 : rtB . oos1lluski > rtP .
LimiteurBF_LowerSat_bwtnmvfggy ? 0 : - 1 ; } rtB . ernz5m3jti = rtDW .
kuqzbin1hn == 1 ? rtP . LimiteurBF_UpperSat_o3x5bjfxqd : rtDW . kuqzbin1hn ==
- 1 ? rtP . LimiteurBF_LowerSat_bwtnmvfggy : rtB . oos1lluski ; rtB .
pt54e3qwnm = rtP . Gain5_Gain_pa1hmzxuhn * rtB . pzxaqhzupm ; rtB .
e1lhaat3lg = 0.0 ; rtB . e1lhaat3lg += rtP . IF1_C_gothl2dsz2 * rtX .
mjafdcmdy1 ; rtB . e1lhaat3lg += rtP . IF1_D_cbrew023nu * rtB . pt54e3qwnm ;
p5n4z0qa43 ( rtS , rtP . Constant_Value_itoyuxxojl , rtB . e1lhaat3lg , & rtB
. ako1qu1fpl , & rtDW . ako1qu1fpl , & rtP . ako1qu1fpl ) ; if ( rtP .
Constant_Value_itoyuxxojl >= rtP . Switch1_Threshold_asvniztsk0 ) { rtB .
dp2jbzw2cx = rtB . ako1qu1fpl . fbxapju1qk ; } else { rtB . dp2jbzw2cx = rtB
. e1lhaat3lg ; } rtB . otjvjcuhok = rtP . Gain6_Gain_kuchg0djog * rtB .
pzxaqhzupm ; rtB . gxkr4jkgsf = 0.0 ; rtB . gxkr4jkgsf += rtP .
IF4_C_dnkclubxdv * rtX . dypjdbgmol ; rtB . gxkr4jkgsf += rtP .
IF4_D_ku2bv43j2z * rtB . otjvjcuhok ; n12bdjrzo2 ( rtS , rtP .
Constant_Value_itoyuxxojl , rtB . gxkr4jkgsf , & rtB . hkobjilnmt , & rtDW .
hkobjilnmt , & rtP . hkobjilnmt ) ; if ( rtP . Constant_Value_itoyuxxojl >=
rtP . Switch2_Threshold_iuh5g0jt4y ) { rtB . cyemm5omog = rtB . hkobjilnmt .
gy2v4a00mz ; } else { rtB . cyemm5omog = rtB . gxkr4jkgsf ; } rtB .
an0qxwbgxs = rtB . dp2jbzw2cx - rtB . cyemm5omog ; rtB . j3wlzddiep = rtP .
Gain1_Gain_kpsagqhnrs * rtB . an0qxwbgxs ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . eobedasena = rtB . j3wlzddiep >= rtP . LimiteurIF_UpperSat_es2hi1s5ol
? 1 : rtB . j3wlzddiep > rtP . LimiteurIF_LowerSat_frurdeaktw ? 0 : - 1 ; }
rtB . kdyyhf4bbc = rtDW . eobedasena == 1 ? rtP .
LimiteurIF_UpperSat_es2hi1s5ol : rtDW . eobedasena == - 1 ? rtP .
LimiteurIF_LowerSat_frurdeaktw : rtB . j3wlzddiep ; rtB . j1ipniqq0m = 0.0 ;
rtB . j1ipniqq0m += rtP . HFspeedsensor_C_cvaohhv2zs [ 0 ] * rtX . fyveu4cgze
[ 0 ] ; rtB . j1ipniqq0m += rtP . HFspeedsensor_C_cvaohhv2zs [ 1 ] * rtX .
fyveu4cgze [ 1 ] ; rtB . j1ipniqq0m += rtP . HFspeedsensor_C_cvaohhv2zs [ 2 ]
* rtX . fyveu4cgze [ 2 ] ; rtB . ev3p2tyg4u = rtP . Gain7_Gain_hfww3e14xq *
rtB . j1ipniqq0m ; rtB . mf5a4et21v = 0.0 ; rtB . mf5a4et21v += rtP .
HF1_C_axzmn5jcwg * rtX . mvpvh5z4vn ; rtB . mf5a4et21v += rtP .
HF1_D_lpa0kagdl5 * rtB . ev3p2tyg4u ; pu5sgumjsd ( rtS , rtP .
Constant_Value_itoyuxxojl , rtB . mf5a4et21v , & rtB . fxig4dac3b , & rtDW .
fxig4dac3b , & rtP . fxig4dac3b ) ; if ( rtP . Constant_Value_itoyuxxojl >=
rtP . Switch1_Threshold_cabrjj1hlu ) { rtB . bfqg5545tk = rtB . fxig4dac3b .
axx2pihh1y ; } else { rtB . bfqg5545tk = rtB . mf5a4et21v ; } rtB .
dw3e1rbl0b = rtP . Gain8_Gain_ledih0qio3 * rtB . j1ipniqq0m ; rtB .
cc2zpx4yxk = 0.0 ; rtB . cc2zpx4yxk += rtP . HF4_C_dho02dhy1r * rtX .
e23vbkc2br ; rtB . cc2zpx4yxk += rtP . HF4_D_pykzdopjnv * rtB . dw3e1rbl0b ;
brervxhrpp ( rtS , rtP . Constant_Value_itoyuxxojl , rtB . cc2zpx4yxk , & rtB
. osligu4cvh , & rtDW . osligu4cvh , & rtP . osligu4cvh ) ; if ( rtP .
Constant_Value_itoyuxxojl >= rtP . Switch2_Threshold_h5nmitp3v3 ) { rtB .
d5h0nk3n4j = rtB . osligu4cvh . dg4wofx0oz ; } else { rtB . d5h0nk3n4j = rtB
. cc2zpx4yxk ; } rtB . j1udiabp3a = rtB . bfqg5545tk - rtB . d5h0nk3n4j ; rtB
. ch2lvqikgg = rtP . Gain2_Gain_nxoox2fjqq * rtB . j1udiabp3a ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . mn02ucv4ri = rtB . ch2lvqikgg >= rtP .
LimiteurHF_UpperSat_orzjd4jfpc ? 1 : rtB . ch2lvqikgg > rtP .
LimiteurHF_LowerSat_pd50slxu4g ? 0 : - 1 ; } rtB . gytx0pc3iv = rtDW .
mn02ucv4ri == 1 ? rtP . LimiteurHF_UpperSat_orzjd4jfpc : rtDW . mn02ucv4ri ==
- 1 ? rtP . LimiteurHF_LowerSat_pd50slxu4g : rtB . ch2lvqikgg ; rtB .
ep4tncgk2x = ( rtB . ernz5m3jti + rtB . kdyyhf4bbc ) + rtB . gytx0pc3iv ; rtB
. djgfwwesd5 = rtP . Gain9_Gain_ejmilwkpo4 * rtB . ep4tncgk2x ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . nc3vxevtzy = rtB . djgfwwesd5 >= rtP .
LimiteurVS_UpperSat_boied3g5cs ? 1 : rtB . djgfwwesd5 > rtP .
LimiteurVS_LowerSat_jaabg1r2wp ? 0 : - 1 ; } rtB . lugceot3wr = rtDW .
nc3vxevtzy == 1 ? rtP . LimiteurVS_UpperSat_boied3g5cs : rtDW . nc3vxevtzy ==
- 1 ? rtP . LimiteurVS_LowerSat_jaabg1r2wp : rtB . djgfwwesd5 ; if ( (
int32_T ) rtB . i1pdnx403m == 1 ) { rtB . cqdq14zipf = rtP .
PSSmodel3_Value_kdkvzqxzai ; } else { rtB . cqdq14zipf = rtB . lugceot3wr ; }
rtB . likwqzdls2 = 0.0 ; rtB . likwqzdls2 += rtP .
LFandIFspeedsensor_C_kjjmaj00ni [ 0 ] * rtX . ikmxhmo1xy [ 0 ] ; rtB .
likwqzdls2 += rtP . LFandIFspeedsensor_C_kjjmaj00ni [ 1 ] * rtX . ikmxhmo1xy
[ 1 ] ; rtB . lkzvz2h4ht = rtP . Gain3_Gain_n2pt41nnox * rtB . likwqzdls2 ;
rtB . lnm2ewmav5 = 0.0 ; rtB . lnm2ewmav5 += rtP . BF1_C_obmwkcnbyp * rtX .
bifrows3ko ; rtB . lnm2ewmav5 += rtP . BF1_D_cgj4uagvg5 * rtB . lkzvz2h4ht ;
nwwecupcxr ( rtS , rtP . Constant_Value_ctiu3u5y5j , rtB . lnm2ewmav5 , & rtB
. iajwi2yieg , & rtDW . iajwi2yieg , & rtP . iajwi2yieg ) ; if ( rtP .
Constant_Value_ctiu3u5y5j >= rtP . Switch1_Threshold_libenmo5pe ) { rtB .
eq5znppfhp = rtB . iajwi2yieg . hsz0ejwogb ; } else { rtB . eq5znppfhp = rtB
. lnm2ewmav5 ; } rtB . cjp5nnfzr3 = rtP . Gain4_Gain_odb1vf4uhu * rtB .
likwqzdls2 ; rtB . aobp5ffign = 0.0 ; rtB . aobp5ffign += rtP .
BF7_C_kyraijnv01 * rtX . gurxs4gmgn ; rtB . aobp5ffign += rtP .
BF7_D_fvct4fi4cx * rtB . cjp5nnfzr3 ; eaz24jybta ( rtS , rtP .
Constant_Value_ctiu3u5y5j , rtB . aobp5ffign , & rtB . mtlhcioyxm , & rtDW .
mtlhcioyxm , & rtP . mtlhcioyxm ) ; if ( rtP . Constant_Value_ctiu3u5y5j >=
rtP . Switch2_Threshold_pcnlvlyswe ) { rtB . jzpgbctlqx = rtB . mtlhcioyxm .
mkkgohz0kj ; } else { rtB . jzpgbctlqx = rtB . aobp5ffign ; } rtB .
eskogjq4ig = rtB . eq5znppfhp - rtB . jzpgbctlqx ; rtB . azmw04sxgp = rtP .
Gain_Gain_ctphntsqal * rtB . eskogjq4ig ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . hvlmwinfix = rtB . azmw04sxgp >= rtP . LimiteurBF_UpperSat_drtpw0igsw
? 1 : rtB . azmw04sxgp > rtP . LimiteurBF_LowerSat_jfgwt1rrfd ? 0 : - 1 ; }
rtB . azoxj12i03 = rtDW . hvlmwinfix == 1 ? rtP .
LimiteurBF_UpperSat_drtpw0igsw : rtDW . hvlmwinfix == - 1 ? rtP .
LimiteurBF_LowerSat_jfgwt1rrfd : rtB . azmw04sxgp ; rtB . pm2zlnstlx = rtP .
Gain5_Gain_fn43br2gtw * rtB . likwqzdls2 ; rtB . apuvbtoqky = 0.0 ; rtB .
apuvbtoqky += rtP . IF1_C_kmsj2ku5gb * rtX . dubgfafbwh ; rtB . apuvbtoqky +=
rtP . IF1_D_l3skmf2c2r * rtB . pm2zlnstlx ; p5n4z0qa43 ( rtS , rtP .
Constant_Value_ctiu3u5y5j , rtB . apuvbtoqky , & rtB . cnotxc2z3h , & rtDW .
cnotxc2z3h , & rtP . cnotxc2z3h ) ; if ( rtP . Constant_Value_ctiu3u5y5j >=
rtP . Switch1_Threshold_ec4sedlub3 ) { rtB . bq1ktbvput = rtB . cnotxc2z3h .
fbxapju1qk ; } else { rtB . bq1ktbvput = rtB . apuvbtoqky ; } rtB .
p4rb5gwn00 = rtP . Gain6_Gain_nkqgyjsyfz * rtB . likwqzdls2 ; rtB .
bttusq4slp = 0.0 ; rtB . bttusq4slp += rtP . IF4_C_lgdhq5amog * rtX .
d2qv1tdugi ; rtB . bttusq4slp += rtP . IF4_D_fg0nqcqdtw * rtB . p4rb5gwn00 ;
n12bdjrzo2 ( rtS , rtP . Constant_Value_ctiu3u5y5j , rtB . bttusq4slp , & rtB
. ivzbiu131n , & rtDW . ivzbiu131n , & rtP . ivzbiu131n ) ; if ( rtP .
Constant_Value_ctiu3u5y5j >= rtP . Switch2_Threshold_jqo3lyfm1q ) { rtB .
cykum1hct4 = rtB . ivzbiu131n . gy2v4a00mz ; } else { rtB . cykum1hct4 = rtB
. bttusq4slp ; } rtB . blohxukvzw = rtB . bq1ktbvput - rtB . cykum1hct4 ; rtB
. h1ucpjd222 = rtP . Gain1_Gain_esozxtfnfc * rtB . blohxukvzw ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ofn545f5y5 = rtB . h1ucpjd222 >= rtP .
LimiteurIF_UpperSat_omde2wyowl ? 1 : rtB . h1ucpjd222 > rtP .
LimiteurIF_LowerSat_akpawp2za0 ? 0 : - 1 ; } rtB . owl10l3dnq = rtDW .
ofn545f5y5 == 1 ? rtP . LimiteurIF_UpperSat_omde2wyowl : rtDW . ofn545f5y5 ==
- 1 ? rtP . LimiteurIF_LowerSat_akpawp2za0 : rtB . h1ucpjd222 ; rtB .
iu4pi1pgjq = 0.0 ; rtB . iu4pi1pgjq += rtP . HFspeedsensor_C_pntjpd4nwy [ 0 ]
* rtX . bmd550nn1i [ 0 ] ; rtB . iu4pi1pgjq += rtP .
HFspeedsensor_C_pntjpd4nwy [ 1 ] * rtX . bmd550nn1i [ 1 ] ; rtB . iu4pi1pgjq
+= rtP . HFspeedsensor_C_pntjpd4nwy [ 2 ] * rtX . bmd550nn1i [ 2 ] ; rtB .
hiibpffund = rtP . Gain7_Gain_gxcwnohj2f * rtB . iu4pi1pgjq ; rtB .
k5bk5aozgm = 0.0 ; rtB . k5bk5aozgm += rtP . HF1_C_jyxse3hr4b * rtX .
ghhf5zgons ; rtB . k5bk5aozgm += rtP . HF1_D_n42t5rhshz * rtB . hiibpffund ;
pu5sgumjsd ( rtS , rtP . Constant_Value_ctiu3u5y5j , rtB . k5bk5aozgm , & rtB
. gsfdft5hdw , & rtDW . gsfdft5hdw , & rtP . gsfdft5hdw ) ; if ( rtP .
Constant_Value_ctiu3u5y5j >= rtP . Switch1_Threshold_osbdbipauw ) { rtB .
hjmsfmmv3z = rtB . gsfdft5hdw . axx2pihh1y ; } else { rtB . hjmsfmmv3z = rtB
. k5bk5aozgm ; } rtB . po3xeophlj = rtP . Gain8_Gain_gegvo3d2mr * rtB .
iu4pi1pgjq ; rtB . mn51kgpzhu = 0.0 ; rtB . mn51kgpzhu += rtP .
HF4_C_elkx4prals * rtX . crwxe3fyj2 ; rtB . mn51kgpzhu += rtP .
HF4_D_jtnwh4dwkp * rtB . po3xeophlj ; brervxhrpp ( rtS , rtP .
Constant_Value_ctiu3u5y5j , rtB . mn51kgpzhu , & rtB . fdljmutgrr , & rtDW .
fdljmutgrr , & rtP . fdljmutgrr ) ; if ( rtP . Constant_Value_ctiu3u5y5j >=
rtP . Switch2_Threshold_o0evjikyci ) { rtB . gltwh25trx = rtB . fdljmutgrr .
dg4wofx0oz ; } else { rtB . gltwh25trx = rtB . mn51kgpzhu ; } rtB .
lbj5zbyo2l = rtB . hjmsfmmv3z - rtB . gltwh25trx ; rtB . hxjga2tl2n = rtP .
Gain2_Gain_k2ogij3rhh * rtB . lbj5zbyo2l ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . otc2i5ciys = rtB . hxjga2tl2n >= rtP . LimiteurHF_UpperSat_ox4qdslkjt
? 1 : rtB . hxjga2tl2n > rtP . LimiteurHF_LowerSat_pfuuttiq4e ? 0 : - 1 ; }
rtB . bfaj1jpnt5 = rtDW . otc2i5ciys == 1 ? rtP .
LimiteurHF_UpperSat_ox4qdslkjt : rtDW . otc2i5ciys == - 1 ? rtP .
LimiteurHF_LowerSat_pfuuttiq4e : rtB . hxjga2tl2n ; rtB . hhpv2sakbb = ( rtB
. azoxj12i03 + rtB . owl10l3dnq ) + rtB . bfaj1jpnt5 ; rtB . lfg4zmyhtf = rtP
. Gain9_Gain_jcvgntwng5 * rtB . hhpv2sakbb ; if ( ssIsMajorTimeStep ( rtS ) )
{ rtDW . kv245y3zxr = rtB . lfg4zmyhtf >= rtP .
LimiteurVS_UpperSat_no510emuaw ? 1 : rtB . lfg4zmyhtf > rtP .
LimiteurVS_LowerSat_lwvbmeuwma ? 0 : - 1 ; } rtB . mptsbhzt3g = rtDW .
kv245y3zxr == 1 ? rtP . LimiteurVS_UpperSat_no510emuaw : rtDW . kv245y3zxr ==
- 1 ? rtP . LimiteurVS_LowerSat_lwvbmeuwma : rtB . lfg4zmyhtf ; if ( (
int32_T ) rtB . plpm0kvsia == 1 ) { rtB . b3p5x1h2fx = rtP .
PSSmodel3_Value_egr1tn4q2z ; } else { rtB . b3p5x1h2fx = rtB . mptsbhzt3g ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . j022mk3ohb [ 0 ] = rtB .
htm2jjyomv ; rtB . j022mk3ohb [ 1 ] = rtB . cqdq14zipf ; rtB . j022mk3ohb [ 2
] = rtB . b3p5x1h2fx ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 3 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . erq1ovxym4
. LoggedData ) , & rtB . j022mk3ohb [ 0 ] , 0 ) ; } } } } rtB . hv1ap5ms2t [
0 ] = rtP . u1_Gain [ 0 ] * rtB . nz52gdgv4a [ 0 ] ; rtB . hv1ap5ms2t [ 1 ] =
rtP . u1_Gain [ 1 ] * rtB . nz52gdgv4a [ 1 ] ; rtB . chmq1c513r [ 0 ] = rtB .
grih5mbomn [ 1 ] * rtB . hv1ap5ms2t [ 0 ] ; rtB . chmq1c513r [ 1 ] = rtB .
grih5mbomn [ 0 ] * rtB . hv1ap5ms2t [ 1 ] ; rtB . elh2ayggum [ 0 ] = rtP .
u1_Gain_dsjh5g5yc4 [ 0 ] * rtB . dx0e1lhobw [ 0 ] ; rtB . elh2ayggum [ 1 ] =
rtP . u1_Gain_dsjh5g5yc4 [ 1 ] * rtB . dx0e1lhobw [ 1 ] ; rtB . bu4zpk15ru =
rtB . chmq1c513r [ 0 ] + rtB . chmq1c513r [ 1 ] ; rtB . gl3axcefk1 = rtB .
lrja4qihgz * rtB . bu4zpk15ru * rtP . units1_Gain ; rtB . fibxtmnby3 [ 0 ] =
rtB . hkzza5jukv [ 1 ] * rtB . elh2ayggum [ 0 ] ; rtB . fibxtmnby3 [ 1 ] =
rtB . hkzza5jukv [ 0 ] * rtB . elh2ayggum [ 1 ] ; rtB . pqzmcx4frl [ 0 ] =
rtP . u1_Gain_o5iyvup55k [ 0 ] * rtB . jncvcbdtnq [ 0 ] ; rtB . pqzmcx4frl [
1 ] = rtP . u1_Gain_o5iyvup55k [ 1 ] * rtB . jncvcbdtnq [ 1 ] ; rtB .
ah1gsbatnx = rtB . fibxtmnby3 [ 0 ] + rtB . fibxtmnby3 [ 1 ] ; rtB .
ma3zzf53wt = rtB . gnmso3ufns * rtB . ah1gsbatnx * rtP .
units1_Gain_kvujbaswne ; rtB . mpuswbvjja [ 0 ] = rtB . oi4me3vzpe [ 1 ] *
rtB . pqzmcx4frl [ 0 ] ; rtB . mpuswbvjja [ 1 ] = rtB . oi4me3vzpe [ 0 ] *
rtB . pqzmcx4frl [ 1 ] ; rtB . cnp5elnaq1 = rtB . mpuswbvjja [ 0 ] + rtB .
mpuswbvjja [ 1 ] ; rtB . pdjtmeo2e1 = rtB . jxxv1skywx * rtB . cnp5elnaq1 *
rtP . units1_Gain_cs0eyumiya ; rtB . g3fktbo2ju = rtP . Gain1_Gain_fkz5w2tg5q
* rtB . gl3axcefk1 ; rtB . btriocoaa3 = rtP . Gain2_Gain_gtonf3ckiq * rtB .
ma3zzf53wt ; rtB . hm25njyewq = rtP . Gain3_Gain_mtexuntqgn * rtB .
pdjtmeo2e1 ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . efpqkwdioo [ 0 ] =
rtB . gl3axcefk1 ; rtB . efpqkwdioo [ 1 ] = rtB . ma3zzf53wt ; rtB .
efpqkwdioo [ 2 ] = rtB . pdjtmeo2e1 ; if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 3 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . hu1rcwtl0f
. LoggedData ) , & rtB . efpqkwdioo [ 0 ] , 0 ) ; } } } } rtB . oah4slwb4n =
ssGetT ( rtS ) ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . dzggppucqe . LoggedData ) , & rtB . oah4slwb4n , 0 ) ; }
} } } rtB . eup1gi3ww1 = 0.0 ; rtB . f3iexx0tfl = 0.0 ; rtB . f3iexx0tfl +=
rtP . StateSpace_C_di3hwzbffg * rtX . okhrzumzrc ; rtB . d2powxjwqi = ( ( (
rtP . Vref1_Value + rtP . Vf0ka_Value ) - rtB . f3iexx0tfl ) + rtB .
htm2jjyomv ) - rtB . eup1gi3ww1 ; rtB . hajoh0uh41 = 0.0 ; rtB . hajoh0uh41
+= rtP . StateSpace_C_jwr2xjjnqu * rtX . ftkzr43zza ; rtB . hajoh0uh41 += rtP
. StateSpace_D * rtB . d2powxjwqi ; rtB . lcbnmolo2u = 0.0 ; rtB . lcbnmolo2u
+= rtP . StateSpace_C_ktfq31p0ba * rtX . dxbfyhuf2d ; mjmwpz3hat =
muDoubleScalarPower ( rtB . njdy43etag [ 12 ] , 2.0 ) + muDoubleScalarPower (
rtB . njdy43etag [ 11 ] , 2.0 ) ; if ( mjmwpz3hat < 0.0 ) { rtB . ntprqe04ym
= - muDoubleScalarSqrt ( - mjmwpz3hat ) ; } else { rtB . ntprqe04ym =
muDoubleScalarSqrt ( mjmwpz3hat ) ; } rtB . etlergjdlc = rtP . Vfdmax1_Gain *
rtB . f3iexx0tfl ; rtB . jehce1r3io = rtB . etlergjdlc + rtB . nfhu0bam1o ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . ohclzc1ktv = ( rtB . lcbnmolo2u > rtP . Constant1_Value_a0tp1s1pqn ) ;
} llvwpql3ra = rtDW . ohclzc1ktv ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
dkgykuoeit = ( rtB . lcbnmolo2u < rtB . jehce1r3io ) ; } rtB . bfq0k22t2r = (
llvwpql3ra && rtDW . dkgykuoeit ) ; hvxfwg50kf = ! llvwpql3ra ; rtB .
olymqvziwx = ! rtDW . dkgykuoeit ; rtB . okndhfgjx3 = rtP .
Constant1_Value_a0tp1s1pqn * hvxfwg50kf ; } rtB . ofe4yd1uzb = rtB .
lcbnmolo2u * rtB . bfq0k22t2r ; rtB . pzqi20qdob = rtB . olymqvziwx * rtB .
jehce1r3io ; rtB . gds5lhwgp4 = ( rtB . ofe4yd1uzb + rtB . okndhfgjx3 ) + rtB
. pzqi20qdob ; cfxuytlxuw ( rtS , rtP . Constant1_Value_pe5it1zc1u , & rtB .
mikcvz5h1f , & rtDW . mikcvz5h1f , & rtP . mikcvz5h1f , & rtX . mikcvz5h1f ,
& ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> mikcvz5h1f ) ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtX . c5xg25dykk >= rtP .
Servomotorposition_UpperSat ) { rtX . c5xg25dykk = rtP .
Servomotorposition_UpperSat ; } else { if ( rtX . c5xg25dykk <= rtP .
Servomotorposition_LowerSat ) { rtX . c5xg25dykk = rtP .
Servomotorposition_LowerSat ; } } } rtB . phpzy1swil = rtX . c5xg25dykk ; rtB
. iuv5orisf2 = rtB . phpzy1swil * rtP . Pboil_Value ; if ( rtP .
Constant1_Value_pe5it1zc1u ) { rtB . bmjkpy5r5j = rtB . mikcvz5h1f .
h3ztb2avwq ; } else { rtB . bmjkpy5r5j = rtB . iuv5orisf2 ; } rtB .
bew2a1coii = rtP . Gain4_Gain_ckvhezqqfa * rtB . bmjkpy5r5j ; cfxuytlxuw (
rtS , rtP . Constant2_Value_jdgevhosgz , & rtB . naitari34m , & rtDW .
naitari34m , & rtP . naitari34m , & rtX . naitari34m , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> naitari34m ) ; if ( rtP .
Constant2_Value_jdgevhosgz ) { rtB . odxzufrufe = rtB . naitari34m .
h3ztb2avwq ; } else { rtB . odxzufrufe = rtB . bmjkpy5r5j ; } rtB .
nfsaydrqd1 = rtP . Gain3_Gain_pymxmudgj4 * rtB . odxzufrufe ; cfxuytlxuw (
rtS , rtP . Constant3_Value_pc0rbmlcvp , & rtB . c4bfgvlf1r , & rtDW .
c4bfgvlf1r , & rtP . c4bfgvlf1r , & rtX . c4bfgvlf1r , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> c4bfgvlf1r ) ; if ( rtP .
Constant3_Value_pc0rbmlcvp ) { rtB . ixrsyp5wvc = rtB . c4bfgvlf1r .
h3ztb2avwq ; } else { rtB . ixrsyp5wvc = rtB . odxzufrufe ; } rtB .
f1vfvox3fj = rtP . Gain2_Gain_outjdxfcu2 * rtB . ixrsyp5wvc ; cfxuytlxuw (
rtS , rtP . Constant4_Value_b34iavgaxx , & rtB . cfxuytlxuwh , & rtDW .
cfxuytlxuwh , & rtP . cfxuytlxuwh , & rtX . cfxuytlxuwh , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> cfxuytlxuwh ) ; if ( rtP .
Constant4_Value_b34iavgaxx ) { rtB . b4neh2dx22 = rtB . cfxuytlxuwh .
h3ztb2avwq ; } else { rtB . b4neh2dx22 = rtB . ixrsyp5wvc ; } rtB .
e2msmkel53 = rtP . Gain_Gain_ln2utldgfb * rtB . b4neh2dx22 ; eecdtyu2lc ( rtS
, rtP . STG1_gentype == 2.0 , rtB . e2msmkel53 , rtB . f1vfvox3fj , rtB .
nfsaydrqd1 , rtB . bew2a1coii , rtB . lx0j4ypnjr , & rtB . eecdtyu2lcn , &
rtDW . eecdtyu2lcn , & rtP . eecdtyu2lcn , & rtX . eecdtyu2lcn , rtP . STG1_N
, & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> eecdtyu2lcn ) ; if ( rtP
. STG1_gentype != 2.0 ) { rtB . hh0focs1t2 = ( ( rtB . bew2a1coii + rtB .
nfsaydrqd1 ) + rtB . f1vfvox3fj ) + rtB . e2msmkel53 ; rtB . aokbiigazl = rtB
. hh0focs1t2 ; } else { rtB . aokbiigazl = rtB . eecdtyu2lcn . i5ua1kw1wm ; }
rtB . i1gmojn5da = rtB . aokbiigazl * rtB . l3b2ivdy05 ; rtB . fc0ujpjjzk =
1.0 / rtP . speedregulator_Rp * rtB . l3b2ivdy05 ; rtB . iqeqbfs4bg = ( rtP .
Pref1_Value + rtB . cvxrdyzxdh ) - rtB . fc0ujpjjzk ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( rtB . iqeqbfs4bg > rtP . speedregulator_Dz ) { rtDW .
fqumv3wtqn = 1 ; } else if ( rtB . iqeqbfs4bg >= - rtP . speedregulator_Dz )
{ rtDW . fqumv3wtqn = 0 ; } else { rtDW . fqumv3wtqn = - 1 ; } } if ( rtDW .
fqumv3wtqn == 1 ) { rtB . mqqnywia3h = rtB . iqeqbfs4bg - rtP .
speedregulator_Dz ; } else if ( rtDW . fqumv3wtqn == - 1 ) { rtB . mqqnywia3h
= rtB . iqeqbfs4bg - ( - rtP . speedregulator_Dz ) ; } else { rtB .
mqqnywia3h = 0.0 ; } rtB . hyj5g0ftll = rtP . speedregulator_Kp * rtB .
mqqnywia3h ; rtB . bbp4zr3nqq = ( rtP . speedregulator_Kp - 1.0 ) * rtB .
bmjkpy5r5j ; rtB . ihtj3gxewi = 0.0 ; rtB . ihtj3gxewi += rtP .
StateSpace_C_korx2z4ude * rtX . ex5tdiigau ; rtB . opbjtwzwt4 = rtB .
ihtj3gxewi - rtB . phpzy1swil ; rtB . fa4hshbbor = 1.0 / rtP .
speedregulator_Tsm * rtB . opbjtwzwt4 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . pukf1gljhw = rtB . fa4hshbbor >= rtP . Servomotorspeedlimits_UpperSat
? 1 : rtB . fa4hshbbor > rtP . Servomotorspeedlimits_LowerSat ? 0 : - 1 ; }
rtB . dxeqgpf4ca = rtDW . pukf1gljhw == 1 ? rtP .
Servomotorspeedlimits_UpperSat : rtDW . pukf1gljhw == - 1 ? rtP .
Servomotorspeedlimits_LowerSat : rtB . fa4hshbbor ; rtB . jcajbc1dvp = rtB .
hyj5g0ftll - rtB . bbp4zr3nqq ; rtB . jwyfxfrvwc = rtP . N_Gain * rtB .
ezbttr0mux ; rtB . fsgotglkkt = rtP . Gain1_Gain_bdpmc35an0 * rtB .
lrja4qihgz ; for ( i = 0 ; i < 36 ; i ++ ) { rtB . ikmzljk1p2 [ i ] = rtP .
u1_Value [ i ] ; f5mrfc0rmf [ i ] = rtB . ikmzljk1p2 [ i ] ; } f5mrfc0rmf [ 6
] = rtB . lrja4qihgz ; f5mrfc0rmf [ 1 ] = rtB . fsgotglkkt ; if ( rtP .
Constant2_Value_jklb4y5fxh >= rtP . Switch1_Threshold_jdvnk5zpxn ) { memcpy (
& rtB . m5imybf25k [ 0 ] , & rtB . i3kxfqtdpbp . bmx5oxytsv [ 0 ] , 36U *
sizeof ( real_T ) ) ; } else { memcpy ( & rtB . m5imybf25k [ 0 ] , & rtP .
Constant6_Value [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0 ; i < 36 ;
i ++ ) { rtB . f3wlva3b35 [ i ] = ( 0.0 - f5mrfc0rmf [ i ] ) - rtB .
m5imybf25k [ i ] ; } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . pxxq3pk4z1 [
i_p ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . pxxq3pk4z1 [ i_p ] += rtB
. f3wlva3b35 [ 6 * i + i_p ] * rtB . grih5mbomn [ i ] ; } } rtB . iftwu0z3bl
[ 0 ] = rtB . o4dhc1s2rp + rtB . pxxq3pk4z1 [ 0 ] ; rtB . iftwu0z3bl [ 1 ] =
rtB . ig54dujev0 + rtB . pxxq3pk4z1 [ 1 ] ; rtB . iftwu0z3bl [ 2 ] = rtB .
jwyfxfrvwc + rtB . pxxq3pk4z1 [ 2 ] ; rtB . iftwu0z3bl [ 3 ] = rtP .
Vkd0Vkq10Vkq20_Value [ 0 ] + rtB . pxxq3pk4z1 [ 3 ] ; rtB . iftwu0z3bl [ 4 ]
= rtP . Vkd0Vkq10Vkq20_Value [ 1 ] + rtB . pxxq3pk4z1 [ 4 ] ; rtB .
iftwu0z3bl [ 5 ] = rtP . Vkd0Vkq10Vkq20_Value [ 2 ] + rtB . pxxq3pk4z1 [ 5 ]
; for ( i = 0 ; i < 6 ; i ++ ) { rtB . aohv4uq5al [ i ] = rtP . wbase_Gain *
rtB . iftwu0z3bl [ i ] ; } rtB . nyi50xszi1 . re = rtP .
Gain1_Gain_b2sbq2m1gv * rtB . i1iwhmdtne [ 0 ] . re ; rtB . nyi50xszi1 . im =
rtP . Gain1_Gain_b2sbq2m1gv * rtB . i1iwhmdtne [ 0 ] . im ; rtB . cm5kmmplfl
. re = rtP . a3_Gain_ne4zcnjncu . re * rtB . i1iwhmdtne [ 1 ] . re - rtP .
a3_Gain_ne4zcnjncu . im * rtB . i1iwhmdtne [ 1 ] . im ; rtB . cm5kmmplfl . im
= rtP . a3_Gain_ne4zcnjncu . re * rtB . i1iwhmdtne [ 1 ] . im + rtP .
a3_Gain_ne4zcnjncu . im * rtB . i1iwhmdtne [ 1 ] . re ; rtB . mndgjk1odk . re
= rtB . nyi50xszi1 . re - rtB . cm5kmmplfl . re ; rtB . mndgjk1odk . im = rtB
. nyi50xszi1 . im - rtB . cm5kmmplfl . im ; rtB . pue2mgfg4f = rtB .
mndgjk1odk . re ; rtB . kednrudsxa = rtB . mndgjk1odk . im ; rtB . k0ntyg3vqg
[ 0 ] = rtP . uL2_pu_Gain * rtB . pue2mgfg4f ; rtB . k0ntyg3vqg [ 1 ] = rtP .
uL2_pu_Gain * rtB . kednrudsxa ; rtB . ilgas4d42n [ 0 ] = rtP .
Gain3_Gain_el30n1r0jj [ 0 ] * rtB . okaisqi0u5 [ 0 ] ; rtB . ceapevpuqa [ 0 ]
= rtP . R2_puL2_puX2R230_Gain * rtB . okaisqi0u5 [ 0 ] ; rtB . ilgas4d42n [ 1
] = rtP . Gain3_Gain_el30n1r0jj [ 1 ] * rtB . okaisqi0u5 [ 1 ] ; rtB .
ceapevpuqa [ 1 ] = rtP . R2_puL2_puX2R230_Gain * rtB . okaisqi0u5 [ 1 ] ; rtB
. al4g023z3r [ 0 ] = ( rtB . k0ntyg3vqg [ 0 ] - rtB . ceapevpuqa [ 0 ] ) +
rtB . ilgas4d42n [ 1 ] ; rtB . al4g023z3r [ 1 ] = ( rtB . k0ntyg3vqg [ 1 ] -
rtB . ceapevpuqa [ 1 ] ) + rtB . ilgas4d42n [ 0 ] ; rtB . nggcismtmx [ 0 ] =
rtP . Gain4_Gain_f45nyyrnu5 * rtB . al4g023z3r [ 0 ] ; rtB . nggcismtmx [ 1 ]
= rtP . Gain4_Gain_f45nyyrnu5 * rtB . al4g023z3r [ 1 ] ; rtB . hdvb2o1sci =
rtP . u_Pb_Gain * rtB . i1gmojn5da ; rtB . ackg0siiq0 = rtP . F1_Gain * rtB .
lrja4qihgz ; rtB . ftnrdnqtan = ( rtB . hdvb2o1sci / rtB . lrja4qihgz - rtB .
bu4zpk15ru ) - rtB . ackg0siiq0 ; rtB . gegm1ao0vn = rtP . u_2H_Gain * rtB .
ftnrdnqtan ; rtB . lv2d5e21ie = rtP . web1_Gain * rtB . ox3rpabdma ; rtB .
gtqu5gckf1 = rtP . web3_Gain * rtB . lrja4qihgz ; hvxfwg50kf = rtP .
donotdeletethisgain_Gain * rtB . bhnb4tmjw1 [ 45 ] . re * rtP . Kv1_Gain ;
eiagzuoprf = rtP . donotdeletethisgain_Gain * rtB . bhnb4tmjw1 [ 45 ] . im *
rtP . Kv1_Gain ; mjmwpz3hat = rtP . donotdeletethisgain_Gain_hcs0kz04b2 * rtB
. bhnb4tmjw1 [ 96 ] . re * rtP . Kv_Gain ; im_e = - ( rtP .
donotdeletethisgain_Gain_hcs0kz04b2 * rtB . bhnb4tmjw1 [ 96 ] . im * rtP .
Kv_Gain ) ; re = rtP . donotdeletethisgain_Gain_htolkq00zs * rtB . bhnb4tmjw1
[ 46 ] . re * rtP . Kv1_Gain ; im = rtP . donotdeletethisgain_Gain_htolkq00zs
* rtB . bhnb4tmjw1 [ 46 ] . im * rtP . Kv1_Gain ; re_e = rtP .
donotdeletethisgain_Gain_m2stcq2ehc * rtB . bhnb4tmjw1 [ 97 ] . re * rtP .
Kv_Gain ; im_i = - ( rtP . donotdeletethisgain_Gain_m2stcq2ehc * rtB .
bhnb4tmjw1 [ 97 ] . im * rtP . Kv_Gain ) ; re_p = rtP .
donotdeletethisgain_Gain_ksnznlzpeb * rtB . bhnb4tmjw1 [ 47 ] . re * rtP .
Kv1_Gain ; im_p = rtP . donotdeletethisgain_Gain_ksnznlzpeb * rtB .
bhnb4tmjw1 [ 47 ] . im * rtP . Kv1_Gain ; re_i = rtP .
donotdeletethisgain_Gain_nrba34cian * rtB . bhnb4tmjw1 [ 98 ] . re * rtP .
Kv_Gain ; im_m = - ( rtP . donotdeletethisgain_Gain_nrba34cian * rtB .
bhnb4tmjw1 [ 98 ] . im * rtP . Kv_Gain ) ; rtB . bf4wbb13pp = ( ( (
hvxfwg50kf * mjmwpz3hat - eiagzuoprf * im_e ) + ( re * re_e - im * im_i ) ) +
( re_p * re_i - im_p * im_m ) ) * rtP . K_Gain * rtP . Gain5_Gain_gzq4wqubv2
; rtB . opgpljj5ax = ( ( ( hvxfwg50kf * im_e + eiagzuoprf * mjmwpz3hat ) + (
re * im_i + im * re_e ) ) + ( re_p * im_m + im_p * re_i ) ) * rtP . K_Gain *
rtP . Gain1_Gain_n2c2zc5fut ; rtB . bvh5pbbcp1 . re = rtP .
donotdeletethisgain_Gain_kuevcf3sdx * rtB . bhnb4tmjw1 [ 48 ] . re ; rtB .
bvh5pbbcp1 . im = rtP . donotdeletethisgain_Gain_kuevcf3sdx * rtB .
bhnb4tmjw1 [ 48 ] . im ; rtB . ooghcf2dip . re = rtP .
donotdeletethisgain_Gain_mnpw1uhtyf * rtB . bhnb4tmjw1 [ 49 ] . re ; rtB .
ooghcf2dip . im = rtP . donotdeletethisgain_Gain_mnpw1uhtyf * rtB .
bhnb4tmjw1 [ 49 ] . im ; rtB . ou32xksg4p . re = rtP . a2_Gain_hxseeguaop .
re * rtB . ooghcf2dip . re - rtP . a2_Gain_hxseeguaop . im * rtB . ooghcf2dip
. im ; rtB . ou32xksg4p . im = rtP . a2_Gain_hxseeguaop . re * rtB .
ooghcf2dip . im + rtP . a2_Gain_hxseeguaop . im * rtB . ooghcf2dip . re ; rtB
. konv1i4nvn . re = rtB . bvh5pbbcp1 . re - rtB . ou32xksg4p . re ; rtB .
konv1i4nvn . im = rtB . bvh5pbbcp1 . im - rtB . ou32xksg4p . im ; rtB .
ovqaxjiu35 . re = rtP . a3_Gain * rtB . konv1i4nvn . re ; rtB . ovqaxjiu35 .
im = rtP . a3_Gain * rtB . konv1i4nvn . im ; rtB . l5h5eacovm =
muDoubleScalarHypot ( rtB . ovqaxjiu35 . re , rtB . ovqaxjiu35 . im ) ;
hvxfwg50kf = muDoubleScalarAtan2 ( rtB . ovqaxjiu35 . im , rtB . ovqaxjiu35 .
re ) ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . o4lqja15yl = rtB .
l5h5eacovm >= rtP . Saturation1_UpperSat ? 1 : rtB . l5h5eacovm > rtP .
Saturation1_LowerSat ? 0 : - 1 ; } rtB . pxluvjdhtr = rtDW . o4lqja15yl == 1
? rtP . Saturation1_UpperSat : rtDW . o4lqja15yl == - 1 ? rtP .
Saturation1_LowerSat : rtB . l5h5eacovm ; if ( ssIsSampleHit ( rtS , 2 , 0 )
) { rtB . ijwur2kcqz . re = rtDW . dclt4t2f5x [ 0 ] ; rtB . ijwur2kcqz . im =
0.0 ; } eiagzuoprf = rtB . pxluvjdhtr * muDoubleScalarCos ( hvxfwg50kf ) ;
mjmwpz3hat = rtB . pxluvjdhtr * muDoubleScalarSin ( hvxfwg50kf ) ; if (
mjmwpz3hat == 0.0 ) { hvxfwg50kf = 1.0 / eiagzuoprf ; eiagzuoprf = 0.0 ; }
else if ( eiagzuoprf == 0.0 ) { hvxfwg50kf = 0.0 ; eiagzuoprf = - ( 1.0 /
mjmwpz3hat ) ; } else { im_e = muDoubleScalarAbs ( eiagzuoprf ) ; hvxfwg50kf
= muDoubleScalarAbs ( mjmwpz3hat ) ; if ( im_e > hvxfwg50kf ) { im_e =
mjmwpz3hat / eiagzuoprf ; eiagzuoprf += im_e * mjmwpz3hat ; hvxfwg50kf = 1.0
/ eiagzuoprf ; eiagzuoprf = - ( im_e / eiagzuoprf ) ; } else if ( hvxfwg50kf
== im_e ) { hvxfwg50kf = ( eiagzuoprf > 0.0 ? 0.5 : - 0.5 ) / im_e ;
eiagzuoprf = - ( mjmwpz3hat > 0.0 ? 0.5 : - 0.5 ) / im_e ; } else { im_e =
eiagzuoprf / mjmwpz3hat ; eiagzuoprf = im_e * eiagzuoprf + mjmwpz3hat ;
hvxfwg50kf = im_e / eiagzuoprf ; eiagzuoprf = - ( 1.0 / eiagzuoprf ) ; } }
rtB . onyfh1tkhj . re = hvxfwg50kf * rtB . ijwur2kcqz . re - eiagzuoprf * rtB
. ijwur2kcqz . im ; rtB . onyfh1tkhj . im = hvxfwg50kf * rtB . ijwur2kcqz .
im + eiagzuoprf * rtB . ijwur2kcqz . re ; rtB . bddg5ijtxl . re = rtP .
a4_Gain * rtB . onyfh1tkhj . re ; rtB . bddg5ijtxl . im = rtP . a4_Gain * rtB
. onyfh1tkhj . im ; rtB . im22a3yupz = rtB . bddg5ijtxl . re ; rtB .
px4y4tejhs = - rtB . bddg5ijtxl . im ; if ( ( rtDW . iw2uuju0gd >= ssGetT (
rtS ) ) && ( rtDW . gjffyzrfxn >= ssGetT ( rtS ) ) ) { rtB . dxhfkiexxx = 0.0
; } else { hvxfwg50kf = rtDW . iw2uuju0gd ; lastU = & rtDW . fzszybl1g4 ; if
( rtDW . iw2uuju0gd < rtDW . gjffyzrfxn ) { if ( rtDW . gjffyzrfxn < ssGetT (
rtS ) ) { hvxfwg50kf = rtDW . gjffyzrfxn ; lastU = & rtDW . ef5rdpsrwh ; } }
else { if ( rtDW . iw2uuju0gd >= ssGetT ( rtS ) ) { hvxfwg50kf = rtDW .
gjffyzrfxn ; lastU = & rtDW . ef5rdpsrwh ; } } rtB . dxhfkiexxx = ( rtB .
paudgqgyvo - * lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . gufn4caao1 = ( rtB . dxhfkiexxx >= 0.0 )
; } rtB . kyqespgapw = rtDW . gufn4caao1 > 0 ? rtB . dxhfkiexxx : - rtB .
dxhfkiexxx ; rtB . f2e4fmh5rw = ssGetT ( rtS ) ; rtPrevAction = rtDW .
ikdujdqbhz ; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB .
kyqespgapw > 0.675 ) && ( rtB . f2e4fmh5rw < 1.0E-6 ) ) { rtAction = 0 ; }
rtDW . ikdujdqbhz = rtAction ; } else { rtAction = rtDW . ikdujdqbhz ; } if (
( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) { pnow1l4kyo ( rtS )
; } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { khd1002t2x ( rtS ) ; }
n1lfiimiby ( rtS , rtB . kyqespgapw , rtP . Constant_Value_kkpfkdhxzv , & rtB
. n1lfiimibyh ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
n1lfiimibyh . jiohbu5vfc ) ; } } ef3bwkvl4e ( rtS , rtB . n1lfiimibyh .
ga42gsoznq , rtB . n1lfiimibyh . fvh0mv5ped , & rtB . ef3bwkvl4et , & rtDW .
ef3bwkvl4et ) ; rtB . gfrlb0etij = 1.055 / ( rtB . ef3bwkvl4et . o0whdfflfv -
0.2639 ) ; hvxfwg50kf = 2.0 * rtP . Ek / 150.0 * rtB . ef3bwkvl4et .
o0whdfflfv / rtB . gfrlb0etij * ( rtP . Constant4_Value_aqjbum4lqh - rtB .
gfrlb0etij / rtP . Constant3_Value_kvcy0floga ) ; jm15w1uz2s = rtB .
f2e4fmh5rw * hvxfwg50kf ; rtPrevAction = rtDW . c3m352mirs ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( rtB . gfrlb0etij >
rtB . f2e4fmh5rw ) ; rtDW . c3m352mirs = rtAction ; } else { rtAction = rtDW
. c3m352mirs ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ltcbsbpito ( rtS , & rtB . agyrpuacxw3 , & rtP . agyrpuacxw3 ) ;
break ; case 1 : j1cwalzf33 ( rtS , & rtB . okacab3hemp , & rtP . okacab3hemp
) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction
) { n2esxjfgsp ( rtS ) ; } agyrpuacxw ( rtS , jm15w1uz2s , rtP .
Constant5_Value_o4i2izixfm , & rtB . agyrpuacxw3 ) ; if ( ssIsMajorTimeStep (
rtS ) ) { srUpdateBC ( rtDW . agyrpuacxw3 . i3jfuj41qy ) ; } break ; case 1 :
if ( rtAction != rtPrevAction ) { mxyuoe1l2f ( rtS ) ; } okacab3hem ( rtS ,
rtB . gfrlb0etij , rtP . Constant6_Value_a00wsihizx , & rtB . okacab3hemp ) ;
if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . okacab3hemp .
ioximvoylt ) ; } break ; } if ( rtB . okacab3hemp . pnuewr4pnd > rtP .
Switch1_Threshold_j0k2owrzrd ) { hvxfwg50kf *= rtB . okacab3hemp . j0quskwuuz
; } else { hvxfwg50kf = 0.0 ; } if ( rtB . agyrpuacxw3 . hqvgkhiase > rtP .
Switch_Threshold_ppvr14hokg ) { eiagzuoprf = rtB . agyrpuacxw3 . ivesxeoeky ;
} else { eiagzuoprf = 0.0 ; } rtB . mpzph3aoym = eiagzuoprf + hvxfwg50kf ;
rtB . lg3izt0djl = 0.0 ; rtB . lg3izt0djl += rtP . StateSpace_C_jrv0j0u0g0 *
rtX . hxdgb1014z ; rtB . lg3izt0djl += rtP . StateSpace_D_dskmapuus5 * rtB .
eeelttb4vr ; rtB . czuqbf5zpt = 0.0 ; rtB . czuqbf5zpt += rtP .
StateSpace_C_dmxkpndill * rtX . jcmiv2o5uc ; rtB . klre0yyw4m = ( ( ( rtP .
Vref2_Value + rtP . Vf0ka_Value_jt5grxyxsb ) - rtB . czuqbf5zpt ) + rtB .
cqdq14zipf ) - rtB . lg3izt0djl ; rtB . jpjgpvw22t = 0.0 ; rtB . jpjgpvw22t
+= rtP . StateSpace_C_hidglamx2i * rtX . a1yjnjjcnf ; rtB . jpjgpvw22t += rtP
. StateSpace_D_jddjnrx222 * rtB . klre0yyw4m ; rtB . lpyy3fuvcg = 0.0 ; rtB .
lpyy3fuvcg += rtP . StateSpace_C_car22bvded * rtX . cj1z4j4qf4 ; mjmwpz3hat =
muDoubleScalarPower ( rtB . lv3jukjnqp [ 12 ] , 2.0 ) + muDoubleScalarPower (
rtB . lv3jukjnqp [ 11 ] , 2.0 ) ; if ( mjmwpz3hat < 0.0 ) { rtB . klmfbwlf32
= - muDoubleScalarSqrt ( - mjmwpz3hat ) ; } else { rtB . klmfbwlf32 =
muDoubleScalarSqrt ( mjmwpz3hat ) ; } rtB . iprnorxab3 = rtP .
Vfdmax1_Gain_o4xrs40ghl * rtB . czuqbf5zpt ; rtB . nx0pljyxhc = rtB .
iprnorxab3 + rtB . ct5nzyasox ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . m4jf2srdtt = ( rtB . lpyy3fuvcg > rtP .
Constant1_Value_bwnptvelyn ) ; } pegf0ujucm = rtDW . m4jf2srdtt ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . lkguu43rgr = ( rtB . lpyy3fuvcg < rtB .
nx0pljyxhc ) ; } rtB . lzgytxcuj4 = ( pegf0ujucm && rtDW . lkguu43rgr ) ;
k353nkijvg = ! pegf0ujucm ; rtB . o4qu1kuoq3 = ! rtDW . lkguu43rgr ; rtB .
o0qn3ari12 = rtP . Constant1_Value_bwnptvelyn * k353nkijvg ; } rtB .
mkiyraykby = rtB . lpyy3fuvcg * rtB . lzgytxcuj4 ; rtB . azd2clxgy0 = rtB .
o4qu1kuoq3 * rtB . nx0pljyxhc ; rtB . hk2lysmmn2 = ( rtB . mkiyraykby + rtB .
o0qn3ari12 ) + rtB . azd2clxgy0 ; cfxuytlxuw ( rtS , rtP .
Constant1_Value_o4ktpjp1og , & rtB . oq2a2iz1om , & rtDW . oq2a2iz1om , & rtP
. oq2a2iz1om , & rtX . oq2a2iz1om , & ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) -> oq2a2iz1om ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX .
j1uiwy3djt >= rtP . Servomotorposition_UpperSat_g2viti3ij0 ) { rtX .
j1uiwy3djt = rtP . Servomotorposition_UpperSat_g2viti3ij0 ; } else { if ( rtX
. j1uiwy3djt <= rtP . Servomotorposition_LowerSat_flomn3kebp ) { rtX .
j1uiwy3djt = rtP . Servomotorposition_LowerSat_flomn3kebp ; } } } rtB .
hlfbp5fwlu = rtX . j1uiwy3djt ; rtB . beuzvyiici = rtB . hlfbp5fwlu * rtP .
Pboil_Value_efboupdpwe ; if ( rtP . Constant1_Value_o4ktpjp1og ) { rtB .
af3hkqbmzi = rtB . oq2a2iz1om . h3ztb2avwq ; } else { rtB . af3hkqbmzi = rtB
. beuzvyiici ; } rtB . g4fontgf1e = rtP . Gain4_Gain_nsyra3kfe1 * rtB .
af3hkqbmzi ; cfxuytlxuw ( rtS , rtP . Constant2_Value_jfqnsyijuf , & rtB .
n4yw4kkm3u , & rtDW . n4yw4kkm3u , & rtP . n4yw4kkm3u , & rtX . n4yw4kkm3u ,
& ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> n4yw4kkm3u ) ; if ( rtP .
Constant2_Value_jfqnsyijuf ) { rtB . ppzhxzv1nu = rtB . n4yw4kkm3u .
h3ztb2avwq ; } else { rtB . ppzhxzv1nu = rtB . af3hkqbmzi ; } rtB .
gu4lv5cem2 = rtP . Gain3_Gain_infnel21fz * rtB . ppzhxzv1nu ; cfxuytlxuw (
rtS , rtP . Constant3_Value_ggyia03vvy , & rtB . hqbkpgyaw2 , & rtDW .
hqbkpgyaw2 , & rtP . hqbkpgyaw2 , & rtX . hqbkpgyaw2 , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> hqbkpgyaw2 ) ; if ( rtP .
Constant3_Value_ggyia03vvy ) { rtB . j0m3ntlogi = rtB . hqbkpgyaw2 .
h3ztb2avwq ; } else { rtB . j0m3ntlogi = rtB . ppzhxzv1nu ; } rtB .
jt5b1uoadw = rtP . Gain2_Gain_o21izxvyzr * rtB . j0m3ntlogi ; cfxuytlxuw (
rtS , rtP . Constant4_Value_a04jhxah0h , & rtB . kl4qbbwlk2 , & rtDW .
kl4qbbwlk2 , & rtP . kl4qbbwlk2 , & rtX . kl4qbbwlk2 , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> kl4qbbwlk2 ) ; if ( rtP .
Constant4_Value_a04jhxah0h ) { rtB . bnglnvupy0 = rtB . kl4qbbwlk2 .
h3ztb2avwq ; } else { rtB . bnglnvupy0 = rtB . j0m3ntlogi ; } rtB .
aj0xom1yba = rtP . Gain_Gain_jrkxnsh34l * rtB . bnglnvupy0 ; eecdtyu2lc ( rtS
, rtP . STG1_gentype_fmql50levs == 2.0 , rtB . aj0xom1yba , rtB . jt5b1uoadw
, rtB . gu4lv5cem2 , rtB . g4fontgf1e , rtB . pdzx3ova52 , & rtB . iicqzjvjtu
, & rtDW . iicqzjvjtu , & rtP . iicqzjvjtu , & rtX . iicqzjvjtu , rtP .
STG1_N_fse3yn4wyt , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ->
iicqzjvjtu ) ; if ( rtP . STG1_gentype_fmql50levs != 2.0 ) { rtB . k2fjtw1kcs
= ( ( rtB . g4fontgf1e + rtB . gu4lv5cem2 ) + rtB . jt5b1uoadw ) + rtB .
aj0xom1yba ; rtB . ctd33enkwk = rtB . k2fjtw1kcs ; } else { rtB . ctd33enkwk
= rtB . iicqzjvjtu . i5ua1kw1wm ; } rtB . fh3mkzcqqi = rtB . ctd33enkwk * rtB
. ibjh32sw1c ; rtB . awbmgmlnwa = 1.0 / rtP . speedregulator_Rp_bqqacvanf5 *
rtB . ibjh32sw1c ; rtB . er3cba3bay = ( rtP . Pref2_Value_hzyk4t5t4c + rtB .
blv2th2bqq ) - rtB . awbmgmlnwa ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB
. er3cba3bay > rtP . speedregulator_Dz_mfgpmqgzg2 ) { rtDW . bj2fwn3hdn = 1 ;
} else if ( rtB . er3cba3bay >= - rtP . speedregulator_Dz_mfgpmqgzg2 ) { rtDW
. bj2fwn3hdn = 0 ; } else { rtDW . bj2fwn3hdn = - 1 ; } } if ( rtDW .
bj2fwn3hdn == 1 ) { rtB . nkjn34zi2j = rtB . er3cba3bay - rtP .
speedregulator_Dz_mfgpmqgzg2 ; } else if ( rtDW . bj2fwn3hdn == - 1 ) { rtB .
nkjn34zi2j = rtB . er3cba3bay - ( - rtP . speedregulator_Dz_mfgpmqgzg2 ) ; }
else { rtB . nkjn34zi2j = 0.0 ; } rtB . fpr5tvnj2f = rtP .
speedregulator_Kp_gccykbh0yu * rtB . nkjn34zi2j ; rtB . cpg230yfqh = ( rtP .
speedregulator_Kp_gccykbh0yu - 1.0 ) * rtB . af3hkqbmzi ; rtB . gsaf3f2gdq =
0.0 ; rtB . gsaf3f2gdq += rtP . StateSpace_C_dkf5nbj2xm * rtX . hvtpmx4w53 ;
rtB . dv2pnskjqq = rtB . gsaf3f2gdq - rtB . hlfbp5fwlu ; rtB . j0pfo1rvmu =
1.0 / rtP . speedregulator_Tsm_kx3odhbnpc * rtB . dv2pnskjqq ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . akanpxoqip = rtB . j0pfo1rvmu >= rtP .
Servomotorspeedlimits_UpperSat_hxtjahgvcj ? 1 : rtB . j0pfo1rvmu > rtP .
Servomotorspeedlimits_LowerSat_pqcubg4tor ? 0 : - 1 ; } rtB . ae431mz3p4 =
rtDW . akanpxoqip == 1 ? rtP . Servomotorspeedlimits_UpperSat_hxtjahgvcj :
rtDW . akanpxoqip == - 1 ? rtP . Servomotorspeedlimits_LowerSat_pqcubg4tor :
rtB . j0pfo1rvmu ; rtB . e0jycpiqck = rtB . fpr5tvnj2f - rtB . cpg230yfqh ;
rtB . ce44kslacp = rtP . N_Gain_cfrqi4f2h5 * rtB . eeelttb4vr ; rtB .
m5c4hbg441 = rtP . Gain1_Gain_mhvdo1wgna * rtB . gnmso3ufns ; for ( i = 0 ; i
< 36 ; i ++ ) { rtB . eqkdudoasf [ i ] = rtP . u1_Value_h4jujbq1rl [ i ] ;
f5mrfc0rmf [ i ] = rtB . eqkdudoasf [ i ] ; } f5mrfc0rmf [ 6 ] = rtB .
gnmso3ufns ; f5mrfc0rmf [ 1 ] = rtB . m5c4hbg441 ; if ( rtP .
Constant2_Value_kpilmp02lc >= rtP . Switch1_Threshold_j1odu5aueg ) { memcpy (
& rtB . ga3nsrampj [ 0 ] , & rtB . jiiczdlcrb . bmx5oxytsv [ 0 ] , 36U *
sizeof ( real_T ) ) ; } else { memcpy ( & rtB . ga3nsrampj [ 0 ] , & rtP .
Constant6_Value_h1t5q1m1tn [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0
; i < 36 ; i ++ ) { rtB . pa2tx3ce5v [ i ] = ( 0.0 - f5mrfc0rmf [ i ] ) - rtB
. ga3nsrampj [ i ] ; } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . jm12g4bdq3
[ i_p ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . jm12g4bdq3 [ i_p ] +=
rtB . pa2tx3ce5v [ 6 * i + i_p ] * rtB . hkzza5jukv [ i ] ; } } rtB .
cys13oinrr [ 0 ] = rtB . evb2ap4hyf + rtB . jm12g4bdq3 [ 0 ] ; rtB .
cys13oinrr [ 1 ] = rtB . ddn0abp02q + rtB . jm12g4bdq3 [ 1 ] ; rtB .
cys13oinrr [ 2 ] = rtB . ce44kslacp + rtB . jm12g4bdq3 [ 2 ] ; rtB .
cys13oinrr [ 3 ] = rtP . Vkd0Vkq10Vkq20_Value_dxtsp2nol1 [ 0 ] + rtB .
jm12g4bdq3 [ 3 ] ; rtB . cys13oinrr [ 4 ] = rtP .
Vkd0Vkq10Vkq20_Value_dxtsp2nol1 [ 1 ] + rtB . jm12g4bdq3 [ 4 ] ; rtB .
cys13oinrr [ 5 ] = rtP . Vkd0Vkq10Vkq20_Value_dxtsp2nol1 [ 2 ] + rtB .
jm12g4bdq3 [ 5 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . kooavxss5m [ i ] =
rtP . wbase_Gain_mn3g0d5nog * rtB . cys13oinrr [ i ] ; } rtB . lupaw4rnvv .
re = rtP . Gain1_Gain_db2dnxw4x5 * rtB . cqs4cshl4z [ 0 ] . re ; rtB .
lupaw4rnvv . im = rtP . Gain1_Gain_db2dnxw4x5 * rtB . cqs4cshl4z [ 0 ] . im ;
rtB . cum4emnzw3 . re = rtP . a3_Gain_pwfbcv2hdq . re * rtB . cqs4cshl4z [ 1
] . re - rtP . a3_Gain_pwfbcv2hdq . im * rtB . cqs4cshl4z [ 1 ] . im ; rtB .
cum4emnzw3 . im = rtP . a3_Gain_pwfbcv2hdq . re * rtB . cqs4cshl4z [ 1 ] . im
+ rtP . a3_Gain_pwfbcv2hdq . im * rtB . cqs4cshl4z [ 1 ] . re ; rtB .
bqqd03nwwx . re = rtB . lupaw4rnvv . re - rtB . cum4emnzw3 . re ; rtB .
bqqd03nwwx . im = rtB . lupaw4rnvv . im - rtB . cum4emnzw3 . im ; rtB .
ddgfldhlsi = rtB . bqqd03nwwx . re ; rtB . b41ayuyill = rtB . bqqd03nwwx . im
; rtB . pubsjzqdov [ 0 ] = rtP . uL2_pu_Gain_amo3vcbbid * rtB . ddgfldhlsi ;
rtB . pubsjzqdov [ 1 ] = rtP . uL2_pu_Gain_amo3vcbbid * rtB . b41ayuyill ;
rtB . die3odxdp3 [ 0 ] = rtP . Gain3_Gain_niopovboru [ 0 ] * rtB . h1fv3imr2t
[ 0 ] ; rtB . j3ercjdea0 [ 0 ] = rtP . R2_puL2_puX2R230_Gain_ofv3x04bws * rtB
. h1fv3imr2t [ 0 ] ; rtB . die3odxdp3 [ 1 ] = rtP . Gain3_Gain_niopovboru [ 1
] * rtB . h1fv3imr2t [ 1 ] ; rtB . j3ercjdea0 [ 1 ] = rtP .
R2_puL2_puX2R230_Gain_ofv3x04bws * rtB . h1fv3imr2t [ 1 ] ; rtB . gbmx304mw0
[ 0 ] = ( rtB . pubsjzqdov [ 0 ] - rtB . j3ercjdea0 [ 0 ] ) + rtB .
die3odxdp3 [ 1 ] ; rtB . gbmx304mw0 [ 1 ] = ( rtB . pubsjzqdov [ 1 ] - rtB .
j3ercjdea0 [ 1 ] ) + rtB . die3odxdp3 [ 0 ] ; rtB . pos2lxkkzh [ 0 ] = rtP .
Gain4_Gain_jakiacafsa * rtB . gbmx304mw0 [ 0 ] ; rtB . pos2lxkkzh [ 1 ] = rtP
. Gain4_Gain_jakiacafsa * rtB . gbmx304mw0 [ 1 ] ; rtB . dtzqyjhqrl = rtP .
u_Pb_Gain_n32fud0ir1 * rtB . fh3mkzcqqi ; rtB . h4urt5fi24 = rtP .
F1_Gain_e3qbzisiku * rtB . gnmso3ufns ; rtB . aa0bdg5g1q = ( rtB . dtzqyjhqrl
/ rtB . gnmso3ufns - rtB . ah1gsbatnx ) - rtB . h4urt5fi24 ; rtB . knn1lzb4ri
= rtP . u_2H_Gain_dwgaxjw5ex * rtB . aa0bdg5g1q ; rtB . kuj2fpnilb = rtP .
web1_Gain_fyhekbrm5i * rtB . gxjenmymi3 ; rtB . kxkr4kddie = rtP .
web3_Gain_dhjkloyi5f * rtB . gnmso3ufns ; rtB . gpotvgooit . re = rtP .
donotdeletethisgain_Gain_bfl2dczmi1 * rtB . bhnb4tmjw1 [ 53 ] . re ; rtB .
gpotvgooit . im = rtP . donotdeletethisgain_Gain_bfl2dczmi1 * rtB .
bhnb4tmjw1 [ 53 ] . im ; rtB . ejfagwezyl . re = rtP .
donotdeletethisgain_Gain_espx2u33a1 * rtB . bhnb4tmjw1 [ 54 ] . re ; rtB .
ejfagwezyl . im = rtP . donotdeletethisgain_Gain_espx2u33a1 * rtB .
bhnb4tmjw1 [ 54 ] . im ; rtB . bigwn33xt3 . re = rtP . a2_Gain_j4nltdk5ac .
re * rtB . ejfagwezyl . re - rtP . a2_Gain_j4nltdk5ac . im * rtB . ejfagwezyl
. im ; rtB . bigwn33xt3 . im = rtP . a2_Gain_j4nltdk5ac . re * rtB .
ejfagwezyl . im + rtP . a2_Gain_j4nltdk5ac . im * rtB . ejfagwezyl . re ; rtB
. abjxoe31ne . re = rtB . gpotvgooit . re - rtB . bigwn33xt3 . re ; rtB .
abjxoe31ne . im = rtB . gpotvgooit . im - rtB . bigwn33xt3 . im ; rtB .
cqgh3rs2y1 . re = rtP . a3_Gain_jupury5wlc * rtB . abjxoe31ne . re ; rtB .
cqgh3rs2y1 . im = rtP . a3_Gain_jupury5wlc * rtB . abjxoe31ne . im ; rtB .
e41naz4kca = muDoubleScalarHypot ( rtB . cqgh3rs2y1 . re , rtB . cqgh3rs2y1 .
im ) ; k353nkijvg = muDoubleScalarAtan2 ( rtB . cqgh3rs2y1 . im , rtB .
cqgh3rs2y1 . re ) ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mh1mdaxfms =
rtB . e41naz4kca >= rtP . Saturation1_UpperSat_nk2y2hmxxu ? 1 : rtB .
e41naz4kca > rtP . Saturation1_LowerSat_hvszs1cibi ? 0 : - 1 ; } rtB .
gs2tqoppxh = rtDW . mh1mdaxfms == 1 ? rtP . Saturation1_UpperSat_nk2y2hmxxu :
rtDW . mh1mdaxfms == - 1 ? rtP . Saturation1_LowerSat_hvszs1cibi : rtB .
e41naz4kca ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . knebdwpoyp . re =
rtDW . fj3pd2kyk2 [ 0 ] ; rtB . knebdwpoyp . im = rtP . Pc * 0.05 ; }
eiagzuoprf = rtB . gs2tqoppxh * muDoubleScalarCos ( k353nkijvg ) ; mjmwpz3hat
= rtB . gs2tqoppxh * muDoubleScalarSin ( k353nkijvg ) ; if ( mjmwpz3hat ==
0.0 ) { hvxfwg50kf = 1.0 / eiagzuoprf ; eiagzuoprf = 0.0 ; } else if (
eiagzuoprf == 0.0 ) { hvxfwg50kf = 0.0 ; eiagzuoprf = - ( 1.0 / mjmwpz3hat )
; } else { im_e = muDoubleScalarAbs ( eiagzuoprf ) ; hvxfwg50kf =
muDoubleScalarAbs ( mjmwpz3hat ) ; if ( im_e > hvxfwg50kf ) { im_e =
mjmwpz3hat / eiagzuoprf ; eiagzuoprf += im_e * mjmwpz3hat ; hvxfwg50kf = 1.0
/ eiagzuoprf ; eiagzuoprf = - ( im_e / eiagzuoprf ) ; } else if ( hvxfwg50kf
== im_e ) { hvxfwg50kf = ( eiagzuoprf > 0.0 ? 0.5 : - 0.5 ) / im_e ;
eiagzuoprf = - ( mjmwpz3hat > 0.0 ? 0.5 : - 0.5 ) / im_e ; } else { im_e =
eiagzuoprf / mjmwpz3hat ; eiagzuoprf = im_e * eiagzuoprf + mjmwpz3hat ;
hvxfwg50kf = im_e / eiagzuoprf ; eiagzuoprf = - ( 1.0 / eiagzuoprf ) ; } }
rtB . kkexdxbbkd . re = hvxfwg50kf * rtB . knebdwpoyp . re - eiagzuoprf * rtB
. knebdwpoyp . im ; rtB . kkexdxbbkd . im = hvxfwg50kf * rtB . knebdwpoyp .
im + eiagzuoprf * rtB . knebdwpoyp . re ; rtB . ogvfmpgtwl . re = rtP .
a4_Gain_flo45vukkm * rtB . kkexdxbbkd . re ; rtB . ogvfmpgtwl . im = rtP .
a4_Gain_flo45vukkm * rtB . kkexdxbbkd . im ; rtB . lxvqpqbx1x = rtB .
ogvfmpgtwl . re ; rtB . oabj2jzm25 = - rtB . ogvfmpgtwl . im ; if ( ( rtDW .
a21uxkuhet >= ssGetT ( rtS ) ) && ( rtDW . pvmeybyawr >= ssGetT ( rtS ) ) ) {
rtB . armyl1suvu = 0.0 ; } else { hvxfwg50kf = rtDW . a21uxkuhet ; lastU = &
rtDW . imgwfdnxwt ; if ( rtDW . a21uxkuhet < rtDW . pvmeybyawr ) { if ( rtDW
. pvmeybyawr < ssGetT ( rtS ) ) { hvxfwg50kf = rtDW . pvmeybyawr ; lastU = &
rtDW . i415cb5tyz ; } } else { if ( rtDW . a21uxkuhet >= ssGetT ( rtS ) ) {
hvxfwg50kf = rtDW . pvmeybyawr ; lastU = & rtDW . i415cb5tyz ; } } rtB .
armyl1suvu = ( rtB . paudgqgyvo - * lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf )
; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . aixga1kij4 = ( rtB . armyl1suvu
>= 0.0 ) ; } rtB . pf3lkjovxq = rtDW . aixga1kij4 > 0 ? rtB . armyl1suvu : -
rtB . armyl1suvu ; rtB . g5w2fnp4gp = ssGetT ( rtS ) ; rtPrevAction = rtDW .
carppcocfa ; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB .
pf3lkjovxq > 0.675 ) && ( rtB . g5w2fnp4gp < 1.0E-6 ) ) { rtAction = 0 ; }
rtDW . carppcocfa = rtAction ; } else { rtAction = rtDW . carppcocfa ; } if (
( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) { pnow1l4kyo ( rtS )
; } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { khd1002t2x ( rtS ) ; }
n1lfiimiby ( rtS , rtB . pf3lkjovxq , rtP . Constant_Value_cbsij1nyou , & rtB
. o4q02ps2rb ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
o4q02ps2rb . jiohbu5vfc ) ; } } ef3bwkvl4e ( rtS , rtB . o4q02ps2rb .
ga42gsoznq , rtB . o4q02ps2rb . fvh0mv5ped , & rtB . bfu21rlfhj , & rtDW .
bfu21rlfhj ) ; rtB . melb0fec15 = 1.055 / ( rtB . bfu21rlfhj . o0whdfflfv -
0.2639 ) ; k353nkijvg = 2.0 * rtP . Ek / 150.0 * rtB . bfu21rlfhj .
o0whdfflfv / rtB . melb0fec15 * ( rtP . Constant4_Value_hap2iayqcd - rtB .
melb0fec15 / rtP . Constant3_Value_jzoklkoczu ) ; gz5bujd4zh = rtB .
g5w2fnp4gp * k353nkijvg ; rtPrevAction = rtDW . bi0bokrgo0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( rtB . melb0fec15 >
rtB . g5w2fnp4gp ) ; rtDW . bi0bokrgo0 = rtAction ; } else { rtAction = rtDW
. bi0bokrgo0 ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ltcbsbpito ( rtS , & rtB . emv01xexxw , & rtP . emv01xexxw ) ; break
; case 1 : j1cwalzf33 ( rtS , & rtB . civchsdznw , & rtP . civchsdznw ) ;
break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) {
n2esxjfgsp ( rtS ) ; } agyrpuacxw ( rtS , gz5bujd4zh , rtP .
Constant5_Value_gh1uwbobyi , & rtB . emv01xexxw ) ; if ( ssIsMajorTimeStep (
rtS ) ) { srUpdateBC ( rtDW . emv01xexxw . i3jfuj41qy ) ; } break ; case 1 :
if ( rtAction != rtPrevAction ) { mxyuoe1l2f ( rtS ) ; } okacab3hem ( rtS ,
rtB . melb0fec15 , rtP . Constant6_Value_lsq1qxtpqd , & rtB . civchsdznw ) ;
if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . civchsdznw .
ioximvoylt ) ; } break ; } if ( rtB . civchsdznw . pnuewr4pnd > rtP .
Switch1_Threshold_eb5gwrxtw4 ) { k353nkijvg *= rtB . civchsdznw . j0quskwuuz
; } else { k353nkijvg = 0.0 ; } if ( rtB . emv01xexxw . hqvgkhiase > rtP .
Switch_Threshold_bku4vfxvxp ) { eiagzuoprf = rtB . emv01xexxw . ivesxeoeky ;
} else { eiagzuoprf = 0.0 ; } rtB . orwvsq0ufs = eiagzuoprf + k353nkijvg ;
rtB . gcvyc24xl0 = 0.0 ; rtB . gcvyc24xl0 += rtP . StateSpace_C_pkwfftnwsw *
rtX . kdzkh5hxbg ; rtB . gcvyc24xl0 += rtP . StateSpace_D_gx5tzuqkcz * rtB .
gvmx2cbgqe ; rtB . iddljzblvf = 0.0 ; rtB . iddljzblvf += rtP .
StateSpace_C_adz4hdkoya * rtX . bln3vroqur ; rtB . hreourhpdt = ( ( ( rtP .
Vref3_Value + rtP . Vf0ka_Value_ci3dvxvfpj ) - rtB . iddljzblvf ) + rtB .
b3p5x1h2fx ) - rtB . gcvyc24xl0 ; rtB . bs3kyjvmgv = 0.0 ; rtB . bs3kyjvmgv
+= rtP . StateSpace_C_jjr5vxwkid * rtX . hdvfrnkcmn ; rtB . bs3kyjvmgv += rtP
. StateSpace_D_bvhuekh5r3 * rtB . hreourhpdt ; rtB . pk5vxax5dp = 0.0 ; rtB .
pk5vxax5dp += rtP . StateSpace_C_np4cp0rxto * rtX . p2ai4f0o54 ; mjmwpz3hat =
muDoubleScalarPower ( rtB . jmxojepiit [ 12 ] , 2.0 ) + muDoubleScalarPower (
rtB . jmxojepiit [ 11 ] , 2.0 ) ; if ( mjmwpz3hat < 0.0 ) { rtB . dn4kxqtqh5
= - muDoubleScalarSqrt ( - mjmwpz3hat ) ; } else { rtB . dn4kxqtqh5 =
muDoubleScalarSqrt ( mjmwpz3hat ) ; } rtB . fbrbu0ccie = rtP .
Vfdmax1_Gain_j4eezc0ikw * rtB . iddljzblvf ; rtB . hcsfiaiyml = rtB .
fbrbu0ccie + rtB . gpg5t1grec ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . kewxpov34z = ( rtB . pk5vxax5dp > rtP .
Constant1_Value_pgowlwbezc ) ; } ok1cl11fbo = rtDW . kewxpov34z ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . cmsk53alke = ( rtB . pk5vxax5dp < rtB .
hcsfiaiyml ) ; } rtB . gfdiegy000 = ( ok1cl11fbo && rtDW . cmsk53alke ) ;
jc0d42jx0q = ! ok1cl11fbo ; rtB . kbvso2g4l5 = ! rtDW . cmsk53alke ; rtB .
n11oasytsa = rtP . Constant1_Value_pgowlwbezc * jc0d42jx0q ; } rtB .
ejnrqlqm3u = rtB . pk5vxax5dp * rtB . gfdiegy000 ; rtB . o1nreayjes = rtB .
kbvso2g4l5 * rtB . hcsfiaiyml ; rtB . caxxez3cbp = ( rtB . ejnrqlqm3u + rtB .
n11oasytsa ) + rtB . o1nreayjes ; cfxuytlxuw ( rtS , rtP .
Constant1_Value_bzml0rbttb , & rtB . im3skmxke2 , & rtDW . im3skmxke2 , & rtP
. im3skmxke2 , & rtX . im3skmxke2 , & ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) -> im3skmxke2 ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtX .
a0k4henh31 >= rtP . Servomotorposition_UpperSat_natik5gvim ) { rtX .
a0k4henh31 = rtP . Servomotorposition_UpperSat_natik5gvim ; } else { if ( rtX
. a0k4henh31 <= rtP . Servomotorposition_LowerSat_ira4c4d5cb ) { rtX .
a0k4henh31 = rtP . Servomotorposition_LowerSat_ira4c4d5cb ; } } } rtB .
dxgeeotrlx = rtX . a0k4henh31 ; rtB . cyrksvovlu = rtB . dxgeeotrlx * rtP .
Pboil_Value_mqnhhubr4t ; if ( rtP . Constant1_Value_bzml0rbttb ) { rtB .
nipseb4pdf = rtB . im3skmxke2 . h3ztb2avwq ; } else { rtB . nipseb4pdf = rtB
. cyrksvovlu ; } rtB . ktman4e40l = rtP . Gain4_Gain_ozz2n2j0ij * rtB .
nipseb4pdf ; cfxuytlxuw ( rtS , rtP . Constant2_Value_aueheou35d , & rtB .
i1jub4ytlu , & rtDW . i1jub4ytlu , & rtP . i1jub4ytlu , & rtX . i1jub4ytlu ,
& ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) -> i1jub4ytlu ) ; if ( rtP .
Constant2_Value_aueheou35d ) { rtB . krdmyzrxdu = rtB . i1jub4ytlu .
h3ztb2avwq ; } else { rtB . krdmyzrxdu = rtB . nipseb4pdf ; } rtB .
g3q41vxpzk = rtP . Gain3_Gain_oxb12t5li3 * rtB . krdmyzrxdu ; cfxuytlxuw (
rtS , rtP . Constant3_Value_m1sgoaygio , & rtB . l2otctcrwa , & rtDW .
l2otctcrwa , & rtP . l2otctcrwa , & rtX . l2otctcrwa , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> l2otctcrwa ) ; if ( rtP .
Constant3_Value_m1sgoaygio ) { rtB . d5khcoomh0 = rtB . l2otctcrwa .
h3ztb2avwq ; } else { rtB . d5khcoomh0 = rtB . krdmyzrxdu ; } rtB .
o1nhez00i1 = rtP . Gain2_Gain_bomrjvzlbj * rtB . d5khcoomh0 ; cfxuytlxuw (
rtS , rtP . Constant4_Value_igllmua4rz , & rtB . p3atgr1lvy , & rtDW .
p3atgr1lvy , & rtP . p3atgr1lvy , & rtX . p3atgr1lvy , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> p3atgr1lvy ) ; if ( rtP .
Constant4_Value_igllmua4rz ) { rtB . f4b4v0ijys = rtB . p3atgr1lvy .
h3ztb2avwq ; } else { rtB . f4b4v0ijys = rtB . d5khcoomh0 ; } rtB .
owxsqi11bv = rtP . Gain_Gain_barbsyuone * rtB . f4b4v0ijys ; eecdtyu2lc ( rtS
, rtP . STG1_gentype_fw3hs3su3z == 2.0 , rtB . owxsqi11bv , rtB . o1nhez00i1
, rtB . g3q41vxpzk , rtB . ktman4e40l , rtB . kwzkk1c41h , & rtB . g0suhtc3bz
, & rtDW . g0suhtc3bz , & rtP . g0suhtc3bz , & rtX . g0suhtc3bz , rtP .
STG1_N_jfntabyhu0 , & ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ->
g0suhtc3bz ) ; if ( rtP . STG1_gentype_fw3hs3su3z != 2.0 ) { rtB . cxh1t2fkmh
= ( ( rtB . ktman4e40l + rtB . g3q41vxpzk ) + rtB . o1nhez00i1 ) + rtB .
owxsqi11bv ; rtB . hgwr2w5ecc = rtB . cxh1t2fkmh ; } else { rtB . hgwr2w5ecc
= rtB . g0suhtc3bz . i5ua1kw1wm ; } rtB . fo2hurg0vg = rtB . hgwr2w5ecc * rtB
. emr2fhbqxu ; rtB . og33vmdixg = 1.0 / rtP . speedregulator_Rp_ljlv1thlh2 *
rtB . emr2fhbqxu ; rtB . hhi1nnec5l = ( rtP . Pref3_Value + rtB . jvy2gkbhkm
) - rtB . og33vmdixg ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB .
hhi1nnec5l > rtP . speedregulator_Dz_fjbn4iiabn ) { rtDW . pgehtigdvo = 1 ; }
else if ( rtB . hhi1nnec5l >= - rtP . speedregulator_Dz_fjbn4iiabn ) { rtDW .
pgehtigdvo = 0 ; } else { rtDW . pgehtigdvo = - 1 ; } } if ( rtDW .
pgehtigdvo == 1 ) { rtB . dmla42z3cd = rtB . hhi1nnec5l - rtP .
speedregulator_Dz_fjbn4iiabn ; } else if ( rtDW . pgehtigdvo == - 1 ) { rtB .
dmla42z3cd = rtB . hhi1nnec5l - ( - rtP . speedregulator_Dz_fjbn4iiabn ) ; }
else { rtB . dmla42z3cd = 0.0 ; } rtB . lc2j2sdlrf = rtP .
speedregulator_Kp_crs5bibdie * rtB . dmla42z3cd ; rtB . onkpfgvuqs = ( rtP .
speedregulator_Kp_crs5bibdie - 1.0 ) * rtB . nipseb4pdf ; rtB . nouofdn2pm =
0.0 ; rtB . nouofdn2pm += rtP . StateSpace_C_gzgmgqpmq4 * rtX . nyms3o1twt ;
rtB . jshfzukjra = rtB . nouofdn2pm - rtB . dxgeeotrlx ; rtB . es4v2hh0nq =
1.0 / rtP . speedregulator_Tsm_ojahxcw44p * rtB . jshfzukjra ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . o0sdwijzmz = rtB . es4v2hh0nq >= rtP .
Servomotorspeedlimits_UpperSat_llv5tjky0e ? 1 : rtB . es4v2hh0nq > rtP .
Servomotorspeedlimits_LowerSat_epl2fm4hc2 ? 0 : - 1 ; } rtB . drum3qlc1a =
rtDW . o0sdwijzmz == 1 ? rtP . Servomotorspeedlimits_UpperSat_llv5tjky0e :
rtDW . o0sdwijzmz == - 1 ? rtP . Servomotorspeedlimits_LowerSat_epl2fm4hc2 :
rtB . es4v2hh0nq ; rtB . ei5d5pufyd = rtB . lc2j2sdlrf - rtB . onkpfgvuqs ;
rtB . clgwiuw1b4 = rtP . N_Gain_pai5mer4q5 * rtB . gvmx2cbgqe ; rtB .
lsewb1y44k = rtP . Gain1_Gain_mzl4axpymz * rtB . jxxv1skywx ; for ( i = 0 ; i
< 36 ; i ++ ) { rtB . j314321lhc [ i ] = rtP . u1_Value_ncrdtvkqtx [ i ] ;
f5mrfc0rmf [ i ] = rtB . j314321lhc [ i ] ; } f5mrfc0rmf [ 6 ] = rtB .
jxxv1skywx ; f5mrfc0rmf [ 1 ] = rtB . lsewb1y44k ; if ( rtP .
Constant2_Value_ppwzngecez >= rtP . Switch1_Threshold_hrf4ang0bl ) { memcpy (
& rtB . nbal4q42dj [ 0 ] , & rtB . lfyyzy3mj4 . bmx5oxytsv [ 0 ] , 36U *
sizeof ( real_T ) ) ; } else { memcpy ( & rtB . nbal4q42dj [ 0 ] , & rtP .
Constant6_Value_clv2lszg0g [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0
; i < 36 ; i ++ ) { rtB . afe1t2z1cz [ i ] = ( 0.0 - f5mrfc0rmf [ i ] ) - rtB
. nbal4q42dj [ i ] ; } for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . hbrsb20l1t
[ i_p ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . hbrsb20l1t [ i_p ] +=
rtB . afe1t2z1cz [ 6 * i + i_p ] * rtB . oi4me3vzpe [ i ] ; } } rtB .
b5vlpchhak [ 0 ] = rtB . meosjda20f + rtB . hbrsb20l1t [ 0 ] ; rtB .
b5vlpchhak [ 1 ] = rtB . iotelzl0ji + rtB . hbrsb20l1t [ 1 ] ; rtB .
b5vlpchhak [ 2 ] = rtB . clgwiuw1b4 + rtB . hbrsb20l1t [ 2 ] ; rtB .
b5vlpchhak [ 3 ] = rtP . Vkd0Vkq10Vkq20_Value_dixv2s2wrq [ 0 ] + rtB .
hbrsb20l1t [ 3 ] ; rtB . b5vlpchhak [ 4 ] = rtP .
Vkd0Vkq10Vkq20_Value_dixv2s2wrq [ 1 ] + rtB . hbrsb20l1t [ 4 ] ; rtB .
b5vlpchhak [ 5 ] = rtP . Vkd0Vkq10Vkq20_Value_dixv2s2wrq [ 2 ] + rtB .
hbrsb20l1t [ 5 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . pb5awft1cv [ i ] =
rtP . wbase_Gain_dvfhsfadsc * rtB . b5vlpchhak [ i ] ; } rtB . ksoj22xlak .
re = rtP . Gain1_Gain_ma2jvlkzmr * rtB . cca3b1x2me [ 0 ] . re ; rtB .
ksoj22xlak . im = rtP . Gain1_Gain_ma2jvlkzmr * rtB . cca3b1x2me [ 0 ] . im ;
rtB . bzv0wjof4r . re = rtP . a3_Gain_jezgxgj35h . re * rtB . cca3b1x2me [ 1
] . re - rtP . a3_Gain_jezgxgj35h . im * rtB . cca3b1x2me [ 1 ] . im ; rtB .
bzv0wjof4r . im = rtP . a3_Gain_jezgxgj35h . re * rtB . cca3b1x2me [ 1 ] . im
+ rtP . a3_Gain_jezgxgj35h . im * rtB . cca3b1x2me [ 1 ] . re ; rtB .
knoumqzrgf . re = rtB . ksoj22xlak . re - rtB . bzv0wjof4r . re ; rtB .
knoumqzrgf . im = rtB . ksoj22xlak . im - rtB . bzv0wjof4r . im ; rtB .
af4orx44k2 = rtB . knoumqzrgf . re ; rtB . gm2zbqrz0p = rtB . knoumqzrgf . im
; rtB . mxbbx0jdns [ 0 ] = rtP . uL2_pu_Gain_c3v2wolj3k * rtB . af4orx44k2 ;
rtB . mxbbx0jdns [ 1 ] = rtP . uL2_pu_Gain_c3v2wolj3k * rtB . gm2zbqrz0p ;
rtB . gnl2lvstmf [ 0 ] = rtP . Gain3_Gain_dxmzzi0v1s [ 0 ] * rtB . fo2gdsn113
[ 0 ] ; rtB . med1ex2onq [ 0 ] = rtP . R2_puL2_puX2R230_Gain_l32hr22yzu * rtB
. fo2gdsn113 [ 0 ] ; rtB . gnl2lvstmf [ 1 ] = rtP . Gain3_Gain_dxmzzi0v1s [ 1
] * rtB . fo2gdsn113 [ 1 ] ; rtB . med1ex2onq [ 1 ] = rtP .
R2_puL2_puX2R230_Gain_l32hr22yzu * rtB . fo2gdsn113 [ 1 ] ; rtB . m0rqu0dq2p
[ 0 ] = ( rtB . mxbbx0jdns [ 0 ] - rtB . med1ex2onq [ 0 ] ) + rtB .
gnl2lvstmf [ 1 ] ; rtB . m0rqu0dq2p [ 1 ] = ( rtB . mxbbx0jdns [ 1 ] - rtB .
med1ex2onq [ 1 ] ) + rtB . gnl2lvstmf [ 0 ] ; rtB . f4v14vmxcg [ 0 ] = rtP .
Gain4_Gain_aygiaplzkp * rtB . m0rqu0dq2p [ 0 ] ; rtB . f4v14vmxcg [ 1 ] = rtP
. Gain4_Gain_aygiaplzkp * rtB . m0rqu0dq2p [ 1 ] ; rtB . ij1dvl0uwa = rtP .
u_Pb_Gain_abjfl00hgc * rtB . fo2hurg0vg ; rtB . cny41eqqjx = rtP .
F1_Gain_f13cuaqdbe * rtB . jxxv1skywx ; rtB . egmozmr52a = ( rtB . ij1dvl0uwa
/ rtB . jxxv1skywx - rtB . cnp5elnaq1 ) - rtB . cny41eqqjx ; rtB . ddrjqpzajr
= rtP . u_2H_Gain_bfgz3otbwj * rtB . egmozmr52a ; rtB . helzurooqj = rtP .
web1_Gain_aqucte2piw * rtB . a2wjqrujdb ; rtB . dsplbbvihw = rtP .
web3_Gain_idhtddsq33 * rtB . jxxv1skywx ; rtB . ohcbjriqxr . re = rtP .
donotdeletethisgain_Gain_ihssgoipbr * rtB . bhnb4tmjw1 [ 58 ] . re ; rtB .
ohcbjriqxr . im = rtP . donotdeletethisgain_Gain_ihssgoipbr * rtB .
bhnb4tmjw1 [ 58 ] . im ; rtB . pxzs2yqw3o . re = rtP .
donotdeletethisgain_Gain_ctih3wssfd * rtB . bhnb4tmjw1 [ 59 ] . re ; rtB .
pxzs2yqw3o . im = rtP . donotdeletethisgain_Gain_ctih3wssfd * rtB .
bhnb4tmjw1 [ 59 ] . im ; rtB . n4izxnofvg . re = rtP . a2_Gain_bejh0zzpx5 .
re * rtB . pxzs2yqw3o . re - rtP . a2_Gain_bejh0zzpx5 . im * rtB . pxzs2yqw3o
. im ; rtB . n4izxnofvg . im = rtP . a2_Gain_bejh0zzpx5 . re * rtB .
pxzs2yqw3o . im + rtP . a2_Gain_bejh0zzpx5 . im * rtB . pxzs2yqw3o . re ; rtB
. hj0ldri1lr . re = rtB . ohcbjriqxr . re - rtB . n4izxnofvg . re ; rtB .
hj0ldri1lr . im = rtB . ohcbjriqxr . im - rtB . n4izxnofvg . im ; rtB .
lu2mpotph2 . re = rtP . a3_Gain_i425ejijaa * rtB . hj0ldri1lr . re ; rtB .
lu2mpotph2 . im = rtP . a3_Gain_i425ejijaa * rtB . hj0ldri1lr . im ; rtB .
kuhlzrvkxm = muDoubleScalarHypot ( rtB . lu2mpotph2 . re , rtB . lu2mpotph2 .
im ) ; jc0d42jx0q = muDoubleScalarAtan2 ( rtB . lu2mpotph2 . im , rtB .
lu2mpotph2 . re ) ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . pi4zq0i2yo =
rtB . kuhlzrvkxm >= rtP . Saturation1_UpperSat_iy2bpppzxt ? 1 : rtB .
kuhlzrvkxm > rtP . Saturation1_LowerSat_i0053t3rah ? 0 : - 1 ; } rtB .
knztbrbrjc = rtDW . pi4zq0i2yo == 1 ? rtP . Saturation1_UpperSat_iy2bpppzxt :
rtDW . pi4zq0i2yo == - 1 ? rtP . Saturation1_LowerSat_i0053t3rah : rtB .
kuhlzrvkxm ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . fxsfhyxo1z . re =
rtDW . n013u3cmat [ 0 ] ; rtB . fxsfhyxo1z . im = 0.0 ; } eiagzuoprf = rtB .
knztbrbrjc * muDoubleScalarCos ( jc0d42jx0q ) ; mjmwpz3hat = rtB . knztbrbrjc
* muDoubleScalarSin ( jc0d42jx0q ) ; if ( mjmwpz3hat == 0.0 ) { hvxfwg50kf =
1.0 / eiagzuoprf ; eiagzuoprf = 0.0 ; } else if ( eiagzuoprf == 0.0 ) {
hvxfwg50kf = 0.0 ; eiagzuoprf = - ( 1.0 / mjmwpz3hat ) ; } else { im_e =
muDoubleScalarAbs ( eiagzuoprf ) ; hvxfwg50kf = muDoubleScalarAbs (
mjmwpz3hat ) ; if ( im_e > hvxfwg50kf ) { im_e = mjmwpz3hat / eiagzuoprf ;
eiagzuoprf += im_e * mjmwpz3hat ; hvxfwg50kf = 1.0 / eiagzuoprf ; eiagzuoprf
= - ( im_e / eiagzuoprf ) ; } else if ( hvxfwg50kf == im_e ) { hvxfwg50kf = (
eiagzuoprf > 0.0 ? 0.5 : - 0.5 ) / im_e ; eiagzuoprf = - ( mjmwpz3hat > 0.0 ?
0.5 : - 0.5 ) / im_e ; } else { im_e = eiagzuoprf / mjmwpz3hat ; eiagzuoprf =
im_e * eiagzuoprf + mjmwpz3hat ; hvxfwg50kf = im_e / eiagzuoprf ; eiagzuoprf
= - ( 1.0 / eiagzuoprf ) ; } } rtB . myym2h5ma5 . re = hvxfwg50kf * rtB .
fxsfhyxo1z . re - eiagzuoprf * rtB . fxsfhyxo1z . im ; rtB . myym2h5ma5 . im
= hvxfwg50kf * rtB . fxsfhyxo1z . im + eiagzuoprf * rtB . fxsfhyxo1z . re ;
rtB . llzstz4tko . re = rtP . a4_Gain_fen25jckof * rtB . myym2h5ma5 . re ;
rtB . llzstz4tko . im = rtP . a4_Gain_fen25jckof * rtB . myym2h5ma5 . im ;
rtB . alj0zcmrdm = rtB . llzstz4tko . re ; rtB . ez4dfk5ai2 = - rtB .
llzstz4tko . im ; if ( ( rtDW . ni1mvxhipb >= ssGetT ( rtS ) ) && ( rtDW .
ecyaenex24 >= ssGetT ( rtS ) ) ) { rtB . l1pc03klhq = 0.0 ; } else {
hvxfwg50kf = rtDW . ni1mvxhipb ; lastU = & rtDW . mpcrxmju4o ; if ( rtDW .
ni1mvxhipb < rtDW . ecyaenex24 ) { if ( rtDW . ecyaenex24 < ssGetT ( rtS ) )
{ hvxfwg50kf = rtDW . ecyaenex24 ; lastU = & rtDW . onllvnxpvf ; } } else {
if ( rtDW . ni1mvxhipb >= ssGetT ( rtS ) ) { hvxfwg50kf = rtDW . ecyaenex24 ;
lastU = & rtDW . onllvnxpvf ; } } rtB . l1pc03klhq = ( rtB . paudgqgyvo - *
lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf ) ; } if ( ssIsMajorTimeStep ( rtS )
) { rtDW . juesmtqyxi = ( rtB . l1pc03klhq >= 0.0 ) ; } rtB . j1kszmffho =
rtDW . juesmtqyxi > 0 ? rtB . l1pc03klhq : - rtB . l1pc03klhq ; rtB .
emnn2leose = ssGetT ( rtS ) ; rtPrevAction = rtDW . gyxlvs3yne ; rtAction = -
1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . j1kszmffho > 0.675 ) && (
rtB . emnn2leose < 1.0E-6 ) ) { rtAction = 0 ; } rtDW . gyxlvs3yne = rtAction
; } else { rtAction = rtDW . gyxlvs3yne ; } if ( ( rtPrevAction != rtAction )
&& ( rtPrevAction == 0 ) ) { pnow1l4kyo ( rtS ) ; } if ( rtAction == 0 ) { if
( 0 != rtPrevAction ) { khd1002t2x ( rtS ) ; } n1lfiimiby ( rtS , rtB .
j1kszmffho , rtP . Constant_Value_l4bqxc0sjs , & rtB . dgvvn0zjel ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dgvvn0zjel . jiohbu5vfc ) ;
} } ef3bwkvl4e ( rtS , rtB . dgvvn0zjel . ga42gsoznq , rtB . dgvvn0zjel .
fvh0mv5ped , & rtB . bkh4bldsrc , & rtDW . bkh4bldsrc ) ; rtB . fkubfrvxx0 =
1.055 / ( rtB . bkh4bldsrc . o0whdfflfv - 0.2639 ) ; jc0d42jx0q = 2.0 * rtP .
Ek / 150.0 * rtB . bkh4bldsrc . o0whdfflfv / rtB . fkubfrvxx0 * ( rtP .
Constant4_Value_cx5pwu4z03 - rtB . fkubfrvxx0 / rtP .
Constant3_Value_c1uved1lw5 ) ; o1bovy5wfl = rtB . emnn2leose * jc0d42jx0q ;
rtPrevAction = rtDW . fqseq5egae ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtAction = ( int8_T ) ! ( rtB . fkubfrvxx0 > rtB . emnn2leose ) ; rtDW .
fqseq5egae = rtAction ; } else { rtAction = rtDW . fqseq5egae ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 : ltcbsbpito (
rtS , & rtB . al5ms3ycop , & rtP . al5ms3ycop ) ; break ; case 1 : j1cwalzf33
( rtS , & rtB . iwezxor5da , & rtP . iwezxor5da ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { n2esxjfgsp ( rtS ) ;
} agyrpuacxw ( rtS , o1bovy5wfl , rtP . Constant5_Value_huezfbtji2 , & rtB .
al5ms3ycop ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
al5ms3ycop . i3jfuj41qy ) ; } break ; case 1 : if ( rtAction != rtPrevAction
) { mxyuoe1l2f ( rtS ) ; } okacab3hem ( rtS , rtB . fkubfrvxx0 , rtP .
Constant6_Value_idmny2apeg , & rtB . iwezxor5da ) ; if ( ssIsMajorTimeStep (
rtS ) ) { srUpdateBC ( rtDW . iwezxor5da . ioximvoylt ) ; } break ; } if (
rtB . iwezxor5da . pnuewr4pnd > rtP . Switch1_Threshold_kf2ombnwm2 ) {
jc0d42jx0q *= rtB . iwezxor5da . j0quskwuuz ; } else { jc0d42jx0q = 0.0 ; }
if ( rtB . al5ms3ycop . hqvgkhiase > rtP . Switch_Threshold_nvvk5wxpt2 ) {
eiagzuoprf = rtB . al5ms3ycop . ivesxeoeky ; } else { eiagzuoprf = 0.0 ; }
rtB . dkozbu5uwr = eiagzuoprf + jc0d42jx0q ; if ( ( rtDW . f54via14pl >=
ssGetT ( rtS ) ) && ( rtDW . maclwnp4zs >= ssGetT ( rtS ) ) ) { rtB .
goobplfhwu = 0.0 ; } else { hvxfwg50kf = rtDW . f54via14pl ; lastU = & rtDW .
lt5qqttkex ; if ( rtDW . f54via14pl < rtDW . maclwnp4zs ) { if ( rtDW .
maclwnp4zs < ssGetT ( rtS ) ) { hvxfwg50kf = rtDW . maclwnp4zs ; lastU = &
rtDW . j4tvsqt5tv ; } } else { if ( rtDW . f54via14pl >= ssGetT ( rtS ) ) {
hvxfwg50kf = rtDW . maclwnp4zs ; lastU = & rtDW . j4tvsqt5tv ; } } rtB .
goobplfhwu = ( rtB . eqjugw2g4v - * lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf )
; } if ( ( rtDW . gphntququz >= ssGetT ( rtS ) ) && ( rtDW . p4touhmkio >=
ssGetT ( rtS ) ) ) { rtB . drxbkidavc = 0.0 ; } else { hvxfwg50kf = rtDW .
gphntququz ; lastU = & rtDW . mghx2yfyks ; if ( rtDW . gphntququz < rtDW .
p4touhmkio ) { if ( rtDW . p4touhmkio < ssGetT ( rtS ) ) { hvxfwg50kf = rtDW
. p4touhmkio ; lastU = & rtDW . ehtnpp1dr3 ; } } else { if ( rtDW .
gphntququz >= ssGetT ( rtS ) ) { hvxfwg50kf = rtDW . p4touhmkio ; lastU = &
rtDW . ehtnpp1dr3 ; } } rtB . drxbkidavc = ( rtB . hjzava2wz4 - * lastU ) / (
ssGetT ( rtS ) - hvxfwg50kf ) ; } if ( ( rtDW . a2ge1egm5c >= ssGetT ( rtS )
) && ( rtDW . hysefqvhk1 >= ssGetT ( rtS ) ) ) { rtB . gd5nltzekd = 0.0 ; }
else { hvxfwg50kf = rtDW . a2ge1egm5c ; lastU = & rtDW . b3audhzl1y ; if (
rtDW . a2ge1egm5c < rtDW . hysefqvhk1 ) { if ( rtDW . hysefqvhk1 < ssGetT (
rtS ) ) { hvxfwg50kf = rtDW . hysefqvhk1 ; lastU = & rtDW . jsj4bfphtf ; } }
else { if ( rtDW . a2ge1egm5c >= ssGetT ( rtS ) ) { hvxfwg50kf = rtDW .
hysefqvhk1 ; lastU = & rtDW . jsj4bfphtf ; } } rtB . gd5nltzekd = ( rtB .
cdoxozri4g - * lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf ) ; } if ( ( rtDW .
gfxywmnqxm >= ssGetT ( rtS ) ) && ( rtDW . pn323d2g0n >= ssGetT ( rtS ) ) ) {
rtB . jabktjzdxo = 0.0 ; } else { hvxfwg50kf = rtDW . gfxywmnqxm ; lastU = &
rtDW . b4vyngzd3r ; if ( rtDW . gfxywmnqxm < rtDW . pn323d2g0n ) { if ( rtDW
. pn323d2g0n < ssGetT ( rtS ) ) { hvxfwg50kf = rtDW . pn323d2g0n ; lastU = &
rtDW . hfhih3vmts ; } } else { if ( rtDW . gfxywmnqxm >= ssGetT ( rtS ) ) {
hvxfwg50kf = rtDW . pn323d2g0n ; lastU = & rtDW . hfhih3vmts ; } } rtB .
jabktjzdxo = ( rtB . is5fcofe05 - * lastU ) / ( ssGetT ( rtS ) - hvxfwg50kf )
; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4 ( int_T tid ) {
i3kxfqtdpbTID4 ( rtS , & rtDW . lfyyzy3mj4 ) ; i3kxfqtdpbTID4 ( rtS , & rtDW
. i3kxfqtdpbp ) ; i3kxfqtdpbTID4 ( rtS , & rtDW . jiiczdlcrb ) ; rtB .
dtk2xqandk = rtP . PSSmodel_Value + rtP . PSSmodel4_Value ; rtB . i1pdnx403m
= rtP . PSSmodel_Value + rtP . PSSmodel4_Value_fjb5jcvryv ; rtB . plpm0kvsia
= rtP . PSSmodel_Value + rtP . PSSmodel4_Value_iu4cftfbim ; rtB . nfhu0bam1o
= ( real_T ) ( rtP . Constant_Value_hnkts1ewpw == rtP .
Constant3_Value_i353yd2bw1 ) * rtP . Vfdmax_Gain ; eecdtyu2lcTID4 ( rtS , &
rtDW . eecdtyu2lcn ) ; rtB . cvxrdyzxdh = 1.0 / rtP . speedregulator_Rp * rtP
. wref_Value ; rtB . ct5nzyasox = ( real_T ) ( rtP .
Constant_Value_pmj3naht0p == rtP . Constant3_Value_gl44ovqaqa ) * rtP .
Vfdmax_Gain_mmgottnogm ; eecdtyu2lcTID4 ( rtS , & rtDW . iicqzjvjtu ) ; rtB .
blv2th2bqq = 1.0 / rtP . speedregulator_Rp_bqqacvanf5 * rtP .
wref_Value_kuqrxkgpnf ; rtB . gpg5t1grec = ( real_T ) ( rtP .
Constant_Value_ojcjd2bffn == rtP . Constant3_Value_dyzgchxzkc ) * rtP .
Vfdmax_Gain_dvpbms4hqi ; eecdtyu2lcTID4 ( rtS , & rtDW . g0suhtc3bz ) ; rtB .
jvy2gkbhkm = 1.0 / rtP . speedregulator_Rp_ljlv1thlh2 * rtP .
wref_Value_mav3u2ccum ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { real_T * lastU ; if ( rtX . c5xg25dykk == rtP .
Servomotorposition_UpperSat ) { switch ( rtDW . b55lcalndo ) { case 3 : if (
rtB . dxeqgpf4ca < 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; rtDW . b55lcalndo = 1 ; } break ; case 1 : if ( rtB . dxeqgpf4ca >= 0.0 ) {
rtDW . b55lcalndo = 3 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if (
rtB . dxeqgpf4ca < 0.0 ) { rtDW . b55lcalndo = 1 ; } else { rtDW . b55lcalndo
= 3 ; } break ; } } else if ( rtX . c5xg25dykk == rtP .
Servomotorposition_LowerSat ) { switch ( rtDW . b55lcalndo ) { case 4 : if (
rtB . dxeqgpf4ca > 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; rtDW . b55lcalndo = 2 ; } break ; case 2 : if ( rtB . dxeqgpf4ca <= 0.0 ) {
rtDW . b55lcalndo = 4 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if (
rtB . dxeqgpf4ca > 0.0 ) { rtDW . b55lcalndo = 2 ; } else { rtDW . b55lcalndo
= 4 ; } break ; } } else { rtDW . b55lcalndo = 0 ; } if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { rtDW . dclt4t2f5x [ 0U ] = rtDW . dclt4t2f5x [ 1U ] ; rtDW .
dclt4t2f5x [ 1 ] = rtB . mpzph3aoym ; } if ( rtDW . iw2uuju0gd == ( rtInf ) )
{ rtDW . iw2uuju0gd = ssGetT ( rtS ) ; lastU = & rtDW . fzszybl1g4 ; } else
if ( rtDW . gjffyzrfxn == ( rtInf ) ) { rtDW . gjffyzrfxn = ssGetT ( rtS ) ;
lastU = & rtDW . ef5rdpsrwh ; } else if ( rtDW . iw2uuju0gd < rtDW .
gjffyzrfxn ) { rtDW . iw2uuju0gd = ssGetT ( rtS ) ; lastU = & rtDW .
fzszybl1g4 ; } else { rtDW . gjffyzrfxn = ssGetT ( rtS ) ; lastU = & rtDW .
ef5rdpsrwh ; } * lastU = rtB . paudgqgyvo ; if ( rtX . j1uiwy3djt == rtP .
Servomotorposition_UpperSat_g2viti3ij0 ) { switch ( rtDW . kmuivl50cb ) {
case 3 : if ( rtB . ae431mz3p4 < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . kmuivl50cb = 1 ;
} break ; case 1 : if ( rtB . ae431mz3p4 >= 0.0 ) { rtDW . kmuivl50cb = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . ae431mz3p4 <
0.0 ) { rtDW . kmuivl50cb = 1 ; } else { rtDW . kmuivl50cb = 3 ; } break ; }
} else if ( rtX . j1uiwy3djt == rtP . Servomotorposition_LowerSat_flomn3kebp
) { switch ( rtDW . kmuivl50cb ) { case 4 : if ( rtB . ae431mz3p4 > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . kmuivl50cb = 2 ;
} break ; case 2 : if ( rtB . ae431mz3p4 <= 0.0 ) { rtDW . kmuivl50cb = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . ae431mz3p4 >
0.0 ) { rtDW . kmuivl50cb = 2 ; } else { rtDW . kmuivl50cb = 4 ; } break ; }
} else { rtDW . kmuivl50cb = 0 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
rtDW . fj3pd2kyk2 [ 0U ] = rtDW . fj3pd2kyk2 [ 1U ] ; rtDW . fj3pd2kyk2 [ 1 ]
= rtB . orwvsq0ufs ; } if ( rtDW . a21uxkuhet == ( rtInf ) ) { rtDW .
a21uxkuhet = ssGetT ( rtS ) ; lastU = & rtDW . imgwfdnxwt ; } else if ( rtDW
. pvmeybyawr == ( rtInf ) ) { rtDW . pvmeybyawr = ssGetT ( rtS ) ; lastU = &
rtDW . i415cb5tyz ; } else if ( rtDW . a21uxkuhet < rtDW . pvmeybyawr ) {
rtDW . a21uxkuhet = ssGetT ( rtS ) ; lastU = & rtDW . imgwfdnxwt ; } else {
rtDW . pvmeybyawr = ssGetT ( rtS ) ; lastU = & rtDW . i415cb5tyz ; } * lastU
= rtB . paudgqgyvo ; if ( rtX . a0k4henh31 == rtP .
Servomotorposition_UpperSat_natik5gvim ) { switch ( rtDW . orn0aag2of ) {
case 3 : if ( rtB . drum3qlc1a < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . orn0aag2of = 1 ;
} break ; case 1 : if ( rtB . drum3qlc1a >= 0.0 ) { rtDW . orn0aag2of = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . drum3qlc1a <
0.0 ) { rtDW . orn0aag2of = 1 ; } else { rtDW . orn0aag2of = 3 ; } break ; }
} else if ( rtX . a0k4henh31 == rtP . Servomotorposition_LowerSat_ira4c4d5cb
) { switch ( rtDW . orn0aag2of ) { case 4 : if ( rtB . drum3qlc1a > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . orn0aag2of = 2 ;
} break ; case 2 : if ( rtB . drum3qlc1a <= 0.0 ) { rtDW . orn0aag2of = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; default :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtB . drum3qlc1a >
0.0 ) { rtDW . orn0aag2of = 2 ; } else { rtDW . orn0aag2of = 4 ; } break ; }
} else { rtDW . orn0aag2of = 0 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
rtDW . n013u3cmat [ 0U ] = rtDW . n013u3cmat [ 1U ] ; rtDW . n013u3cmat [ 1 ]
= rtB . dkozbu5uwr ; } if ( rtDW . ni1mvxhipb == ( rtInf ) ) { rtDW .
ni1mvxhipb = ssGetT ( rtS ) ; lastU = & rtDW . mpcrxmju4o ; } else if ( rtDW
. ecyaenex24 == ( rtInf ) ) { rtDW . ecyaenex24 = ssGetT ( rtS ) ; lastU = &
rtDW . onllvnxpvf ; } else if ( rtDW . ni1mvxhipb < rtDW . ecyaenex24 ) {
rtDW . ni1mvxhipb = ssGetT ( rtS ) ; lastU = & rtDW . mpcrxmju4o ; } else {
rtDW . ecyaenex24 = ssGetT ( rtS ) ; lastU = & rtDW . onllvnxpvf ; } * lastU
= rtB . paudgqgyvo ; if ( rtDW . f54via14pl == ( rtInf ) ) { rtDW .
f54via14pl = ssGetT ( rtS ) ; lastU = & rtDW . lt5qqttkex ; } else if ( rtDW
. maclwnp4zs == ( rtInf ) ) { rtDW . maclwnp4zs = ssGetT ( rtS ) ; lastU = &
rtDW . j4tvsqt5tv ; } else if ( rtDW . f54via14pl < rtDW . maclwnp4zs ) {
rtDW . f54via14pl = ssGetT ( rtS ) ; lastU = & rtDW . lt5qqttkex ; } else {
rtDW . maclwnp4zs = ssGetT ( rtS ) ; lastU = & rtDW . j4tvsqt5tv ; } * lastU
= rtB . eqjugw2g4v ; if ( rtDW . gphntququz == ( rtInf ) ) { rtDW .
gphntququz = ssGetT ( rtS ) ; lastU = & rtDW . mghx2yfyks ; } else if ( rtDW
. p4touhmkio == ( rtInf ) ) { rtDW . p4touhmkio = ssGetT ( rtS ) ; lastU = &
rtDW . ehtnpp1dr3 ; } else if ( rtDW . gphntququz < rtDW . p4touhmkio ) {
rtDW . gphntququz = ssGetT ( rtS ) ; lastU = & rtDW . mghx2yfyks ; } else {
rtDW . p4touhmkio = ssGetT ( rtS ) ; lastU = & rtDW . ehtnpp1dr3 ; } * lastU
= rtB . hjzava2wz4 ; if ( rtDW . a2ge1egm5c == ( rtInf ) ) { rtDW .
a2ge1egm5c = ssGetT ( rtS ) ; lastU = & rtDW . b3audhzl1y ; } else if ( rtDW
. hysefqvhk1 == ( rtInf ) ) { rtDW . hysefqvhk1 = ssGetT ( rtS ) ; lastU = &
rtDW . jsj4bfphtf ; } else if ( rtDW . a2ge1egm5c < rtDW . hysefqvhk1 ) {
rtDW . a2ge1egm5c = ssGetT ( rtS ) ; lastU = & rtDW . b3audhzl1y ; } else {
rtDW . hysefqvhk1 = ssGetT ( rtS ) ; lastU = & rtDW . jsj4bfphtf ; } * lastU
= rtB . cdoxozri4g ; if ( rtDW . gfxywmnqxm == ( rtInf ) ) { rtDW .
gfxywmnqxm = ssGetT ( rtS ) ; lastU = & rtDW . b4vyngzd3r ; } else if ( rtDW
. pn323d2g0n == ( rtInf ) ) { rtDW . pn323d2g0n = ssGetT ( rtS ) ; lastU = &
rtDW . hfhih3vmts ; } else if ( rtDW . gfxywmnqxm < rtDW . pn323d2g0n ) {
rtDW . gfxywmnqxm = ssGetT ( rtS ) ; lastU = & rtDW . b4vyngzd3r ; } else {
rtDW . pn323d2g0n = ssGetT ( rtS ) ; lastU = & rtDW . hfhih3vmts ; } * lastU
= rtB . is5fcofe05 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { int32_T i
; XDot * _rtXdot ; XDis * _rtXdis ; _rtXdis = ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> fakh1pyzk2 [ i ] = rtB . pb5awft1cv
[ i ] ; } eqqqipz3sc ( & rtB . lfyyzy3mj4 , & rtDW . lfyyzy3mj4 , & _rtXdot
-> lfyyzy3mj4 ) ; _rtXdot -> pdhes0243g = rtB . helzurooqj ; _rtXdot ->
bbqpxef5jj = rtP . Constant4_Value_pjhbvkf5yy ; _rtXdot -> iac0bbig40 [ 0 ] =
rtB . f4v14vmxcg [ 0 ] ; _rtXdot -> iac0bbig40 [ 1 ] = rtB . f4v14vmxcg [ 1 ]
; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> bkgemaqqxf [ i ] = rtB .
aohv4uq5al [ i ] ; } eqqqipz3sc ( & rtB . i3kxfqtdpbp , & rtDW . i3kxfqtdpbp
, & _rtXdot -> i3kxfqtdpbp ) ; _rtXdot -> muu4p2nsxg = rtB . lv2d5e21ie ;
_rtXdot -> b2y4k4jhrs = rtP . Constant4_Value_dcdo20ugsh ; _rtXdot ->
dqrbmqffu1 [ 0 ] = rtB . nggcismtmx [ 0 ] ; _rtXdot -> dqrbmqffu1 [ 1 ] = rtB
. nggcismtmx [ 1 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot -> kciqokkdbp [ i
] = rtB . kooavxss5m [ i ] ; } eqqqipz3sc ( & rtB . jiiczdlcrb , & rtDW .
jiiczdlcrb , & _rtXdot -> jiiczdlcrb ) ; _rtXdot -> mz4c440sms = rtB .
kuj2fpnilb ; _rtXdot -> b2k3puejst = rtP . Constant4_Value_cuvq2updaf ;
_rtXdot -> arn4ygznlx = 0.0 ; _rtXdot -> arn4ygznlx += rtP . StateSpace_A *
rtX . arn4ygznlx ; _rtXdot -> arn4ygznlx += rtP . StateSpace_B * rtB .
im22a3yupz ; _rtXdot -> foapz3f1gp = 0.0 ; _rtXdot -> foapz3f1gp += rtP .
StateSpace_A_kuuagmu4tw * rtX . foapz3f1gp ; _rtXdot -> foapz3f1gp += rtP .
StateSpace_B_pvfaod0kzd * rtB . px4y4tejhs ; _rtXdot -> k1dns1lhtr = 0.0 ;
_rtXdot -> k1dns1lhtr += rtP . StateSpace_A_cnjaw2bwc4 * rtX . k1dns1lhtr ;
_rtXdot -> k1dns1lhtr += rtP . StateSpace_B_g2wsi13yu3 * rtB . lxvqpqbx1x ;
_rtXdot -> bdufyngs0z = 0.0 ; _rtXdot -> bdufyngs0z += rtP .
StateSpace_A_dmpnzdcggb * rtX . bdufyngs0z ; _rtXdot -> bdufyngs0z += rtP .
StateSpace_B_je3n4nysp1 * rtB . oabj2jzm25 ; _rtXdot -> epcfokhqja = 0.0 ;
_rtXdot -> epcfokhqja += rtP . StateSpace_A_cgwhnwi1lk * rtX . epcfokhqja ;
_rtXdot -> epcfokhqja += rtP . StateSpace_B_kf5t1qpbev * rtB . alj0zcmrdm ;
_rtXdot -> ms4psfipsu = 0.0 ; _rtXdot -> ms4psfipsu += rtP .
StateSpace_A_p115hqyqma * rtX . ms4psfipsu ; _rtXdot -> ms4psfipsu += rtP .
StateSpace_B_op3r1oivvr * rtB . ez4dfk5ai2 ; _rtXdot -> eujma4gurb = rtB .
gegm1ao0vn ; _rtXdot -> oapbefqol1 = rtB . knn1lzb4ri ; _rtXdot -> peym1sqh5w
= rtB . ddrjqpzajr ; _rtXdot -> mcp3qy3qh1 = rtB . gtqu5gckf1 ; _rtXdot ->
odbqoh1kbo = rtB . dsplbbvihw ; _rtXdot -> cdyb24riin = rtB . kxkr4kddie ;
_rtXdot -> geqsiyq0ae = 0.0 ; _rtXdot -> geqsiyq0ae += rtP .
StateSpace_A_jeq012csbm * rtX . geqsiyq0ae ; _rtXdot -> geqsiyq0ae += rtP .
StateSpace_B_dfggmx4udv * rtB . gds5lhwgp4 ; _rtXdot -> buk4mce4wc = 0.0 ;
_rtXdot -> buk4mce4wc += rtP . StateSpace_A_ggc1gj50je * rtX . buk4mce4wc ;
_rtXdot -> buk4mce4wc += rtP . StateSpace_B_fs2w14hsg3 * rtB . hk2lysmmn2 ;
_rtXdot -> gkw3v2je2c = 0.0 ; _rtXdot -> gkw3v2je2c += rtP .
StateSpace_A_o51r0ysq4r * rtX . gkw3v2je2c ; _rtXdot -> gkw3v2je2c += rtP .
StateSpace_B_jovqv4vgdw * rtB . caxxez3cbp ; _rtXdot -> bl1q553mat [ 0 ] =
rtB . pos2lxkkzh [ 0 ] ; _rtXdot -> ah4t522etq [ 0 ] = 0.0 ; _rtXdot ->
ah4t522etq [ 0 ] += rtP . LFandIFspeedsensor_A [ 0 ] * rtX . ah4t522etq [ 0 ]
; _rtXdot -> bl1q553mat [ 1 ] = rtB . pos2lxkkzh [ 1 ] ; _rtXdot ->
ah4t522etq [ 1 ] = 0.0 ; _rtXdot -> ah4t522etq [ 0 ] += rtP .
LFandIFspeedsensor_A [ 1 ] * rtX . ah4t522etq [ 1 ] ; _rtXdot -> ah4t522etq [
1 ] += rtX . ah4t522etq [ 0 ] ; _rtXdot -> ah4t522etq [ 0 ] += rtB .
ox3rpabdma ; _rtXdot -> bvtq2ilbrl = 0.0 ; _rtXdot -> bvtq2ilbrl += rtP .
BF1_A * rtX . bvtq2ilbrl ; _rtXdot -> bvtq2ilbrl += rtB . awwhoalixp ;
_rtXdot -> khgmpyjcwf = 0.0 ; _rtXdot -> khgmpyjcwf += rtP . BF7_A * rtX .
khgmpyjcwf ; _rtXdot -> khgmpyjcwf += rtB . d51au3mhb4 ; _rtXdot ->
b1sh5asqq5 = 0.0 ; _rtXdot -> b1sh5asqq5 += rtP . IF1_A * rtX . b1sh5asqq5 ;
_rtXdot -> b1sh5asqq5 += rtB . ftewt3tckc ; _rtXdot -> iyljq0p2q2 = 0.0 ;
_rtXdot -> iyljq0p2q2 += rtP . IF4_A * rtX . iyljq0p2q2 ; _rtXdot ->
iyljq0p2q2 += rtB . d0t3muozz1 ; _rtXdot -> a3ejw4k1vb [ 0 ] = 0.0 ; _rtXdot
-> a3ejw4k1vb [ 0 ] += rtP . HFspeedsensor_A [ 0 ] * rtX . a3ejw4k1vb [ 0 ] ;
_rtXdot -> a3ejw4k1vb [ 1 ] = 0.0 ; _rtXdot -> a3ejw4k1vb [ 0 ] += rtP .
HFspeedsensor_A [ 1 ] * rtX . a3ejw4k1vb [ 1 ] ; _rtXdot -> a3ejw4k1vb [ 2 ]
= 0.0 ; _rtXdot -> a3ejw4k1vb [ 0 ] += rtP . HFspeedsensor_A [ 2 ] * rtX .
a3ejw4k1vb [ 2 ] ; _rtXdot -> a3ejw4k1vb [ 1 ] += rtX . a3ejw4k1vb [ 0 ] ;
_rtXdot -> a3ejw4k1vb [ 2 ] += rtX . a3ejw4k1vb [ 1 ] ; _rtXdot -> a3ejw4k1vb
[ 0 ] += rtB . ox3rpabdma ; _rtXdot -> jkanx1c2sy = 0.0 ; _rtXdot ->
jkanx1c2sy += rtP . HF1_A * rtX . jkanx1c2sy ; _rtXdot -> jkanx1c2sy += rtB .
kbec521dmo ; _rtXdot -> eteakgjugc = 0.0 ; _rtXdot -> eteakgjugc += rtP .
HF4_A * rtX . eteakgjugc ; _rtXdot -> eteakgjugc += rtB . ao5ufmavwz ;
_rtXdot -> jjz0dmgypl [ 0 ] = 0.0 ; _rtXdot -> jjz0dmgypl [ 0 ] += rtP .
LFandIFspeedsensor_A_pin3ldearr [ 0 ] * rtX . jjz0dmgypl [ 0 ] ; _rtXdot ->
jjz0dmgypl [ 1 ] = 0.0 ; _rtXdot -> jjz0dmgypl [ 0 ] += rtP .
LFandIFspeedsensor_A_pin3ldearr [ 1 ] * rtX . jjz0dmgypl [ 1 ] ; _rtXdot ->
jjz0dmgypl [ 1 ] += rtX . jjz0dmgypl [ 0 ] ; _rtXdot -> jjz0dmgypl [ 0 ] +=
rtB . gxjenmymi3 ; _rtXdot -> pktwyfaegj = 0.0 ; _rtXdot -> pktwyfaegj += rtP
. BF1_A_delndlu34a * rtX . pktwyfaegj ; _rtXdot -> pktwyfaegj += rtB .
gglhgpul1g ; _rtXdot -> kmavtzptxb = 0.0 ; _rtXdot -> kmavtzptxb += rtP .
BF7_A_k4iveoc42w * rtX . kmavtzptxb ; _rtXdot -> kmavtzptxb += rtB .
l5n1225hlb ; _rtXdot -> mjafdcmdy1 = 0.0 ; _rtXdot -> mjafdcmdy1 += rtP .
IF1_A_f1m02udkpo * rtX . mjafdcmdy1 ; _rtXdot -> mjafdcmdy1 += rtB .
pt54e3qwnm ; _rtXdot -> dypjdbgmol = 0.0 ; _rtXdot -> dypjdbgmol += rtP .
IF4_A_iuvfdymbvl * rtX . dypjdbgmol ; _rtXdot -> dypjdbgmol += rtB .
otjvjcuhok ; _rtXdot -> fyveu4cgze [ 0 ] = 0.0 ; _rtXdot -> fyveu4cgze [ 0 ]
+= rtP . HFspeedsensor_A_a5pa30ijfz [ 0 ] * rtX . fyveu4cgze [ 0 ] ; _rtXdot
-> fyveu4cgze [ 1 ] = 0.0 ; _rtXdot -> fyveu4cgze [ 0 ] += rtP .
HFspeedsensor_A_a5pa30ijfz [ 1 ] * rtX . fyveu4cgze [ 1 ] ; _rtXdot ->
fyveu4cgze [ 2 ] = 0.0 ; _rtXdot -> fyveu4cgze [ 0 ] += rtP .
HFspeedsensor_A_a5pa30ijfz [ 2 ] * rtX . fyveu4cgze [ 2 ] ; _rtXdot ->
fyveu4cgze [ 1 ] += rtX . fyveu4cgze [ 0 ] ; _rtXdot -> fyveu4cgze [ 2 ] +=
rtX . fyveu4cgze [ 1 ] ; _rtXdot -> fyveu4cgze [ 0 ] += rtB . gxjenmymi3 ;
_rtXdot -> mvpvh5z4vn = 0.0 ; _rtXdot -> mvpvh5z4vn += rtP . HF1_A_ats4wicoyd
* rtX . mvpvh5z4vn ; _rtXdot -> mvpvh5z4vn += rtB . ev3p2tyg4u ; _rtXdot ->
e23vbkc2br = 0.0 ; _rtXdot -> e23vbkc2br += rtP . HF4_A_pzmdjli40c * rtX .
e23vbkc2br ; _rtXdot -> e23vbkc2br += rtB . dw3e1rbl0b ; _rtXdot ->
ikmxhmo1xy [ 0 ] = 0.0 ; _rtXdot -> ikmxhmo1xy [ 0 ] += rtP .
LFandIFspeedsensor_A_ltmtanpzvy [ 0 ] * rtX . ikmxhmo1xy [ 0 ] ; _rtXdot ->
ikmxhmo1xy [ 1 ] = 0.0 ; _rtXdot -> ikmxhmo1xy [ 0 ] += rtP .
LFandIFspeedsensor_A_ltmtanpzvy [ 1 ] * rtX . ikmxhmo1xy [ 1 ] ; _rtXdot ->
ikmxhmo1xy [ 1 ] += rtX . ikmxhmo1xy [ 0 ] ; _rtXdot -> ikmxhmo1xy [ 0 ] +=
rtB . a2wjqrujdb ; _rtXdot -> bifrows3ko = 0.0 ; _rtXdot -> bifrows3ko += rtP
. BF1_A_hzuipfutey * rtX . bifrows3ko ; _rtXdot -> bifrows3ko += rtB .
lkzvz2h4ht ; _rtXdot -> gurxs4gmgn = 0.0 ; _rtXdot -> gurxs4gmgn += rtP .
BF7_A_fytycfzjwj * rtX . gurxs4gmgn ; _rtXdot -> gurxs4gmgn += rtB .
cjp5nnfzr3 ; _rtXdot -> dubgfafbwh = 0.0 ; _rtXdot -> dubgfafbwh += rtP .
IF1_A_phvbzobwdk * rtX . dubgfafbwh ; _rtXdot -> dubgfafbwh += rtB .
pm2zlnstlx ; _rtXdot -> d2qv1tdugi = 0.0 ; _rtXdot -> d2qv1tdugi += rtP .
IF4_A_eeuo01iivz * rtX . d2qv1tdugi ; _rtXdot -> d2qv1tdugi += rtB .
p4rb5gwn00 ; _rtXdot -> bmd550nn1i [ 0 ] = 0.0 ; _rtXdot -> bmd550nn1i [ 0 ]
+= rtP . HFspeedsensor_A_ikmxjaf5ry [ 0 ] * rtX . bmd550nn1i [ 0 ] ; _rtXdot
-> bmd550nn1i [ 1 ] = 0.0 ; _rtXdot -> bmd550nn1i [ 0 ] += rtP .
HFspeedsensor_A_ikmxjaf5ry [ 1 ] * rtX . bmd550nn1i [ 1 ] ; _rtXdot ->
bmd550nn1i [ 2 ] = 0.0 ; _rtXdot -> bmd550nn1i [ 0 ] += rtP .
HFspeedsensor_A_ikmxjaf5ry [ 2 ] * rtX . bmd550nn1i [ 2 ] ; _rtXdot ->
bmd550nn1i [ 1 ] += rtX . bmd550nn1i [ 0 ] ; _rtXdot -> bmd550nn1i [ 2 ] +=
rtX . bmd550nn1i [ 1 ] ; _rtXdot -> bmd550nn1i [ 0 ] += rtB . a2wjqrujdb ;
_rtXdot -> ghhf5zgons = 0.0 ; _rtXdot -> ghhf5zgons += rtP . HF1_A_fo2gh2j44s
* rtX . ghhf5zgons ; _rtXdot -> ghhf5zgons += rtB . hiibpffund ; _rtXdot ->
crwxe3fyj2 = 0.0 ; _rtXdot -> crwxe3fyj2 += rtP . HF4_A_ib3yx1zjd5 * rtX .
crwxe3fyj2 ; _rtXdot -> crwxe3fyj2 += rtB . po3xeophlj ; _rtXdot ->
okhrzumzrc = 0.0 ; _rtXdot -> okhrzumzrc += rtP . StateSpace_A_bpl4qcssmc *
rtX . okhrzumzrc ; _rtXdot -> okhrzumzrc += rtP . StateSpace_B_birgtrkrqe *
rtB . ntprqe04ym ; _rtXdot -> ftkzr43zza = 0.0 ; _rtXdot -> ftkzr43zza += rtP
. StateSpace_A_msqka2ahep * rtX . ftkzr43zza ; _rtXdot -> ftkzr43zza += rtP .
StateSpace_B_klk423dskp * rtB . d2powxjwqi ; _rtXdot -> dxbfyhuf2d = 0.0 ;
_rtXdot -> dxbfyhuf2d += rtP . StateSpace_A_hmcdkdmyej * rtX . dxbfyhuf2d ;
_rtXdot -> dxbfyhuf2d += rtP . StateSpace_B_apslzpl55z * rtB . hajoh0uh41 ;
pzpykrvmdl ( rtB . iuv5orisf2 , & rtDW . mikcvz5h1f , & rtP . mikcvz5h1f , &
rtX . mikcvz5h1f , & _rtXdot -> mikcvz5h1f ) ; if ( ( rtDW . b55lcalndo != 3
) && ( rtDW . b55lcalndo != 4 ) ) { _rtXdot -> c5xg25dykk = rtB . dxeqgpf4ca
; _rtXdis -> c5xg25dykk = false ; } else { _rtXdot -> c5xg25dykk = 0.0 ; if (
( rtDW . b55lcalndo == 3 ) || ( rtDW . b55lcalndo == 4 ) ) { _rtXdis ->
c5xg25dykk = true ; } } pzpykrvmdl ( rtB . bmjkpy5r5j , & rtDW . naitari34m ,
& rtP . naitari34m , & rtX . naitari34m , & _rtXdot -> naitari34m ) ;
pzpykrvmdl ( rtB . odxzufrufe , & rtDW . c4bfgvlf1r , & rtP . c4bfgvlf1r , &
rtX . c4bfgvlf1r , & _rtXdot -> c4bfgvlf1r ) ; pzpykrvmdl ( rtB . ixrsyp5wvc
, & rtDW . cfxuytlxuwh , & rtP . cfxuytlxuwh , & rtX . cfxuytlxuwh , &
_rtXdot -> cfxuytlxuwh ) ; poqjqkgoym ( & rtB . eecdtyu2lcn , & rtDW .
eecdtyu2lcn , & _rtXdot -> eecdtyu2lcn ) ; _rtXdot -> ex5tdiigau = 0.0 ;
_rtXdot -> ex5tdiigau += rtP . StateSpace_A_dxwbmovx23 * rtX . ex5tdiigau ;
_rtXdot -> ex5tdiigau += rtP . StateSpace_B_hyavqx1h3s * rtB . jcajbc1dvp ;
_rtXdot -> hxdgb1014z = 0.0 ; _rtXdot -> hxdgb1014z += rtP .
StateSpace_A_dglmovmyfw * rtX . hxdgb1014z ; _rtXdot -> hxdgb1014z += rtP .
StateSpace_B_outw5usqe2 * rtB . eeelttb4vr ; _rtXdot -> jcmiv2o5uc = 0.0 ;
_rtXdot -> jcmiv2o5uc += rtP . StateSpace_A_kzs0ec1ban * rtX . jcmiv2o5uc ;
_rtXdot -> jcmiv2o5uc += rtP . StateSpace_B_how30ag3l4 * rtB . klmfbwlf32 ;
_rtXdot -> a1yjnjjcnf = 0.0 ; _rtXdot -> a1yjnjjcnf += rtP .
StateSpace_A_jp0njyzlup * rtX . a1yjnjjcnf ; _rtXdot -> a1yjnjjcnf += rtP .
StateSpace_B_lwav2dkmtq * rtB . klre0yyw4m ; _rtXdot -> cj1z4j4qf4 = 0.0 ;
_rtXdot -> cj1z4j4qf4 += rtP . StateSpace_A_frz34winug * rtX . cj1z4j4qf4 ;
_rtXdot -> cj1z4j4qf4 += rtP . StateSpace_B_ojnyn252w3 * rtB . jpjgpvw22t ;
pzpykrvmdl ( rtB . beuzvyiici , & rtDW . oq2a2iz1om , & rtP . oq2a2iz1om , &
rtX . oq2a2iz1om , & _rtXdot -> oq2a2iz1om ) ; if ( ( rtDW . kmuivl50cb != 3
) && ( rtDW . kmuivl50cb != 4 ) ) { _rtXdot -> j1uiwy3djt = rtB . ae431mz3p4
; _rtXdis -> j1uiwy3djt = false ; } else { _rtXdot -> j1uiwy3djt = 0.0 ; if (
( rtDW . kmuivl50cb == 3 ) || ( rtDW . kmuivl50cb == 4 ) ) { _rtXdis ->
j1uiwy3djt = true ; } } pzpykrvmdl ( rtB . af3hkqbmzi , & rtDW . n4yw4kkm3u ,
& rtP . n4yw4kkm3u , & rtX . n4yw4kkm3u , & _rtXdot -> n4yw4kkm3u ) ;
pzpykrvmdl ( rtB . ppzhxzv1nu , & rtDW . hqbkpgyaw2 , & rtP . hqbkpgyaw2 , &
rtX . hqbkpgyaw2 , & _rtXdot -> hqbkpgyaw2 ) ; pzpykrvmdl ( rtB . j0m3ntlogi
, & rtDW . kl4qbbwlk2 , & rtP . kl4qbbwlk2 , & rtX . kl4qbbwlk2 , & _rtXdot
-> kl4qbbwlk2 ) ; poqjqkgoym ( & rtB . iicqzjvjtu , & rtDW . iicqzjvjtu , &
_rtXdot -> iicqzjvjtu ) ; _rtXdot -> hvtpmx4w53 = 0.0 ; _rtXdot -> hvtpmx4w53
+= rtP . StateSpace_A_bw5ufveqx1 * rtX . hvtpmx4w53 ; _rtXdot -> hvtpmx4w53
+= rtP . StateSpace_B_astnbpdao1 * rtB . e0jycpiqck ; _rtXdot -> kdzkh5hxbg =
0.0 ; _rtXdot -> kdzkh5hxbg += rtP . StateSpace_A_dtg2q35zqx * rtX .
kdzkh5hxbg ; _rtXdot -> kdzkh5hxbg += rtP . StateSpace_B_jr1it4y00u * rtB .
gvmx2cbgqe ; _rtXdot -> bln3vroqur = 0.0 ; _rtXdot -> bln3vroqur += rtP .
StateSpace_A_mbsd5owv4o * rtX . bln3vroqur ; _rtXdot -> bln3vroqur += rtP .
StateSpace_B_jxuycgm1ze * rtB . dn4kxqtqh5 ; _rtXdot -> hdvfrnkcmn = 0.0 ;
_rtXdot -> hdvfrnkcmn += rtP . StateSpace_A_i0w0v1ng4v * rtX . hdvfrnkcmn ;
_rtXdot -> hdvfrnkcmn += rtP . StateSpace_B_ngij4ofkdf * rtB . hreourhpdt ;
_rtXdot -> p2ai4f0o54 = 0.0 ; _rtXdot -> p2ai4f0o54 += rtP .
StateSpace_A_ox53hkb1dd * rtX . p2ai4f0o54 ; _rtXdot -> p2ai4f0o54 += rtP .
StateSpace_B_pbwys2dgq0 * rtB . bs3kyjvmgv ; pzpykrvmdl ( rtB . cyrksvovlu ,
& rtDW . im3skmxke2 , & rtP . im3skmxke2 , & rtX . im3skmxke2 , & _rtXdot ->
im3skmxke2 ) ; if ( ( rtDW . orn0aag2of != 3 ) && ( rtDW . orn0aag2of != 4 )
) { _rtXdot -> a0k4henh31 = rtB . drum3qlc1a ; _rtXdis -> a0k4henh31 = false
; } else { _rtXdot -> a0k4henh31 = 0.0 ; if ( ( rtDW . orn0aag2of == 3 ) || (
rtDW . orn0aag2of == 4 ) ) { _rtXdis -> a0k4henh31 = true ; } } pzpykrvmdl (
rtB . nipseb4pdf , & rtDW . i1jub4ytlu , & rtP . i1jub4ytlu , & rtX .
i1jub4ytlu , & _rtXdot -> i1jub4ytlu ) ; pzpykrvmdl ( rtB . krdmyzrxdu , &
rtDW . l2otctcrwa , & rtP . l2otctcrwa , & rtX . l2otctcrwa , & _rtXdot ->
l2otctcrwa ) ; pzpykrvmdl ( rtB . d5khcoomh0 , & rtDW . p3atgr1lvy , & rtP .
p3atgr1lvy , & rtX . p3atgr1lvy , & _rtXdot -> p3atgr1lvy ) ; poqjqkgoym ( &
rtB . g0suhtc3bz , & rtDW . g0suhtc3bz , & _rtXdot -> g0suhtc3bz ) ; _rtXdot
-> nyms3o1twt = 0.0 ; _rtXdot -> nyms3o1twt += rtP . StateSpace_A_msojirhjk3
* rtX . nyms3o1twt ; _rtXdot -> nyms3o1twt += rtP . StateSpace_B_oc4vbszu10 *
rtB . ei5d5pufyd ; } void MdlProjection ( void ) { } void MdlZeroCrossings (
void ) { boolean_T anyStateSaturated ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; p1ntdzf2ir ( & rtB . lfyyzy3mj4 , &
rtDW . lfyyzy3mj4 , & _rtZCSV -> lfyyzy3mj4 ) ; p1ntdzf2ir ( & rtB .
i3kxfqtdpbp , & rtDW . i3kxfqtdpbp , & _rtZCSV -> i3kxfqtdpbp ) ; p1ntdzf2ir
( & rtB . jiiczdlcrb , & rtDW . jiiczdlcrb , & _rtZCSV -> jiiczdlcrb ) ;
_rtZCSV -> i21pfec4o3 [ 0 ] = rtB . dvocrbaqy2 ; _rtZCSV -> i21pfec4o3 [ 1 ]
= rtB . m02kxelm2q ; _rtZCSV -> lrrzstkpcp = muDoubleScalarMax ( rtB .
gpvkimloub [ 1 ] , rtB . gpvkimloub [ 0 ] ) - rtB . gpvkimloub [ rtDW .
o5mbsiz1a5 ] ; _rtZCSV -> fbrb2vnaam = rtB . kszsro50ue - rtP . Pref2_Value ;
_rtZCSV -> e1u5prcrvo = rtB . g3ewpazjdf - rtP . LimiteurBF_UpperSat ;
_rtZCSV -> etdw1mxhmd = rtB . g3ewpazjdf - rtP . LimiteurBF_LowerSat ;
_rtZCSV -> ft1ifqthjr = rtB . jizjehvotg - rtP . LimiteurIF_UpperSat ;
_rtZCSV -> gajmss54mf = rtB . jizjehvotg - rtP . LimiteurIF_LowerSat ;
_rtZCSV -> fordgzx11d = rtB . brlvy4qoad - rtP . LimiteurHF_UpperSat ;
_rtZCSV -> cixif3d2o2 = rtB . brlvy4qoad - rtP . LimiteurHF_LowerSat ;
_rtZCSV -> e5zwlekph0 = rtB . jw4i100wy2 - rtP . LimiteurVS_UpperSat ;
_rtZCSV -> bz4v5aczor = rtB . jw4i100wy2 - rtP . LimiteurVS_LowerSat ;
_rtZCSV -> gwnbtjcefr = rtB . oos1lluski - rtP .
LimiteurBF_UpperSat_o3x5bjfxqd ; _rtZCSV -> hflwxtttzr = rtB . oos1lluski -
rtP . LimiteurBF_LowerSat_bwtnmvfggy ; _rtZCSV -> lcvcknx11q = rtB .
j3wlzddiep - rtP . LimiteurIF_UpperSat_es2hi1s5ol ; _rtZCSV -> affr3k4yry =
rtB . j3wlzddiep - rtP . LimiteurIF_LowerSat_frurdeaktw ; _rtZCSV ->
hj54hktqfl = rtB . ch2lvqikgg - rtP . LimiteurHF_UpperSat_orzjd4jfpc ;
_rtZCSV -> frbcwzr3ia = rtB . ch2lvqikgg - rtP .
LimiteurHF_LowerSat_pd50slxu4g ; _rtZCSV -> ecgssxuzge = rtB . djgfwwesd5 -
rtP . LimiteurVS_UpperSat_boied3g5cs ; _rtZCSV -> dll2lwl2ru = rtB .
djgfwwesd5 - rtP . LimiteurVS_LowerSat_jaabg1r2wp ; _rtZCSV -> pd1r43uxfi =
rtB . azmw04sxgp - rtP . LimiteurBF_UpperSat_drtpw0igsw ; _rtZCSV ->
f3dsmoravb = rtB . azmw04sxgp - rtP . LimiteurBF_LowerSat_jfgwt1rrfd ;
_rtZCSV -> he1kmicjzz = rtB . h1ucpjd222 - rtP .
LimiteurIF_UpperSat_omde2wyowl ; _rtZCSV -> a4x3goqsed = rtB . h1ucpjd222 -
rtP . LimiteurIF_LowerSat_akpawp2za0 ; _rtZCSV -> mb4kpxq35f = rtB .
hxjga2tl2n - rtP . LimiteurHF_UpperSat_ox4qdslkjt ; _rtZCSV -> azumznwdh0 =
rtB . hxjga2tl2n - rtP . LimiteurHF_LowerSat_pfuuttiq4e ; _rtZCSV ->
p3f5rk03vl = rtB . lfg4zmyhtf - rtP . LimiteurVS_UpperSat_no510emuaw ;
_rtZCSV -> hjpb2sf2bf = rtB . lfg4zmyhtf - rtP .
LimiteurVS_LowerSat_lwvbmeuwma ; _rtZCSV -> h1b3wqn45g = rtB . lcbnmolo2u -
rtP . Constant1_Value_a0tp1s1pqn ; _rtZCSV -> facrdie2vn = rtB . lcbnmolo2u -
rtB . jehce1r3io ; if ( ( rtDW . b55lcalndo == 1 ) && ( rtX . c5xg25dykk >=
rtP . Servomotorposition_UpperSat ) ) { _rtZCSV -> lonxgkwdle = 0.0 ; } else
{ _rtZCSV -> lonxgkwdle = rtX . c5xg25dykk - rtP .
Servomotorposition_UpperSat ; } if ( ( rtDW . b55lcalndo == 2 ) && ( rtX .
c5xg25dykk <= rtP . Servomotorposition_LowerSat ) ) { _rtZCSV -> cpg5o0hzrt =
0.0 ; } else { _rtZCSV -> cpg5o0hzrt = rtX . c5xg25dykk - rtP .
Servomotorposition_LowerSat ; } anyStateSaturated = false ; if ( ( rtDW .
b55lcalndo == 3 ) || ( rtDW . b55lcalndo == 4 ) ) { anyStateSaturated = true
; } if ( anyStateSaturated ) { _rtZCSV -> bjtvf0gyhj = rtB . dxeqgpf4ca ; }
else { _rtZCSV -> bjtvf0gyhj = 0.0 ; } _rtZCSV -> ffgbf51505 = rtB .
iqeqbfs4bg - ( - rtP . speedregulator_Dz ) ; _rtZCSV -> mmqtgfxo03 = rtB .
iqeqbfs4bg - rtP . speedregulator_Dz ; _rtZCSV -> b0fbvjb1rl = rtB .
fa4hshbbor - rtP . Servomotorspeedlimits_UpperSat ; _rtZCSV -> mf1uglgwpf =
rtB . fa4hshbbor - rtP . Servomotorspeedlimits_LowerSat ; _rtZCSV ->
gk34guvsir = rtB . l5h5eacovm - rtP . Saturation1_UpperSat ; _rtZCSV ->
oml2wnhyom = rtB . l5h5eacovm - rtP . Saturation1_LowerSat ; _rtZCSV ->
kbkjog4hxx = rtB . dxhfkiexxx ; _rtZCSV -> h2ygpwjo55 = 0.0 ; if ( ( rtB .
kyqespgapw > 0.675 ) && ( rtB . f2e4fmh5rw < 1.0E-6 ) ) { _rtZCSV ->
h2ygpwjo55 = 1.0 ; } _rtZCSV -> iefkvnz2ot = 0.0 ; if ( rtB . gfrlb0etij >
rtB . f2e4fmh5rw ) { _rtZCSV -> iefkvnz2ot = 1.0 ; } _rtZCSV -> ib1ug0dvfv =
rtB . lpyy3fuvcg - rtP . Constant1_Value_bwnptvelyn ; _rtZCSV -> ckit25xm4d =
rtB . lpyy3fuvcg - rtB . nx0pljyxhc ; if ( ( rtDW . kmuivl50cb == 1 ) && (
rtX . j1uiwy3djt >= rtP . Servomotorposition_UpperSat_g2viti3ij0 ) ) {
_rtZCSV -> ikcibmpbjc = 0.0 ; } else { _rtZCSV -> ikcibmpbjc = rtX .
j1uiwy3djt - rtP . Servomotorposition_UpperSat_g2viti3ij0 ; } if ( ( rtDW .
kmuivl50cb == 2 ) && ( rtX . j1uiwy3djt <= rtP .
Servomotorposition_LowerSat_flomn3kebp ) ) { _rtZCSV -> dnayit4e52 = 0.0 ; }
else { _rtZCSV -> dnayit4e52 = rtX . j1uiwy3djt - rtP .
Servomotorposition_LowerSat_flomn3kebp ; } anyStateSaturated = false ; if ( (
rtDW . kmuivl50cb == 3 ) || ( rtDW . kmuivl50cb == 4 ) ) { anyStateSaturated
= true ; } if ( anyStateSaturated ) { _rtZCSV -> m5gurd0xjf = rtB .
ae431mz3p4 ; } else { _rtZCSV -> m5gurd0xjf = 0.0 ; } _rtZCSV -> pvrf1wuep5 =
rtB . er3cba3bay - ( - rtP . speedregulator_Dz_mfgpmqgzg2 ) ; _rtZCSV ->
hl0qvnjmle = rtB . er3cba3bay - rtP . speedregulator_Dz_mfgpmqgzg2 ; _rtZCSV
-> abxtcout01 = rtB . j0pfo1rvmu - rtP .
Servomotorspeedlimits_UpperSat_hxtjahgvcj ; _rtZCSV -> b4mnwywlpp = rtB .
j0pfo1rvmu - rtP . Servomotorspeedlimits_LowerSat_pqcubg4tor ; _rtZCSV ->
czdvx3fdti = rtB . e41naz4kca - rtP . Saturation1_UpperSat_nk2y2hmxxu ;
_rtZCSV -> pazi22qgvl = rtB . e41naz4kca - rtP .
Saturation1_LowerSat_hvszs1cibi ; _rtZCSV -> ky3hxbhjli = rtB . armyl1suvu ;
_rtZCSV -> hzjis4ixtb = 0.0 ; if ( ( rtB . pf3lkjovxq > 0.675 ) && ( rtB .
g5w2fnp4gp < 1.0E-6 ) ) { _rtZCSV -> hzjis4ixtb = 1.0 ; } _rtZCSV ->
of4ymib5lm = 0.0 ; if ( rtB . melb0fec15 > rtB . g5w2fnp4gp ) { _rtZCSV ->
of4ymib5lm = 1.0 ; } _rtZCSV -> ncqoskgzlg = rtB . pk5vxax5dp - rtP .
Constant1_Value_pgowlwbezc ; _rtZCSV -> gdml4vbpnl = rtB . pk5vxax5dp - rtB .
hcsfiaiyml ; if ( ( rtDW . orn0aag2of == 1 ) && ( rtX . a0k4henh31 >= rtP .
Servomotorposition_UpperSat_natik5gvim ) ) { _rtZCSV -> fv1sgp1paj = 0.0 ; }
else { _rtZCSV -> fv1sgp1paj = rtX . a0k4henh31 - rtP .
Servomotorposition_UpperSat_natik5gvim ; } if ( ( rtDW . orn0aag2of == 2 ) &&
( rtX . a0k4henh31 <= rtP . Servomotorposition_LowerSat_ira4c4d5cb ) ) {
_rtZCSV -> lhfxuzxp01 = 0.0 ; } else { _rtZCSV -> lhfxuzxp01 = rtX .
a0k4henh31 - rtP . Servomotorposition_LowerSat_ira4c4d5cb ; }
anyStateSaturated = false ; if ( ( rtDW . orn0aag2of == 3 ) || ( rtDW .
orn0aag2of == 4 ) ) { anyStateSaturated = true ; } if ( anyStateSaturated ) {
_rtZCSV -> jvana3hk2j = rtB . drum3qlc1a ; } else { _rtZCSV -> jvana3hk2j =
0.0 ; } _rtZCSV -> ihv3zgvmg1 = rtB . hhi1nnec5l - ( - rtP .
speedregulator_Dz_fjbn4iiabn ) ; _rtZCSV -> bc4yjmq3dw = rtB . hhi1nnec5l -
rtP . speedregulator_Dz_fjbn4iiabn ; _rtZCSV -> ebtnz5lmbd = rtB . es4v2hh0nq
- rtP . Servomotorspeedlimits_UpperSat_llv5tjky0e ; _rtZCSV -> dbziltptva =
rtB . es4v2hh0nq - rtP . Servomotorspeedlimits_LowerSat_epl2fm4hc2 ; _rtZCSV
-> cumlgtrfjm = rtB . kuhlzrvkxm - rtP . Saturation1_UpperSat_iy2bpppzxt ;
_rtZCSV -> dcqgzi14gw = rtB . kuhlzrvkxm - rtP .
Saturation1_LowerSat_i0053t3rah ; _rtZCSV -> ebv3t1jbdv = rtB . l1pc03klhq ;
_rtZCSV -> ewvy0zvwte = 0.0 ; if ( ( rtB . j1kszmffho > 0.675 ) && ( rtB .
emnn2leose < 1.0E-6 ) ) { _rtZCSV -> ewvy0zvwte = 1.0 ; } _rtZCSV ->
lixfgj3vy5 = 0.0 ; if ( rtB . fkubfrvxx0 > rtB . emnn2leose ) { _rtZCSV ->
lixfgj3vy5 = 1.0 ; } _rtZCSV -> iaftdynbux = rtB . goobplfhwu - rtP .
HitCrossing_Offset ; _rtZCSV -> k3npp1pfjf = rtB . drxbkidavc - rtP .
HitCrossing_Offset_ob1hdw3rea ; _rtZCSV -> ht2yoxxeic = rtB . gd5nltzekd -
rtP . HitCrossing_Offset_ptpe5pr1gg ; _rtZCSV -> bmwcygbqo5 = rtB .
jabktjzdxo - rtP . HitCrossing_Offset_exte2lr0fo ; } void MdlTerminate ( void
) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnTerminate ( rts ) ;
} if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 173 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 1705 ) ; ssSetNumBlockIO ( rtS , 972 ) ;
ssSetNumBlockParams ( rtS , 5079 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.001 ) ; ssSetSampleTime ( rtS , 3 ,
0.016666666666666666 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime
( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS
, 3 , 0.0 ) ; } void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 ,
3939545913U ) ; ssSetChecksumVal ( rtS , 1 , 1612515906U ) ; ssSetChecksumVal
( rtS , 2 , 2173415364U ) ; ssSetChecksumVal ( rtS , 3 , 221052395U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 17 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
a1_IEEE9_Ctest_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "a1_IEEE9_Ctest" ) ;
ssSetPath ( rtS , "a1_IEEE9_Ctest" ) ; ssSetTStart ( rtS , - 1.0 ) ;
ssSetTFinal ( rtS , 20.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 6 , 1
, 1 , 2 , 6 , 1 , 1 , 2 , 6 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 3
, 1 , 1 , 2 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 6 , 1 , 1 , 2 , 6 , 1
, 1 , 2 , 6 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 2 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 2 , 1
, 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 2 , 2 , 2 } ; static boolean_T rt_LoggedStateIsVarDims [ ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/phi/Integrator"
,
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Mechanical model/Integrator2"
,
"a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Electrical model/Integrator"
,
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Electrical model/Vd1 Vq1, I2/Vdq2->Idq2/Integrator"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/phi/Integrator"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Mechanical model/Integrator2"
,
"a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Electrical model/Integrator"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Electrical model/Vd1 Vq1, I2/Vdq2->Idq2/Integrator"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/phi/Integrator"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Mechanical model/Integrator2"
,
"a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Electrical model/Integrator"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Electrical model/Vd1 Vq1, I2/Vdq2->Idq2/Integrator"
, "a1_IEEE9_Ctest/G1/Wind Farm/Break \nAlg. Loop 1/real/State Space" ,
"a1_IEEE9_Ctest/G1/Wind Farm/Break \nAlg. Loop 1/imag/State Space" ,
"a1_IEEE9_Ctest/G2/Wind Farm/Break \nAlg. Loop 1/real/State Space" ,
"a1_IEEE9_Ctest/G2/Wind Farm/Break \nAlg. Loop 1/imag/State Space" ,
"a1_IEEE9_Ctest/G3/Wind Farm/Break \nAlg. Loop 1/real/State Space" ,
"a1_IEEE9_Ctest/G3/Wind Farm/Break \nAlg. Loop 1/imag/State Space" ,
"a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Mechanical model/Integrator"
,
"a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Mechanical model/Integrator"
,
"a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Mechanical model/Integrator"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Mechanical model/Integrator1"
,
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Mechanical model/Integrator1"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Mechanical model/Integrator1"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/EXCITATION1/Model/Exciter\n1| (te.s+ke)/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/EXCITATION1/Model/Exciter\n1| (te.s+ke)/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/EXCITATION1/Model/Exciter\n1| (te.s+ke)/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/LF and IF speed sensor"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF1"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF1"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF4"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF speed sensor"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF1"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF4"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/LF and IF speed sensor"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF1"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF1"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF4"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF speed sensor"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF1"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF4"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/LF and IF speed sensor"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF1"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/BF7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF1"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/IF4"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF speed sensor"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF1"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/Multi-Band\nPower System Stabilizer/Model/HF4"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/EXCITATION1/Model/Low Pass Filter\n1 | (tr.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/EXCITATION1/Model/Lead Lag Compensator\n(tc.s+1) | (tb.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/EXCITATION1/Model/Main Regulator\nka | (ta.s +1)/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Servo-motor\nposition"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Speed Relay/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/EXCITATION1/Model/Damping\nkfd.s | (tfd.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/EXCITATION1/Model/Low Pass Filter\n1 | (tr.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/EXCITATION1/Model/Lead Lag Compensator\n(tc.s+1) | (tb.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/EXCITATION1/Model/Main Regulator\nka | (ta.s +1)/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Servo-motor\nposition"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Speed Relay/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/EXCITATION1/Model/Damping\nkfd.s | (tfd.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/EXCITATION1/Model/Low Pass Filter\n1 | (tr.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/EXCITATION1/Model/Lead Lag Compensator\n(tc.s+1) | (tb.s+1)/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/EXCITATION1/Model/Main Regulator\nka | (ta.s +1)/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Servo-motor\nposition"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/speed\nregulator/Speed Relay/State Space"
,
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmd_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G3/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmq_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage4 /Stage4/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage3/Stage3/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage2 /Stage2/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage1/Stage1/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G3/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmd_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G2/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmq_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage4 /Stage4/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage3/Stage3/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage2 /Stage2/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage1/Stage1/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G2/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmd_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G1/Synchronous Machine\npu Standard/Electrical model/Synchronous Machine\nContinuous Model/Saturation/Lmq_sat/Time Constant/Integrator"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage4 /Stage4/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage3/Stage3/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage2 /Stage2/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/steam\nturbine/Stage1/Stage1/Transfer Fcn\n(with initial outputs)3/State Space"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/4 masses/Mass5/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/3 masses/Mass4/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass2/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator7"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/2 masses/Mass3/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator6"
,
 "a1_IEEE9_Ctest/G1/M1: Turbine & Regulators/STG1/Model/4 mass shaft/1 mass/Mass2/Integrator7"
, "a1_IEEE9_Ctest/G1/Wind Farm/Subsystem1/Delay" ,
"a1_IEEE9_Ctest/G2/Wind Farm/Subsystem2/Delay" ,
"a1_IEEE9_Ctest/G3/Wind Farm/Subsystem2/Delay" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 149 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 149 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . fakh1pyzk2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . pdhes0243g ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . bbqpxef5jj ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . iac0bbig40 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . bkgemaqqxf [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . muu4p2nsxg ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . b2y4k4jhrs ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . dqrbmqffu1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . kciqokkdbp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . mz4c440sms ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . b2k3puejst ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . bl1q553mat [ 0 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . arn4ygznlx ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . foapz3f1gp ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . k1dns1lhtr ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . bdufyngs0z ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . epcfokhqja ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . ms4psfipsu ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . eujma4gurb ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . oapbefqol1 ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . peym1sqh5w ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . mcp3qy3qh1 ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . odbqoh1kbo ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . cdyb24riin ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . geqsiyq0ae ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . buk4mce4wc ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . gkw3v2je2c ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . ah4t522etq [ 0 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . bvtq2ilbrl ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . khgmpyjcwf ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . b1sh5asqq5 ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . iyljq0p2q2 ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . a3ejw4k1vb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . jkanx1c2sy ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . eteakgjugc ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . jjz0dmgypl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . pktwyfaegj ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . kmavtzptxb ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . mjafdcmdy1 ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . dypjdbgmol ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . fyveu4cgze [ 0 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . mvpvh5z4vn ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . e23vbkc2br ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . ikmxhmo1xy [ 0 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . bifrows3ko ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . gurxs4gmgn ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . dubgfafbwh ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . d2qv1tdugi ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . bmd550nn1i [ 0 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . ghhf5zgons ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . crwxe3fyj2 ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . okhrzumzrc ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . ftkzr43zza ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . dxbfyhuf2d ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . c5xg25dykk ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . ex5tdiigau ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . hxdgb1014z ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . jcmiv2o5uc ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . a1yjnjjcnf ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . cj1z4j4qf4 ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . j1uiwy3djt ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . hvtpmx4w53 ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . kdzkh5hxbg ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . bln3vroqur ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . hdvfrnkcmn ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . p2ai4f0o54 ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . a0k4henh31 ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . nyms3o1twt ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . lfyyzy3mj4 . ari1ul3qn4
; rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . lfyyzy3mj4 .
dpsrgueukm ; rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . im3skmxke2
. jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX .
i1jub4ytlu . jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX
. l2otctcrwa . jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) &
rtX . p3atgr1lvy . jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 74 ] = ( void * )
& rtX . g0suhtc3bz . icujgegwsf ; rt_LoggedStateSignalPtrs [ 75 ] = ( void *
) & rtX . g0suhtc3bz . el4ptyscen ; rt_LoggedStateSignalPtrs [ 76 ] = ( void
* ) & rtX . g0suhtc3bz . nl2gcqurai ; rt_LoggedStateSignalPtrs [ 77 ] = (
void * ) & rtX . g0suhtc3bz . pc2ewfzt4m ; rt_LoggedStateSignalPtrs [ 78 ] =
( void * ) & rtX . g0suhtc3bz . bfgaz0ga22 ; rt_LoggedStateSignalPtrs [ 79 ]
= ( void * ) & rtX . g0suhtc3bz . klbf1yfrli ; rt_LoggedStateSignalPtrs [ 80
] = ( void * ) & rtX . g0suhtc3bz . ju1kk0ptw1 ; rt_LoggedStateSignalPtrs [
81 ] = ( void * ) & rtX . g0suhtc3bz . bc2kt5sqju ; rt_LoggedStateSignalPtrs
[ 82 ] = ( void * ) & rtX . g0suhtc3bz . n1htvwbcs1 ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . g0suhtc3bz . dk1vg2mwy1
; rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtX . g0suhtc3bz .
ih1bruvbpf ; rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtX . g0suhtc3bz
. bmh0ev1dod ; rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtX .
g0suhtc3bz . hpmhcmxij1 ; rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtX
. g0suhtc3bz . melb5kp2wk ; rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) &
rtX . g0suhtc3bz . j2yrynoejz ; rt_LoggedStateSignalPtrs [ 89 ] = ( void * )
& rtX . g0suhtc3bz . eo1ws4pu4d ; rt_LoggedStateSignalPtrs [ 90 ] = ( void *
) & rtX . g0suhtc3bz . adcbm1v10t ; rt_LoggedStateSignalPtrs [ 91 ] = ( void
* ) & rtX . g0suhtc3bz . d2q1a1b41i ; rt_LoggedStateSignalPtrs [ 92 ] = (
void * ) & rtX . g0suhtc3bz . gdbj40qzwu ; rt_LoggedStateSignalPtrs [ 93 ] =
( void * ) & rtX . g0suhtc3bz . psupels3kb ; rt_LoggedStateSignalPtrs [ 94 ]
= ( void * ) & rtX . jiiczdlcrb . ari1ul3qn4 ; rt_LoggedStateSignalPtrs [ 95
] = ( void * ) & rtX . jiiczdlcrb . dpsrgueukm ; rt_LoggedStateSignalPtrs [
96 ] = ( void * ) & rtX . oq2a2iz1om . jxsbt0ssfc ; rt_LoggedStateSignalPtrs
[ 97 ] = ( void * ) & rtX . n4yw4kkm3u . jxsbt0ssfc ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtX . hqbkpgyaw2 . jxsbt0ssfc
; rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtX . kl4qbbwlk2 .
jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtX . iicqzjvjtu
. icujgegwsf ; rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtX .
iicqzjvjtu . el4ptyscen ; rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtX
. iicqzjvjtu . nl2gcqurai ; rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) &
rtX . iicqzjvjtu . pc2ewfzt4m ; rt_LoggedStateSignalPtrs [ 104 ] = ( void * )
& rtX . iicqzjvjtu . bfgaz0ga22 ; rt_LoggedStateSignalPtrs [ 105 ] = ( void *
) & rtX . iicqzjvjtu . klbf1yfrli ; rt_LoggedStateSignalPtrs [ 106 ] = ( void
* ) & rtX . iicqzjvjtu . ju1kk0ptw1 ; rt_LoggedStateSignalPtrs [ 107 ] = (
void * ) & rtX . iicqzjvjtu . bc2kt5sqju ; rt_LoggedStateSignalPtrs [ 108 ] =
( void * ) & rtX . iicqzjvjtu . n1htvwbcs1 ; rt_LoggedStateSignalPtrs [ 109 ]
= ( void * ) & rtX . iicqzjvjtu . dk1vg2mwy1 ; rt_LoggedStateSignalPtrs [ 110
] = ( void * ) & rtX . iicqzjvjtu . ih1bruvbpf ; rt_LoggedStateSignalPtrs [
111 ] = ( void * ) & rtX . iicqzjvjtu . bmh0ev1dod ; rt_LoggedStateSignalPtrs
[ 112 ] = ( void * ) & rtX . iicqzjvjtu . hpmhcmxij1 ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtX . iicqzjvjtu . melb5kp2wk
; rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtX . iicqzjvjtu .
j2yrynoejz ; rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtX . iicqzjvjtu
. eo1ws4pu4d ; rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtX .
iicqzjvjtu . adcbm1v10t ; rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtX
. iicqzjvjtu . d2q1a1b41i ; rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) &
rtX . iicqzjvjtu . gdbj40qzwu ; rt_LoggedStateSignalPtrs [ 119 ] = ( void * )
& rtX . iicqzjvjtu . psupels3kb ; rt_LoggedStateSignalPtrs [ 120 ] = ( void *
) & rtX . i3kxfqtdpbp . ari1ul3qn4 ; rt_LoggedStateSignalPtrs [ 121 ] = (
void * ) & rtX . i3kxfqtdpbp . dpsrgueukm ; rt_LoggedStateSignalPtrs [ 122 ]
= ( void * ) & rtX . mikcvz5h1f . jxsbt0ssfc ; rt_LoggedStateSignalPtrs [ 123
] = ( void * ) & rtX . naitari34m . jxsbt0ssfc ; rt_LoggedStateSignalPtrs [
124 ] = ( void * ) & rtX . c4bfgvlf1r . jxsbt0ssfc ; rt_LoggedStateSignalPtrs
[ 125 ] = ( void * ) & rtX . cfxuytlxuwh . jxsbt0ssfc ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtX . eecdtyu2lcn .
icujgegwsf ; rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtX .
eecdtyu2lcn . el4ptyscen ; rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) &
rtX . eecdtyu2lcn . nl2gcqurai ; rt_LoggedStateSignalPtrs [ 129 ] = ( void *
) & rtX . eecdtyu2lcn . pc2ewfzt4m ; rt_LoggedStateSignalPtrs [ 130 ] = (
void * ) & rtX . eecdtyu2lcn . bfgaz0ga22 ; rt_LoggedStateSignalPtrs [ 131 ]
= ( void * ) & rtX . eecdtyu2lcn . klbf1yfrli ; rt_LoggedStateSignalPtrs [
132 ] = ( void * ) & rtX . eecdtyu2lcn . ju1kk0ptw1 ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) & rtX . eecdtyu2lcn .
bc2kt5sqju ; rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) & rtX .
eecdtyu2lcn . n1htvwbcs1 ; rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) &
rtX . eecdtyu2lcn . dk1vg2mwy1 ; rt_LoggedStateSignalPtrs [ 136 ] = ( void *
) & rtX . eecdtyu2lcn . ih1bruvbpf ; rt_LoggedStateSignalPtrs [ 137 ] = (
void * ) & rtX . eecdtyu2lcn . bmh0ev1dod ; rt_LoggedStateSignalPtrs [ 138 ]
= ( void * ) & rtX . eecdtyu2lcn . hpmhcmxij1 ; rt_LoggedStateSignalPtrs [
139 ] = ( void * ) & rtX . eecdtyu2lcn . melb5kp2wk ;
rt_LoggedStateSignalPtrs [ 140 ] = ( void * ) & rtX . eecdtyu2lcn .
j2yrynoejz ; rt_LoggedStateSignalPtrs [ 141 ] = ( void * ) & rtX .
eecdtyu2lcn . eo1ws4pu4d ; rt_LoggedStateSignalPtrs [ 142 ] = ( void * ) &
rtX . eecdtyu2lcn . adcbm1v10t ; rt_LoggedStateSignalPtrs [ 143 ] = ( void *
) & rtX . eecdtyu2lcn . d2q1a1b41i ; rt_LoggedStateSignalPtrs [ 144 ] = (
void * ) & rtX . eecdtyu2lcn . gdbj40qzwu ; rt_LoggedStateSignalPtrs [ 145 ]
= ( void * ) & rtX . eecdtyu2lcn . psupels3kb ; rt_LoggedStateSignalPtrs [
146 ] = ( void * ) rtDW . dclt4t2f5x ; rt_LoggedStateSignalPtrs [ 147 ] = (
void * ) rtDW . fj3pd2kyk2 ; rt_LoggedStateSignalPtrs [ 148 ] = ( void * )
rtDW . n013u3cmat ; } rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ;
rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ;
rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 2 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 1000 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo (
rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 173 ] ; static
real_T absTol [ 173 ] = { 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T absTolControl [
173 ] = { 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U ,
2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U
, 2U , 2U , 2U , 2U } ; static uint8_T zcAttributes [ 86 ] = { ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) ,
( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 12 ] =
{ { 1 * sizeof ( creal_T ) , ( char * ) ( & rtB . fxsfhyxo1z ) , ( NULL ) } ,
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . n11oasytsa ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . kbvso2g4l5 ) , ( NULL ) } , { 1
* sizeof ( real_T ) , ( char * ) ( & rtB . gfdiegy000 ) , ( NULL ) } , { 1 *
sizeof ( creal_T ) , ( char * ) ( & rtB . knebdwpoyp ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . o0qn3ari12 ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . o4qu1kuoq3 ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . lzgytxcuj4 ) , ( NULL ) } , { 1 *
sizeof ( creal_T ) , ( char * ) ( & rtB . ijwur2kcqz ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . okndhfgjx3 ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . olymqvziwx ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . bfq0k22t2r ) , ( NULL ) } } ;
ssSetSolverRelTol ( rtS , 0.0001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.001 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 12 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23tb" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 86 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 86 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3939545913U ) ; ssSetChecksumVal ( rtS , 1 ,
1612515906U ) ; ssSetChecksumVal ( rtS , 2 , 2173415364U ) ; ssSetChecksumVal
( rtS , 3 , 221052395U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 79 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . pu5sgumjsdm . cti4j40whk ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW
. brervxhrpps . kr10x0g2eh ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW .
p5n4z0qa43g . agocbzgv3b ; systemRan [ 4 ] = ( sysRanDType * ) & rtDW .
n12bdjrzo2e . ouauph2cdg ; systemRan [ 5 ] = ( sysRanDType * ) & rtDW .
nwwecupcxr3 . mjauax0g2q ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW .
eaz24jybtas . kyf3z0bmdo ; systemRan [ 7 ] = & rtAlwaysEnabled ; systemRan [
8 ] = ( sysRanDType * ) & rtDW . eecdtyu2lcn . aowgz4u5ao ; systemRan [ 9 ] =
( sysRanDType * ) & rtDW . eecdtyu2lcn . muk3ngphda ; systemRan [ 10 ] = (
sysRanDType * ) & rtDW . eecdtyu2lcn . p0qoxump3h ; systemRan [ 11 ] = (
sysRanDType * ) & rtDW . eecdtyu2lcn . hj211nghnp ; systemRan [ 12 ] = (
sysRanDType * ) & rtDW . eecdtyu2lcn . mnbpbp4fph ; systemRan [ 13 ] = (
sysRanDType * ) & rtDW . cfxuytlxuwh . pjsxu0fvzv ; systemRan [ 14 ] = (
sysRanDType * ) & rtDW . c4bfgvlf1r . pjsxu0fvzv ; systemRan [ 15 ] = (
sysRanDType * ) & rtDW . naitari34m . pjsxu0fvzv ; systemRan [ 16 ] = (
sysRanDType * ) & rtDW . mikcvz5h1f . pjsxu0fvzv ; systemRan [ 17 ] = (
sysRanDType * ) & rtDW . i3kxfqtdpbp . darzzav0jw ; systemRan [ 18 ] = (
sysRanDType * ) & rtDW . i3kxfqtdpbp . ilxp0cy4vk ; systemRan [ 19 ] = (
sysRanDType * ) & rtDW . i3kxfqtdpbp . ilxp0cy4vk ; systemRan [ 20 ] = (
sysRanDType * ) & rtDW . i3kxfqtdpbp . darzzav0jw ; systemRan [ 21 ] = &
rtAlwaysEnabled ; systemRan [ 22 ] = ( sysRanDType * ) & rtDW . ef3bwkvl4et .
hsbxtekslw ; systemRan [ 23 ] = ( sysRanDType * ) & rtDW . n1lfiimibyh .
jiohbu5vfc ; systemRan [ 24 ] = ( sysRanDType * ) & rtDW . agyrpuacxw3 .
i3jfuj41qy ; systemRan [ 25 ] = ( sysRanDType * ) & rtDW . okacab3hemp .
ioximvoylt ; systemRan [ 26 ] = ( sysRanDType * ) & rtDW . fxig4dac3b .
cti4j40whk ; systemRan [ 27 ] = ( sysRanDType * ) & rtDW . osligu4cvh .
kr10x0g2eh ; systemRan [ 28 ] = ( sysRanDType * ) & rtDW . ako1qu1fpl .
agocbzgv3b ; systemRan [ 29 ] = ( sysRanDType * ) & rtDW . hkobjilnmt .
ouauph2cdg ; systemRan [ 30 ] = ( sysRanDType * ) & rtDW . b3kk3xvbzl .
mjauax0g2q ; systemRan [ 31 ] = ( sysRanDType * ) & rtDW . cmxdysxk15 .
kyf3z0bmdo ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = (
sysRanDType * ) & rtDW . iicqzjvjtu . aowgz4u5ao ; systemRan [ 34 ] = (
sysRanDType * ) & rtDW . iicqzjvjtu . muk3ngphda ; systemRan [ 35 ] = (
sysRanDType * ) & rtDW . iicqzjvjtu . p0qoxump3h ; systemRan [ 36 ] = (
sysRanDType * ) & rtDW . iicqzjvjtu . hj211nghnp ; systemRan [ 37 ] = (
sysRanDType * ) & rtDW . iicqzjvjtu . mnbpbp4fph ; systemRan [ 38 ] = (
sysRanDType * ) & rtDW . kl4qbbwlk2 . pjsxu0fvzv ; systemRan [ 39 ] = (
sysRanDType * ) & rtDW . hqbkpgyaw2 . pjsxu0fvzv ; systemRan [ 40 ] = (
sysRanDType * ) & rtDW . n4yw4kkm3u . pjsxu0fvzv ; systemRan [ 41 ] = (
sysRanDType * ) & rtDW . oq2a2iz1om . pjsxu0fvzv ; systemRan [ 42 ] = (
sysRanDType * ) & rtDW . jiiczdlcrb . darzzav0jw ; systemRan [ 43 ] = (
sysRanDType * ) & rtDW . jiiczdlcrb . ilxp0cy4vk ; systemRan [ 44 ] = (
sysRanDType * ) & rtDW . jiiczdlcrb . ilxp0cy4vk ; systemRan [ 45 ] = (
sysRanDType * ) & rtDW . jiiczdlcrb . darzzav0jw ; systemRan [ 46 ] = &
rtAlwaysEnabled ; systemRan [ 47 ] = ( sysRanDType * ) & rtDW . bfu21rlfhj .
hsbxtekslw ; systemRan [ 48 ] = ( sysRanDType * ) & rtDW . o4q02ps2rb .
jiohbu5vfc ; systemRan [ 49 ] = ( sysRanDType * ) & rtDW . emv01xexxw .
i3jfuj41qy ; systemRan [ 50 ] = ( sysRanDType * ) & rtDW . civchsdznw .
ioximvoylt ; systemRan [ 51 ] = ( sysRanDType * ) & rtDW . gsfdft5hdw .
cti4j40whk ; systemRan [ 52 ] = ( sysRanDType * ) & rtDW . fdljmutgrr .
kr10x0g2eh ; systemRan [ 53 ] = ( sysRanDType * ) & rtDW . cnotxc2z3h .
agocbzgv3b ; systemRan [ 54 ] = ( sysRanDType * ) & rtDW . ivzbiu131n .
ouauph2cdg ; systemRan [ 55 ] = ( sysRanDType * ) & rtDW . iajwi2yieg .
mjauax0g2q ; systemRan [ 56 ] = ( sysRanDType * ) & rtDW . mtlhcioyxm .
kyf3z0bmdo ; systemRan [ 57 ] = & rtAlwaysEnabled ; systemRan [ 58 ] = (
sysRanDType * ) & rtDW . g0suhtc3bz . aowgz4u5ao ; systemRan [ 59 ] = (
sysRanDType * ) & rtDW . g0suhtc3bz . muk3ngphda ; systemRan [ 60 ] = (
sysRanDType * ) & rtDW . g0suhtc3bz . p0qoxump3h ; systemRan [ 61 ] = (
sysRanDType * ) & rtDW . g0suhtc3bz . hj211nghnp ; systemRan [ 62 ] = (
sysRanDType * ) & rtDW . g0suhtc3bz . mnbpbp4fph ; systemRan [ 63 ] = (
sysRanDType * ) & rtDW . p3atgr1lvy . pjsxu0fvzv ; systemRan [ 64 ] = (
sysRanDType * ) & rtDW . l2otctcrwa . pjsxu0fvzv ; systemRan [ 65 ] = (
sysRanDType * ) & rtDW . i1jub4ytlu . pjsxu0fvzv ; systemRan [ 66 ] = (
sysRanDType * ) & rtDW . im3skmxke2 . pjsxu0fvzv ; systemRan [ 67 ] = (
sysRanDType * ) & rtDW . lfyyzy3mj4 . darzzav0jw ; systemRan [ 68 ] = (
sysRanDType * ) & rtDW . lfyyzy3mj4 . ilxp0cy4vk ; systemRan [ 69 ] = (
sysRanDType * ) & rtDW . lfyyzy3mj4 . ilxp0cy4vk ; systemRan [ 70 ] = (
sysRanDType * ) & rtDW . lfyyzy3mj4 . darzzav0jw ; systemRan [ 71 ] = &
rtAlwaysEnabled ; systemRan [ 72 ] = ( sysRanDType * ) & rtDW . bkh4bldsrc .
hsbxtekslw ; systemRan [ 73 ] = ( sysRanDType * ) & rtDW . dgvvn0zjel .
jiohbu5vfc ; systemRan [ 74 ] = ( sysRanDType * ) & rtDW . al5ms3ycop .
i3jfuj41qy ; systemRan [ 75 ] = ( sysRanDType * ) & rtDW . iwezxor5da .
ioximvoylt ; systemRan [ 76 ] = & rtAlwaysEnabled ; systemRan [ 77 ] = &
rtAlwaysEnabled ; systemRan [ 78 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } rtP . Saturation1_UpperSat = rtInf ; rtP .
Saturation1_UpperSat_nk2y2hmxxu = rtInf ; rtP .
Saturation1_UpperSat_iy2bpppzxt = rtInf ; ssSetNumSFunctions ( rtS , 1 ) ; {
static SimStruct childSFunctions [ 1 ] ; static SimStruct *
childSFunctionPtrs [ 1 ] ; ( void ) memset ( ( void * ) & childSFunctions [ 0
] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; ssSetSFunction ( rtS , 0 , & childSFunctions [ 0
] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; static time_T
sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [
1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ;
( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ;
ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts ,
& sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; {
static struct _ssBlkInfo2 _blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = &
_blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ; } { static struct
_ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 = & _portInfo2 ;
_ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; } ssSetMdlInfoPtr ( rts ,
ssGetMdlInfoPtr ( rtS ) ) ; { static struct _ssSFcnModelMethods2 methods2 ;
ssSetModelMethods2 ( rts , & methods2 ) ; } { static struct
_ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , & methods3 ) ; } {
static struct _ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , &
methods4 ) ; } { static struct _ssStatesInfo2 statesInfo2 ; static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetStatesInfo2 ( rts , &
statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } {
static struct _ssPortInputs inputPortInfo [ 1 ] ; _ssSetNumInputPorts ( rts ,
1 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 1 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ; {
static struct _ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ;
_ssSetPortInfo2ForInputCoSimAttribute ( rts , & inputPortCoSimAttribute [ 0 ]
) ; } ssSetInputPortIsContinuousQuantity ( rts , 0 , 0 ) ; { static real_T
const * sfcnUPtrs [ 33 ] ; { int_T i1 ; const real_T * u0 = & rtB .
ag4s5axk25 [ 0 ] ; for ( i1 = 0 ; i1 < 15 ; i1 ++ ) { sfcnUPtrs [ i1 ] = & u0
[ i1 ] ; } u0 = & rtB . et55wkirxx [ 0 ] ; for ( i1 = 0 ; i1 < 15 ; i1 ++ ) {
sfcnUPtrs [ i1 + 15 ] = & u0 [ i1 ] ; } sfcnUPtrs [ 30 ] = & rtB . cqcamkkows
; sfcnUPtrs [ 31 ] = & rtB . c1dqwcqr33 ; sfcnUPtrs [ 32 ] = & rtB .
hkyauco4mx ; } ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 0 , 1 ) ;
ssSetInputPortWidth ( rts , 0 , 33 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { static struct _ssOutPortUnit
outputPortUnits [ 1 ] ; _ssSetPortInfo2ForOutputUnits ( rts , &
outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ; { static
struct _ssOutPortCoSimAttribute outputPortCoSimAttribute [ 1 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidth ( rts ,
0 , 210 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) rtB . jjfqmcafuv
) ) ; } } ssSetModelName ( rts , "State-Space" ) ; ssSetPath ( rts ,
"a1_IEEE9_Ctest/powergui/EquivalentModel1/State-Space" ) ; if ( ssGetRTModel
( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts ,
ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) )
; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts , rts ) ; }
ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static mxArray *
sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ; ssSetSFcnParamsPtr (
rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 , ( mxArray * ) rtP .
StateSpace_P1_Size ) ; ssSetSFcnParam ( rts , 1 , ( mxArray * ) rtP .
StateSpace_P2_Size ) ; ssSetSFcnParam ( rts , 2 , ( mxArray * ) rtP .
StateSpace_P3_Size ) ; ssSetSFcnParam ( rts , 3 , ( mxArray * ) rtP .
StateSpace_P4_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW . dae4rjyb33
[ 0 ] ) ; ssSetIWork ( rts , ( int_T * ) & rtDW . cf4k5fhpph [ 0 ] ) ;
ssSetPWork ( rts , ( void * * ) & rtDW . lbnkag4qj4 [ 0 ] ) ; { static struct
_ssDWorkRecord dWorkRecord [ 3 ] ; static struct _ssDWorkAuxRecord
dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord ) ;
ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 6 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
dae4rjyb33 [ 0 ] ) ; ssSetDWorkWidth ( rts , 1 , 4 ) ; ssSetDWorkDataType (
rts , 1 , SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork
( rts , 1 , & rtDW . cf4k5fhpph [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 15 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . lbnkag4qj4 [ 0 ] ) ; } sfun_psbdqc
( rts ) ; sfcnInitializeSizes ( rts ) ; sfcnInitializeSampleTimes ( rts ) ;
ssSetSampleTime ( rts , 0 , 0.0 ) ; ssSetOffsetTime ( rts , 0 , 0.0 ) ;
sfcnTsMap [ 0 ] = 0 ; ssSetNumNonsampledZCs ( rts , 0 ) ;
_ssSetInputPortConnected ( rts , 0 , 1 ) ; _ssSetOutputPortConnected ( rts ,
0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
