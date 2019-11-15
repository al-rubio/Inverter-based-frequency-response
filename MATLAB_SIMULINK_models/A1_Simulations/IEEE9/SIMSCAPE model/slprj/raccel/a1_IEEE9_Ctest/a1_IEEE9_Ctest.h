#include "__cf_a1_IEEE9_Ctest.h"
#ifndef RTW_HEADER_a1_IEEE9_Ctest_h_
#define RTW_HEADER_a1_IEEE9_Ctest_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef a1_IEEE9_Ctest_COMMON_INCLUDES_
#define a1_IEEE9_Ctest_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "a1_IEEE9_Ctest_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "rt_defines.h"
#define MODEL_NAME a1_IEEE9_Ctest
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (972) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (173)   
#elif NCSTATES != 173
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T g1evuf0ey1 ; real_T axx2pihh1y ; } c0os3n2udc ;
typedef struct { int8_T cti4j40whk ; boolean_T b0qbuxmcvn ; } norupa124f ;
typedef struct { real_T hxsdfs3e21 ; real_T dg4wofx0oz ; } jjc0whid3j ;
typedef struct { int8_T kr10x0g2eh ; boolean_T oxxslnaj3o ; } j2ja1y5ept ;
typedef struct { real_T btj0e2kosd ; real_T fbxapju1qk ; } i4jp2mcstd ;
typedef struct { int8_T agocbzgv3b ; boolean_T c3kvirad2l ; } h0x5eljdlc ;
typedef struct { real_T k4hjurn40p ; real_T gy2v4a00mz ; } iviovo42s2 ;
typedef struct { int8_T ouauph2cdg ; boolean_T o3qekw1vde ; } bnirstufzs ;
typedef struct { real_T mbbsji2qtr ; real_T hsz0ejwogb ; } maz5funpmi ;
typedef struct { int8_T mjauax0g2q ; boolean_T ko05akcg2h ; } lz11a3yp4s ;
typedef struct { real_T hn1q1abjaw ; real_T mkkgohz0kj ; } gzx1acbj4v ;
typedef struct { int8_T kyf3z0bmdo ; boolean_T al2zz4c1e2 ; } lwxg4jpr3i ;
typedef struct { real_T i5ua1kw1wm ; real_T jfc12rv0sa ; real_T jfhlf3iv5n ;
real_T ko0dmhyuxg ; real_T kyono01jpx ; real_T dpeyyigrxr ; real_T eetysuwtq4
; real_T lpe4xbouxa ; real_T jymrjwljvm ; real_T c1yu5oifr1 ; real_T
l52ai0evpe ; real_T l2vha4yigz ; real_T by5qrqku0e ; real_T ixctph2rbn ;
real_T ifujm2ijri ; real_T g0rx4augsu ; real_T oe3bdzycux ; real_T hwlmcwltxj
; real_T fqzxehuh3m ; real_T cjdoqls3af ; real_T i2ubtwsvtx ; real_T
ey1iv0wuwj ; real_T oz2qtyrljx ; real_T lqujmxprzs ; real_T ff5femn4im ;
real_T i1lvxnmro2 ; real_T kyepzjnzbe ; real_T codc0iym2b ; real_T fnkgy3xnmr
; real_T jhm531vmcw ; real_T loda2buo2x ; real_T gakelvcje0 ; real_T
mladwcg0r0 ; real_T ecellgvita ; real_T fwdkb3pktf ; real_T hkplurhtkf ;
real_T pqg5dmghyp ; real_T iy3cmkbugo ; real_T jzfis1cord ; real_T itl5srp4cs
; real_T ew02prbfhl ; real_T h44taomecd ; real_T ot2brolk5t ; real_T
f3mwjwkpzz ; real_T a4sf2pzigh ; real_T avb40bo42v ; real_T gvglfxoj3x ;
real_T oymtd3k0ad ; real_T gitnryvoqi ; real_T ev2ntfnxxl ; real_T hcuppylww2
; real_T lges3cleuu ; real_T c3ujurrogb ; real_T e52puk4cpp ; real_T
f3vmd3wlwl ; real_T ar1vf0pny3 ; real_T mkjqskszpf ; real_T ooemjapwiw ;
real_T dk34fmrbhx ; real_T ohjtf2mpz3 ; real_T m1tffed5dr ; real_T g0icbxhmtg
; real_T o5ork5in2j ; real_T odbrfh23ab ; real_T n5m4gcg231 ; real_T
hhljj4zoer ; real_T fwapo2bokd ; real_T jhoktonj2v ; real_T db11rbju15 ;
real_T pd2kgxrm4t ; real_T oep4cziwwh ; real_T kyceu4x1az ; real_T owi433az41
; real_T lhytx2rzgp ; real_T nbs3u3psfl ; real_T bl53k3dxld ; real_T
jhctuk0s0y ; real_T kpy0ya5ox1 ; real_T bqb4bdmqty ; real_T i40vmwstt5 ;
real_T hvt5s5lbxb ; } p3ijwzzkfi ; typedef struct { int8_T mnbpbp4fph ;
int8_T hj211nghnp ; int8_T p0qoxump3h ; int8_T muk3ngphda ; int8_T aowgz4u5ao
; boolean_T k2alpqp3ma ; boolean_T j4moxvna5a ; boolean_T ovpgcbssii ;
boolean_T iie0sywhx2 ; boolean_T gmmz54p1jq ; } bnbhtzzh0a ; typedef struct {
real_T icujgegwsf ; real_T el4ptyscen ; real_T nl2gcqurai ; real_T pc2ewfzt4m
; real_T bfgaz0ga22 ; real_T klbf1yfrli ; real_T ju1kk0ptw1 ; real_T
bc2kt5sqju ; real_T n1htvwbcs1 ; real_T dk1vg2mwy1 ; real_T ih1bruvbpf ;
real_T bmh0ev1dod ; real_T hpmhcmxij1 ; real_T melb5kp2wk ; real_T j2yrynoejz
; real_T eo1ws4pu4d ; real_T adcbm1v10t ; real_T d2q1a1b41i ; real_T
gdbj40qzwu ; real_T psupels3kb ; } fv54ow1i3z ; typedef struct { real_T
icujgegwsf ; real_T el4ptyscen ; real_T nl2gcqurai ; real_T pc2ewfzt4m ;
real_T bfgaz0ga22 ; real_T klbf1yfrli ; real_T ju1kk0ptw1 ; real_T bc2kt5sqju
; real_T n1htvwbcs1 ; real_T dk1vg2mwy1 ; real_T ih1bruvbpf ; real_T
bmh0ev1dod ; real_T hpmhcmxij1 ; real_T melb5kp2wk ; real_T j2yrynoejz ;
real_T eo1ws4pu4d ; real_T adcbm1v10t ; real_T d2q1a1b41i ; real_T gdbj40qzwu
; real_T psupels3kb ; } m4nuliemhl ; typedef struct { boolean_T icujgegwsf ;
boolean_T el4ptyscen ; boolean_T nl2gcqurai ; boolean_T pc2ewfzt4m ;
boolean_T bfgaz0ga22 ; boolean_T klbf1yfrli ; boolean_T ju1kk0ptw1 ;
boolean_T bc2kt5sqju ; boolean_T n1htvwbcs1 ; boolean_T dk1vg2mwy1 ;
boolean_T ih1bruvbpf ; boolean_T bmh0ev1dod ; boolean_T hpmhcmxij1 ;
boolean_T melb5kp2wk ; boolean_T j2yrynoejz ; boolean_T eo1ws4pu4d ;
boolean_T adcbm1v10t ; boolean_T d2q1a1b41i ; boolean_T gdbj40qzwu ;
boolean_T psupels3kb ; } jlvgnnbv0g ; typedef struct { real_T icujgegwsf ;
real_T el4ptyscen ; real_T nl2gcqurai ; real_T pc2ewfzt4m ; real_T bfgaz0ga22
; real_T klbf1yfrli ; real_T ju1kk0ptw1 ; real_T bc2kt5sqju ; real_T
n1htvwbcs1 ; real_T dk1vg2mwy1 ; real_T ih1bruvbpf ; real_T bmh0ev1dod ;
real_T hpmhcmxij1 ; real_T melb5kp2wk ; real_T j2yrynoejz ; real_T eo1ws4pu4d
; real_T adcbm1v10t ; real_T d2q1a1b41i ; real_T gdbj40qzwu ; real_T
psupels3kb ; } n5ghq1rgtg ; typedef struct { real_T h3ztb2avwq ; } itapaapw2y
; typedef struct { int8_T pjsxu0fvzv ; boolean_T pul5ixackn ; } jgsqdkjxle ;
typedef struct { real_T jxsbt0ssfc ; } lemzsljfxi ; typedef struct { real_T
jxsbt0ssfc ; } puchu13zo3 ; typedef struct { boolean_T jxsbt0ssfc ; }
gpeibc1iz2 ; typedef struct { real_T jxsbt0ssfc ; } gqot202hqa ; typedef
struct { real_T d5v0t5ntsn [ 3 ] ; real_T ll5eoz1d2u ; real_T duiwcnw1dd ;
real_T dihuht4le1 ; real_T ij3q0zbi3l ; real_T k20j2gazrc ; real_T fbenzmtppb
; real_T af4c0v52gc ; real_T i4ugegskmj ; real_T c1ixhjszj3 ; real_T
csmh50wmip ; real_T jasswtzioa ; real_T cfzslcgkae ; real_T pgfwu2nhuw [ 36 ]
; real_T nztfpw3vzb [ 36 ] ; real_T bmx5oxytsv [ 36 ] ; real_T b5usiw2dap ;
real_T ftuxeqycb0 [ 3 ] ; real_T bnyondxcjv ; real_T nf1sf5tzwd ; real_T
bn3nwhmnsw ; real_T panplb2kcl ; real_T fc0b411b05 ; real_T prazrivnew ;
real_T conllmef5l ; real_T hcbf1wupcn ; real_T kx4qnyp3vx ; real_T lwhbbxzwer
; real_T j321y5gdsl ; real_T gbqzjyc1lr ; real_T ah11f2ygtm ; } jx0ulpnvrr ;
typedef struct { real_T cofkrgttkb [ 36 ] ; uint32_T hkg1chr3r0 ; uint32_T
e0vwqmxycq ; int_T mluji53bh3 ; int_T kv5wbwosvp ; int8_T darzzav0jw ; int8_T
ilxp0cy4vk ; boolean_T i3acn4dcbd ; boolean_T aqf41ojl24 ; boolean_T
pkfggmzabf ; boolean_T ogactvnuca ; } hgpoxvgvmn ; typedef struct { real_T
ari1ul3qn4 ; real_T dpsrgueukm ; } jwoppf1s1t ; typedef struct { real_T
ari1ul3qn4 ; real_T dpsrgueukm ; } hjdigkutaj ; typedef struct { boolean_T
ari1ul3qn4 ; boolean_T dpsrgueukm ; } i3dogwilm3 ; typedef struct { real_T
ari1ul3qn4 ; real_T dpsrgueukm ; } hya1ektgr1 ; typedef struct { real_T
m3cwlfk1qq ; real_T dx1sucsatg ; real_T jigfnq1j3r ; real_T lygzyfpqvv ; }
mbi1khccur ; typedef struct { real_T o0whdfflfv ; } mky4wgoovg ; typedef
struct { int8_T hsbxtekslw ; boolean_T pbxv33eaog ; } ffedy0f3nw ; typedef
struct { real_T fvh0mv5ped ; real_T ga42gsoznq ; } awbgcbrtew ; typedef
struct { int8_T jiohbu5vfc ; } eq2cpbv5jh ; typedef struct { real_T
ivesxeoeky ; real_T hqvgkhiase ; } ncv4ywdvgw ; typedef struct { int8_T
i3jfuj41qy ; } bhntyc2jvm ; typedef struct { real_T j0quskwuuz ; real_T
pnuewr4pnd ; } c24jiyudwc ; typedef struct { int8_T ioximvoylt ; } magsd05ncv
; typedef struct { creal_T o5tuhgm2rk ; creal_T bjzub5mhka ; creal_T
kjc134rogj ; creal_T c5s0yzynsx ; creal_T hyvrvnapov ; creal_T iuws5wbcoh ;
creal_T lgacn4c3ag ; creal_T apuymfs4jd ; creal_T l4xpyw1lla [ 2 ] ; creal_T
bwhwvubvvc ; creal_T pbp5ng2avr ; creal_T ggyvxlxmi3 ; creal_T al4bbhjpb3 ;
creal_T lkgchv4mjj ; creal_T de2i1oyqat ; creal_T dlrxhzxxd0 ; creal_T
bwz24ezfr0 ; creal_T m0khf1wybm [ 2 ] ; creal_T blymzd2uc5 ; creal_T
liwm2bevu0 ; creal_T epdgie01be ; creal_T dusuwyivzd ; creal_T aldfxrbloj ;
creal_T gzyb44vxr5 ; creal_T omaqtkjuu4 ; creal_T mr3dilex2b ; creal_T
kz3f0psz4w [ 2 ] ; creal_T jj2dlwza4q ; creal_T eaxfxtm05w ; creal_T
klooybbqkh ; creal_T g0iuzw4goy ; creal_T fhus4knob4 ; creal_T ec35jpgpyq ;
creal_T bhnb4tmjw1 [ 105 ] ; creal_T nhivzcmpkc ; creal_T aezifhoqem ;
creal_T i1iwhmdtne [ 2 ] ; creal_T jh4i51pged ; creal_T hnoiwjpdz2 ; creal_T
iabhed2cwe ; creal_T bclbk5wmfw ; creal_T gh1tfsfcj3 ; creal_T gsxir4rqgm ;
creal_T d5hgb54uda ; creal_T l5mkzavglx ; creal_T opu0t5oruo ; creal_T
cqs4cshl4z [ 2 ] ; creal_T k15rsg53lj ; creal_T c1huvwgkys ; creal_T
dy3neew0rm ; creal_T m5fphwhceu ; creal_T ksyyfsfrhu ; creal_T ehf1f4sdjc ;
creal_T l1rgbw0nlj ; creal_T ehbbdbn0mj ; creal_T bxght5sgmp ; creal_T
cca3b1x2me [ 2 ] ; creal_T ei1suet2uc ; creal_T cbojbss3xi ; creal_T
cia03dz34z ; creal_T d3n0x3iygr ; creal_T hjsy01qvep ; creal_T nmcos0ph0e ;
creal_T ojzpfer4xr ; creal_T csjdiwf3cs [ 3 ] ; creal_T lsibg0fi20 [ 3 ] ;
creal_T nyi50xszi1 ; creal_T cm5kmmplfl ; creal_T mndgjk1odk ; creal_T
bvh5pbbcp1 ; creal_T ooghcf2dip ; creal_T ou32xksg4p ; creal_T konv1i4nvn ;
creal_T ovqaxjiu35 ; creal_T ijwur2kcqz ; creal_T onyfh1tkhj ; creal_T
bddg5ijtxl ; creal_T lupaw4rnvv ; creal_T cum4emnzw3 ; creal_T bqqd03nwwx ;
creal_T gpotvgooit ; creal_T ejfagwezyl ; creal_T bigwn33xt3 ; creal_T
abjxoe31ne ; creal_T cqgh3rs2y1 ; creal_T knebdwpoyp ; creal_T kkexdxbbkd ;
creal_T ogvfmpgtwl ; creal_T ksoj22xlak ; creal_T bzv0wjof4r ; creal_T
knoumqzrgf ; creal_T ohcbjriqxr ; creal_T pxzs2yqw3o ; creal_T n4izxnofvg ;
creal_T hj0ldri1lr ; creal_T lu2mpotph2 ; creal_T fxsfhyxo1z ; creal_T
myym2h5ma5 ; creal_T llzstz4tko ; real_T oi4me3vzpe [ 6 ] ; real_T ff0vn1mbyk
[ 36 ] ; real_T kkrqvuep53 [ 6 ] ; real_T jncvcbdtnq [ 6 ] ; real_T
kwzkk1c41h ; real_T e5i5ktyv12 ; real_T ed24evenri ; real_T avoekdfeau ;
real_T irikf2pyub ; real_T fo2gdsn113 [ 2 ] ; real_T grih5mbomn [ 6 ] ;
real_T oepxo5qytl [ 36 ] ; real_T nempxuambx [ 6 ] ; real_T nz52gdgv4a [ 6 ]
; real_T lx0j4ypnjr ; real_T nmcuxy3j1k ; real_T juah0kknyf ; real_T
ae400exzcu ; real_T dqupdqrsdd ; real_T okaisqi0u5 [ 2 ] ; real_T hkzza5jukv
[ 6 ] ; real_T hh1wohcsqs [ 36 ] ; real_T cmzxioqfdz [ 6 ] ; real_T
dx0e1lhobw [ 6 ] ; real_T pdzx3ova52 ; real_T irfszz0pfb ; real_T fi4j4wpwdt
; real_T jayffz3010 ; real_T lejchdnshr ; real_T h1fv3imr2t [ 2 ] ; real_T
frzz42cwjl ; real_T iu3aa1vbnh ; real_T olde1vrxhn ; real_T fpjav3aihc ;
real_T dqmwztxdnr ; real_T fye3btyrzs ; real_T ag4s5axk25 [ 15 ] ; real_T
et55wkirxx [ 15 ] ; real_T is5fcofe05 ; real_T dtt1kgmp2k ; real_T eqjugw2g4v
; real_T cqcamkkows ; real_T hjzava2wz4 ; real_T c1dqwcqr33 ; real_T
cdoxozri4g ; real_T hkyauco4mx ; real_T jjfqmcafuv [ 210 ] ; real_T
ox3rpabdma ; real_T lrja4qihgz ; real_T l3b2ivdy05 ; real_T gxjenmymi3 ;
real_T gnmso3ufns ; real_T ibjh32sw1c ; real_T a2wjqrujdb ; real_T jxxv1skywx
; real_T emr2fhbqxu ; real_T n3ykg5oum3 ; real_T izczrwjtiy ; real_T
dvocrbaqy2 ; real_T mn5e1uhnee ; real_T m02kxelm2q ; real_T dyeev12q22 ;
real_T niyytuv12u [ 3 ] ; real_T hikp3uxxab [ 2 ] ; real_T ghwhuiv0f3 [ 3 ] ;
real_T lxmrydslve ; real_T dlrbenzskg [ 3 ] ; real_T gssetobfwf [ 3 ] ;
real_T kmmteah4sx ; real_T ig54dujev0 ; real_T o4dhc1s2rp ; real_T pgkigxvlp5
[ 2 ] ; real_T erxode5ea3 ; real_T pbrr1rxtxa ; real_T doqu5z43rw ; real_T
iygyndnj0r ; real_T lkesajlrqb ; real_T ikmuu1a5g4 ; real_T myucio2yie ;
real_T bawcla15pq ; real_T fzsr3x3cab ; real_T njdy43etag [ 18 ] ; real_T
po02yjscca ; real_T kpmvggerll [ 3 ] ; real_T myn40sspki [ 2 ] ; real_T
pr1amzbkmd [ 3 ] ; real_T lvryth0cgv ; real_T g1crc1v45r [ 3 ] ; real_T
jibti1widf [ 3 ] ; real_T krvyr1dnqp ; real_T ddn0abp02q ; real_T evb2ap4hyf
; real_T af0ll3t0it [ 2 ] ; real_T jmkl1hx03l ; real_T h5dczvthdo ; real_T
bgtxkdur4r ; real_T fhlo3wub13 ; real_T j400cigacb ; real_T njmpqznwj1 ;
real_T guxhiaybyq ; real_T nzbbqlfkyq ; real_T j0tvvndpvt ; real_T lv3jukjnqp
[ 18 ] ; real_T jpaozznh4a ; real_T otmddottxs [ 3 ] ; real_T olxp0ksh3c [ 2
] ; real_T lmaafy1vao [ 3 ] ; real_T cugdolnzuc ; real_T jn1uxn3eed [ 3 ] ;
real_T p0eqkg2xpt [ 3 ] ; real_T oazwmeb0mw ; real_T iotelzl0ji ; real_T
meosjda20f ; real_T jpfuef53sj [ 2 ] ; real_T gybrfck0av ; real_T mhyppzhid3
; real_T gqzpn3yh2d ; real_T f2o1qwxrii ; real_T a3ksxkomy4 ; real_T
nxsqazfoel ; real_T d0uuzaa31o ; real_T aevbn5ptmj ; real_T nbpdovn150 ;
real_T jmxojepiit [ 18 ] ; real_T gpvkimloub [ 2 ] ; real_T kszsro50ue ;
real_T paudgqgyvo ; real_T coxhl2jphl [ 2 ] ; real_T ezbttr0mux ; real_T
eeelttb4vr ; real_T gvmx2cbgqe ; real_T gipd15agxl [ 3 ] ; real_T dtk2xqandk
; real_T eperc4aiqz ; real_T awwhoalixp ; real_T mzxovrpolv ; real_T
f3ymdpwmh3 ; real_T d51au3mhb4 ; real_T oloboocpj3 ; real_T lhe5tb0zwz ;
real_T lxp4geswhz ; real_T g3ewpazjdf ; real_T m0ia5xfr2h ; real_T ftewt3tckc
; real_T j50l2on4dk ; real_T eooejdbxkv ; real_T d0t3muozz1 ; real_T
lvhok0lvhj ; real_T bigkx4jiaf ; real_T hhootlqxel ; real_T jizjehvotg ;
real_T iurbyn4f3e ; real_T l05tbmdmcy ; real_T kbec521dmo ; real_T mt3x4tpiy5
; real_T kfviw5xxdj ; real_T ao5ufmavwz ; real_T pigyzw5utu ; real_T
oldduokwv4 ; real_T btketabkge ; real_T brlvy4qoad ; real_T hrkmur4ikk ;
real_T gtyff5ppu3 ; real_T jw4i100wy2 ; real_T captiiuzhe ; real_T htm2jjyomv
; real_T i1pdnx403m ; real_T pzxaqhzupm ; real_T gglhgpul1g ; real_T
ayhiio0zji ; real_T glsj4qlm45 ; real_T l5n1225hlb ; real_T kb3b33ug34 ;
real_T g1so2i4pws ; real_T mku3iga4y2 ; real_T oos1lluski ; real_T ernz5m3jti
; real_T pt54e3qwnm ; real_T e1lhaat3lg ; real_T dp2jbzw2cx ; real_T
otjvjcuhok ; real_T gxkr4jkgsf ; real_T cyemm5omog ; real_T an0qxwbgxs ;
real_T j3wlzddiep ; real_T kdyyhf4bbc ; real_T j1ipniqq0m ; real_T ev3p2tyg4u
; real_T mf5a4et21v ; real_T bfqg5545tk ; real_T dw3e1rbl0b ; real_T
cc2zpx4yxk ; real_T d5h0nk3n4j ; real_T j1udiabp3a ; real_T ch2lvqikgg ;
real_T gytx0pc3iv ; real_T ep4tncgk2x ; real_T djgfwwesd5 ; real_T lugceot3wr
; real_T cqdq14zipf ; real_T plpm0kvsia ; real_T likwqzdls2 ; real_T
lkzvz2h4ht ; real_T lnm2ewmav5 ; real_T eq5znppfhp ; real_T cjp5nnfzr3 ;
real_T aobp5ffign ; real_T jzpgbctlqx ; real_T eskogjq4ig ; real_T azmw04sxgp
; real_T azoxj12i03 ; real_T pm2zlnstlx ; real_T apuvbtoqky ; real_T
bq1ktbvput ; real_T p4rb5gwn00 ; real_T bttusq4slp ; real_T cykum1hct4 ;
real_T blohxukvzw ; real_T h1ucpjd222 ; real_T owl10l3dnq ; real_T iu4pi1pgjq
; real_T hiibpffund ; real_T k5bk5aozgm ; real_T hjmsfmmv3z ; real_T
po3xeophlj ; real_T mn51kgpzhu ; real_T gltwh25trx ; real_T lbj5zbyo2l ;
real_T hxjga2tl2n ; real_T bfaj1jpnt5 ; real_T hhpv2sakbb ; real_T lfg4zmyhtf
; real_T mptsbhzt3g ; real_T b3p5x1h2fx ; real_T j022mk3ohb [ 3 ] ; real_T
hv1ap5ms2t [ 2 ] ; real_T chmq1c513r [ 2 ] ; real_T bu4zpk15ru ; real_T
gl3axcefk1 ; real_T elh2ayggum [ 2 ] ; real_T fibxtmnby3 [ 2 ] ; real_T
ah1gsbatnx ; real_T ma3zzf53wt ; real_T pqzmcx4frl [ 2 ] ; real_T mpuswbvjja
[ 2 ] ; real_T cnp5elnaq1 ; real_T pdjtmeo2e1 ; real_T g3fktbo2ju ; real_T
btriocoaa3 ; real_T hm25njyewq ; real_T efpqkwdioo [ 3 ] ; real_T oah4slwb4n
; real_T eup1gi3ww1 ; real_T f3iexx0tfl ; real_T d2powxjwqi ; real_T
hajoh0uh41 ; real_T lcbnmolo2u ; real_T ntprqe04ym ; real_T etlergjdlc ;
real_T nfhu0bam1o ; real_T jehce1r3io ; real_T bfq0k22t2r ; real_T olymqvziwx
; real_T ofe4yd1uzb ; real_T okndhfgjx3 ; real_T pzqi20qdob ; real_T
gds5lhwgp4 ; real_T phpzy1swil ; real_T iuv5orisf2 ; real_T bmjkpy5r5j ;
real_T bew2a1coii ; real_T odxzufrufe ; real_T nfsaydrqd1 ; real_T ixrsyp5wvc
; real_T f1vfvox3fj ; real_T b4neh2dx22 ; real_T e2msmkel53 ; real_T
aokbiigazl ; real_T i1gmojn5da ; real_T cvxrdyzxdh ; real_T fc0ujpjjzk ;
real_T iqeqbfs4bg ; real_T mqqnywia3h ; real_T hyj5g0ftll ; real_T bbp4zr3nqq
; real_T ihtj3gxewi ; real_T opbjtwzwt4 ; real_T fa4hshbbor ; real_T
dxeqgpf4ca ; real_T jcajbc1dvp ; real_T jwyfxfrvwc ; real_T fsgotglkkt ;
real_T ikmzljk1p2 [ 36 ] ; real_T m5imybf25k [ 36 ] ; real_T f3wlva3b35 [ 36
] ; real_T pxxq3pk4z1 [ 6 ] ; real_T iftwu0z3bl [ 6 ] ; real_T aohv4uq5al [ 6
] ; real_T pue2mgfg4f ; real_T kednrudsxa ; real_T k0ntyg3vqg [ 2 ] ; real_T
ilgas4d42n [ 2 ] ; real_T ceapevpuqa [ 2 ] ; real_T al4g023z3r [ 2 ] ; real_T
nggcismtmx [ 2 ] ; real_T hdvb2o1sci ; real_T ackg0siiq0 ; real_T ftnrdnqtan
; real_T gegm1ao0vn ; real_T lv2d5e21ie ; real_T gtqu5gckf1 ; real_T
bf4wbb13pp ; real_T opgpljj5ax ; real_T l5h5eacovm ; real_T pxluvjdhtr ;
real_T im22a3yupz ; real_T px4y4tejhs ; real_T dxhfkiexxx ; real_T kyqespgapw
; real_T f2e4fmh5rw ; real_T gfrlb0etij ; real_T mpzph3aoym ; real_T
lg3izt0djl ; real_T czuqbf5zpt ; real_T klre0yyw4m ; real_T jpjgpvw22t ;
real_T lpyy3fuvcg ; real_T klmfbwlf32 ; real_T iprnorxab3 ; real_T ct5nzyasox
; real_T nx0pljyxhc ; real_T lzgytxcuj4 ; real_T o4qu1kuoq3 ; real_T
mkiyraykby ; real_T o0qn3ari12 ; real_T azd2clxgy0 ; real_T hk2lysmmn2 ;
real_T hlfbp5fwlu ; real_T beuzvyiici ; real_T af3hkqbmzi ; real_T g4fontgf1e
; real_T ppzhxzv1nu ; real_T gu4lv5cem2 ; real_T j0m3ntlogi ; real_T
jt5b1uoadw ; real_T bnglnvupy0 ; real_T aj0xom1yba ; real_T ctd33enkwk ;
real_T fh3mkzcqqi ; real_T blv2th2bqq ; real_T awbmgmlnwa ; real_T er3cba3bay
; real_T nkjn34zi2j ; real_T fpr5tvnj2f ; real_T cpg230yfqh ; real_T
gsaf3f2gdq ; real_T dv2pnskjqq ; real_T j0pfo1rvmu ; real_T ae431mz3p4 ;
real_T e0jycpiqck ; real_T ce44kslacp ; real_T m5c4hbg441 ; real_T eqkdudoasf
[ 36 ] ; real_T ga3nsrampj [ 36 ] ; real_T pa2tx3ce5v [ 36 ] ; real_T
jm12g4bdq3 [ 6 ] ; real_T cys13oinrr [ 6 ] ; real_T kooavxss5m [ 6 ] ; real_T
ddgfldhlsi ; real_T b41ayuyill ; real_T pubsjzqdov [ 2 ] ; real_T die3odxdp3
[ 2 ] ; real_T j3ercjdea0 [ 2 ] ; real_T gbmx304mw0 [ 2 ] ; real_T pos2lxkkzh
[ 2 ] ; real_T dtzqyjhqrl ; real_T h4urt5fi24 ; real_T aa0bdg5g1q ; real_T
knn1lzb4ri ; real_T kuj2fpnilb ; real_T kxkr4kddie ; real_T e41naz4kca ;
real_T gs2tqoppxh ; real_T lxvqpqbx1x ; real_T oabj2jzm25 ; real_T armyl1suvu
; real_T pf3lkjovxq ; real_T g5w2fnp4gp ; real_T melb0fec15 ; real_T
orwvsq0ufs ; real_T gcvyc24xl0 ; real_T iddljzblvf ; real_T hreourhpdt ;
real_T bs3kyjvmgv ; real_T pk5vxax5dp ; real_T dn4kxqtqh5 ; real_T fbrbu0ccie
; real_T gpg5t1grec ; real_T hcsfiaiyml ; real_T gfdiegy000 ; real_T
kbvso2g4l5 ; real_T ejnrqlqm3u ; real_T n11oasytsa ; real_T o1nreayjes ;
real_T caxxez3cbp ; real_T dxgeeotrlx ; real_T cyrksvovlu ; real_T nipseb4pdf
; real_T ktman4e40l ; real_T krdmyzrxdu ; real_T g3q41vxpzk ; real_T
d5khcoomh0 ; real_T o1nhez00i1 ; real_T f4b4v0ijys ; real_T owxsqi11bv ;
real_T hgwr2w5ecc ; real_T fo2hurg0vg ; real_T jvy2gkbhkm ; real_T og33vmdixg
; real_T hhi1nnec5l ; real_T dmla42z3cd ; real_T lc2j2sdlrf ; real_T
onkpfgvuqs ; real_T nouofdn2pm ; real_T jshfzukjra ; real_T es4v2hh0nq ;
real_T drum3qlc1a ; real_T ei5d5pufyd ; real_T clgwiuw1b4 ; real_T lsewb1y44k
; real_T j314321lhc [ 36 ] ; real_T nbal4q42dj [ 36 ] ; real_T afe1t2z1cz [
36 ] ; real_T hbrsb20l1t [ 6 ] ; real_T b5vlpchhak [ 6 ] ; real_T pb5awft1cv
[ 6 ] ; real_T af4orx44k2 ; real_T gm2zbqrz0p ; real_T mxbbx0jdns [ 2 ] ;
real_T gnl2lvstmf [ 2 ] ; real_T med1ex2onq [ 2 ] ; real_T m0rqu0dq2p [ 2 ] ;
real_T f4v14vmxcg [ 2 ] ; real_T ij1dvl0uwa ; real_T cny41eqqjx ; real_T
egmozmr52a ; real_T ddrjqpzajr ; real_T helzurooqj ; real_T dsplbbvihw ;
real_T kuhlzrvkxm ; real_T knztbrbrjc ; real_T alj0zcmrdm ; real_T ez4dfk5ai2
; real_T l1pc03klhq ; real_T j1kszmffho ; real_T emnn2leose ; real_T
fkubfrvxx0 ; real_T dkozbu5uwr ; real_T goobplfhwu ; real_T drxbkidavc ;
real_T gd5nltzekd ; real_T jabktjzdxo ; real_T gt4dvriw2c ; real_T clj1apcqaj
; real_T pxtmgndjyo ; real_T cxh1t2fkmh ; real_T k2fjtw1kcs ; real_T
hh0focs1t2 ; c24jiyudwc iwezxor5da ; ncv4ywdvgw al5ms3ycop ; awbgcbrtew
dgvvn0zjel ; mky4wgoovg bkh4bldsrc ; jx0ulpnvrr lfyyzy3mj4 ; itapaapw2y
im3skmxke2 ; itapaapw2y i1jub4ytlu ; itapaapw2y l2otctcrwa ; itapaapw2y
p3atgr1lvy ; p3ijwzzkfi g0suhtc3bz ; gzx1acbj4v mtlhcioyxm ; maz5funpmi
iajwi2yieg ; iviovo42s2 ivzbiu131n ; i4jp2mcstd cnotxc2z3h ; jjc0whid3j
fdljmutgrr ; c0os3n2udc gsfdft5hdw ; c24jiyudwc civchsdznw ; ncv4ywdvgw
emv01xexxw ; awbgcbrtew o4q02ps2rb ; mky4wgoovg bfu21rlfhj ; jx0ulpnvrr
jiiczdlcrb ; itapaapw2y oq2a2iz1om ; itapaapw2y n4yw4kkm3u ; itapaapw2y
hqbkpgyaw2 ; itapaapw2y kl4qbbwlk2 ; p3ijwzzkfi iicqzjvjtu ; gzx1acbj4v
cmxdysxk15 ; maz5funpmi b3kk3xvbzl ; iviovo42s2 hkobjilnmt ; i4jp2mcstd
ako1qu1fpl ; jjc0whid3j osligu4cvh ; c0os3n2udc fxig4dac3b ; c24jiyudwc
okacab3hemp ; ncv4ywdvgw agyrpuacxw3 ; awbgcbrtew n1lfiimibyh ; mky4wgoovg
ef3bwkvl4et ; jx0ulpnvrr i3kxfqtdpbp ; itapaapw2y mikcvz5h1f ; itapaapw2y
naitari34m ; itapaapw2y c4bfgvlf1r ; itapaapw2y cfxuytlxuwh ; p3ijwzzkfi
eecdtyu2lcn ; gzx1acbj4v eaz24jybtas ; maz5funpmi nwwecupcxr3 ; iviovo42s2
n12bdjrzo2e ; i4jp2mcstd p5n4z0qa43g ; jjc0whid3j brervxhrpps ; c0os3n2udc
pu5sgumjsdm ; } B ; typedef struct { real_T dclt4t2f5x [ 2 ] ; real_T
fj3pd2kyk2 [ 2 ] ; real_T n013u3cmat [ 2 ] ; real_T iw2uuju0gd ; real_T
fzszybl1g4 ; real_T gjffyzrfxn ; real_T ef5rdpsrwh ; real_T a21uxkuhet ;
real_T imgwfdnxwt ; real_T pvmeybyawr ; real_T i415cb5tyz ; real_T ni1mvxhipb
; real_T mpcrxmju4o ; real_T ecyaenex24 ; real_T onllvnxpvf ; real_T
f54via14pl ; real_T lt5qqttkex ; real_T maclwnp4zs ; real_T j4tvsqt5tv ;
real_T gphntququz ; real_T mghx2yfyks ; real_T p4touhmkio ; real_T ehtnpp1dr3
; real_T a2ge1egm5c ; real_T b3audhzl1y ; real_T hysefqvhk1 ; real_T
jsj4bfphtf ; real_T gfxywmnqxm ; real_T b4vyngzd3r ; real_T pn323d2g0n ;
real_T hfhih3vmts ; real_T dae4rjyb33 [ 6 ] ; void * lbnkag4qj4 [ 15 ] ;
struct { void * LoggedData [ 4 ] ; } dehjj2rr0e ; struct { void * LoggedData
; } kj3rtjro0l ; struct { void * LoggedData ; } cmdpzniehi ; struct { void *
LoggedData ; } ojv5uxhdfd ; struct { void * LoggedData ; } easjgmyxrc ;
struct { void * LoggedData ; } bo5hxdyszn ; struct { void * LoggedData ; }
ggwq22lgwc ; struct { void * LoggedData ; } j33iuvbthk ; struct { void *
LoggedData ; } mcrgiem1vt ; struct { void * LoggedData ; } erq1ovxym4 ;
struct { void * LoggedData ; } azvbq5ltan ; struct { void * LoggedData ; }
brx3uixeck ; struct { void * LoggedData ; } hu1rcwtl0f ; struct { void *
LoggedData ; } dzggppucqe ; struct { void * LoggedData [ 2 ] ; } nmpvwbg5ie ;
int_T cf4k5fhpph [ 4 ] ; int_T edpue2swv0 [ 2 ] ; int_T o5mbsiz1a5 ; int_T
l1i2nunuqi ; int_T gldf0honah ; int_T ih3l5pbpnd ; int_T m0b44wq00m ; int_T
kuqzbin1hn ; int_T eobedasena ; int_T mn02ucv4ri ; int_T nc3vxevtzy ; int_T
hvlmwinfix ; int_T ofn545f5y5 ; int_T otc2i5ciys ; int_T kv245y3zxr ; int_T
b55lcalndo ; int_T fqumv3wtqn ; int_T pukf1gljhw ; int_T o4lqja15yl ; int_T
gufn4caao1 ; int_T kmuivl50cb ; int_T bj2fwn3hdn ; int_T akanpxoqip ; int_T
mh1mdaxfms ; int_T aixga1kij4 ; int_T orn0aag2of ; int_T pgehtigdvo ; int_T
o0sdwijzmz ; int_T pi4zq0i2yo ; int_T juesmtqyxi ; int8_T ikdujdqbhz ; int8_T
c3m352mirs ; int8_T carppcocfa ; int8_T bi0bokrgo0 ; int8_T gyxlvs3yne ;
int8_T fqseq5egae ; boolean_T hkfuu4lvsn ; boolean_T ohclzc1ktv ; boolean_T
dkgykuoeit ; boolean_T m4jf2srdtt ; boolean_T lkguu43rgr ; boolean_T
kewxpov34z ; boolean_T cmsk53alke ; magsd05ncv iwezxor5da ; bhntyc2jvm
al5ms3ycop ; eq2cpbv5jh dgvvn0zjel ; ffedy0f3nw bkh4bldsrc ; hgpoxvgvmn
lfyyzy3mj4 ; jgsqdkjxle im3skmxke2 ; jgsqdkjxle i1jub4ytlu ; jgsqdkjxle
l2otctcrwa ; jgsqdkjxle p3atgr1lvy ; bnbhtzzh0a g0suhtc3bz ; lwxg4jpr3i
mtlhcioyxm ; lz11a3yp4s iajwi2yieg ; bnirstufzs ivzbiu131n ; h0x5eljdlc
cnotxc2z3h ; j2ja1y5ept fdljmutgrr ; norupa124f gsfdft5hdw ; magsd05ncv
civchsdznw ; bhntyc2jvm emv01xexxw ; eq2cpbv5jh o4q02ps2rb ; ffedy0f3nw
bfu21rlfhj ; hgpoxvgvmn jiiczdlcrb ; jgsqdkjxle oq2a2iz1om ; jgsqdkjxle
n4yw4kkm3u ; jgsqdkjxle hqbkpgyaw2 ; jgsqdkjxle kl4qbbwlk2 ; bnbhtzzh0a
iicqzjvjtu ; lwxg4jpr3i cmxdysxk15 ; lz11a3yp4s b3kk3xvbzl ; bnirstufzs
hkobjilnmt ; h0x5eljdlc ako1qu1fpl ; j2ja1y5ept osligu4cvh ; norupa124f
fxig4dac3b ; magsd05ncv okacab3hemp ; bhntyc2jvm agyrpuacxw3 ; eq2cpbv5jh
n1lfiimibyh ; ffedy0f3nw ef3bwkvl4et ; hgpoxvgvmn i3kxfqtdpbp ; jgsqdkjxle
mikcvz5h1f ; jgsqdkjxle naitari34m ; jgsqdkjxle c4bfgvlf1r ; jgsqdkjxle
cfxuytlxuwh ; bnbhtzzh0a eecdtyu2lcn ; lwxg4jpr3i eaz24jybtas ; lz11a3yp4s
nwwecupcxr3 ; bnirstufzs n12bdjrzo2e ; h0x5eljdlc p5n4z0qa43g ; j2ja1y5ept
brervxhrpps ; norupa124f pu5sgumjsdm ; } DW ; typedef struct { real_T
fakh1pyzk2 [ 6 ] ; real_T pdhes0243g ; real_T bbqpxef5jj ; real_T iac0bbig40
[ 2 ] ; real_T bkgemaqqxf [ 6 ] ; real_T muu4p2nsxg ; real_T b2y4k4jhrs ;
real_T dqrbmqffu1 [ 2 ] ; real_T kciqokkdbp [ 6 ] ; real_T mz4c440sms ;
real_T b2k3puejst ; real_T bl1q553mat [ 2 ] ; real_T arn4ygznlx ; real_T
foapz3f1gp ; real_T k1dns1lhtr ; real_T bdufyngs0z ; real_T epcfokhqja ;
real_T ms4psfipsu ; real_T eujma4gurb ; real_T oapbefqol1 ; real_T peym1sqh5w
; real_T mcp3qy3qh1 ; real_T odbqoh1kbo ; real_T cdyb24riin ; real_T
geqsiyq0ae ; real_T buk4mce4wc ; real_T gkw3v2je2c ; real_T ah4t522etq [ 2 ]
; real_T bvtq2ilbrl ; real_T khgmpyjcwf ; real_T b1sh5asqq5 ; real_T
iyljq0p2q2 ; real_T a3ejw4k1vb [ 3 ] ; real_T jkanx1c2sy ; real_T eteakgjugc
; real_T jjz0dmgypl [ 2 ] ; real_T pktwyfaegj ; real_T kmavtzptxb ; real_T
mjafdcmdy1 ; real_T dypjdbgmol ; real_T fyveu4cgze [ 3 ] ; real_T mvpvh5z4vn
; real_T e23vbkc2br ; real_T ikmxhmo1xy [ 2 ] ; real_T bifrows3ko ; real_T
gurxs4gmgn ; real_T dubgfafbwh ; real_T d2qv1tdugi ; real_T bmd550nn1i [ 3 ]
; real_T ghhf5zgons ; real_T crwxe3fyj2 ; real_T okhrzumzrc ; real_T
ftkzr43zza ; real_T dxbfyhuf2d ; real_T c5xg25dykk ; real_T ex5tdiigau ;
real_T hxdgb1014z ; real_T jcmiv2o5uc ; real_T a1yjnjjcnf ; real_T cj1z4j4qf4
; real_T j1uiwy3djt ; real_T hvtpmx4w53 ; real_T kdzkh5hxbg ; real_T
bln3vroqur ; real_T hdvfrnkcmn ; real_T p2ai4f0o54 ; real_T a0k4henh31 ;
real_T nyms3o1twt ; jwoppf1s1t lfyyzy3mj4 ; lemzsljfxi im3skmxke2 ;
lemzsljfxi i1jub4ytlu ; lemzsljfxi l2otctcrwa ; lemzsljfxi p3atgr1lvy ;
fv54ow1i3z g0suhtc3bz ; jwoppf1s1t jiiczdlcrb ; lemzsljfxi oq2a2iz1om ;
lemzsljfxi n4yw4kkm3u ; lemzsljfxi hqbkpgyaw2 ; lemzsljfxi kl4qbbwlk2 ;
fv54ow1i3z iicqzjvjtu ; jwoppf1s1t i3kxfqtdpbp ; lemzsljfxi mikcvz5h1f ;
lemzsljfxi naitari34m ; lemzsljfxi c4bfgvlf1r ; lemzsljfxi cfxuytlxuwh ;
fv54ow1i3z eecdtyu2lcn ; } X ; typedef struct { real_T fakh1pyzk2 [ 6 ] ;
real_T pdhes0243g ; real_T bbqpxef5jj ; real_T iac0bbig40 [ 2 ] ; real_T
bkgemaqqxf [ 6 ] ; real_T muu4p2nsxg ; real_T b2y4k4jhrs ; real_T dqrbmqffu1
[ 2 ] ; real_T kciqokkdbp [ 6 ] ; real_T mz4c440sms ; real_T b2k3puejst ;
real_T bl1q553mat [ 2 ] ; real_T arn4ygznlx ; real_T foapz3f1gp ; real_T
k1dns1lhtr ; real_T bdufyngs0z ; real_T epcfokhqja ; real_T ms4psfipsu ;
real_T eujma4gurb ; real_T oapbefqol1 ; real_T peym1sqh5w ; real_T mcp3qy3qh1
; real_T odbqoh1kbo ; real_T cdyb24riin ; real_T geqsiyq0ae ; real_T
buk4mce4wc ; real_T gkw3v2je2c ; real_T ah4t522etq [ 2 ] ; real_T bvtq2ilbrl
; real_T khgmpyjcwf ; real_T b1sh5asqq5 ; real_T iyljq0p2q2 ; real_T
a3ejw4k1vb [ 3 ] ; real_T jkanx1c2sy ; real_T eteakgjugc ; real_T jjz0dmgypl
[ 2 ] ; real_T pktwyfaegj ; real_T kmavtzptxb ; real_T mjafdcmdy1 ; real_T
dypjdbgmol ; real_T fyveu4cgze [ 3 ] ; real_T mvpvh5z4vn ; real_T e23vbkc2br
; real_T ikmxhmo1xy [ 2 ] ; real_T bifrows3ko ; real_T gurxs4gmgn ; real_T
dubgfafbwh ; real_T d2qv1tdugi ; real_T bmd550nn1i [ 3 ] ; real_T ghhf5zgons
; real_T crwxe3fyj2 ; real_T okhrzumzrc ; real_T ftkzr43zza ; real_T
dxbfyhuf2d ; real_T c5xg25dykk ; real_T ex5tdiigau ; real_T hxdgb1014z ;
real_T jcmiv2o5uc ; real_T a1yjnjjcnf ; real_T cj1z4j4qf4 ; real_T j1uiwy3djt
; real_T hvtpmx4w53 ; real_T kdzkh5hxbg ; real_T bln3vroqur ; real_T
hdvfrnkcmn ; real_T p2ai4f0o54 ; real_T a0k4henh31 ; real_T nyms3o1twt ;
hjdigkutaj lfyyzy3mj4 ; puchu13zo3 im3skmxke2 ; puchu13zo3 i1jub4ytlu ;
puchu13zo3 l2otctcrwa ; puchu13zo3 p3atgr1lvy ; m4nuliemhl g0suhtc3bz ;
hjdigkutaj jiiczdlcrb ; puchu13zo3 oq2a2iz1om ; puchu13zo3 n4yw4kkm3u ;
puchu13zo3 hqbkpgyaw2 ; puchu13zo3 kl4qbbwlk2 ; m4nuliemhl iicqzjvjtu ;
hjdigkutaj i3kxfqtdpbp ; puchu13zo3 mikcvz5h1f ; puchu13zo3 naitari34m ;
puchu13zo3 c4bfgvlf1r ; puchu13zo3 cfxuytlxuwh ; m4nuliemhl eecdtyu2lcn ; }
XDot ; typedef struct { boolean_T fakh1pyzk2 [ 6 ] ; boolean_T pdhes0243g ;
boolean_T bbqpxef5jj ; boolean_T iac0bbig40 [ 2 ] ; boolean_T bkgemaqqxf [ 6
] ; boolean_T muu4p2nsxg ; boolean_T b2y4k4jhrs ; boolean_T dqrbmqffu1 [ 2 ]
; boolean_T kciqokkdbp [ 6 ] ; boolean_T mz4c440sms ; boolean_T b2k3puejst ;
boolean_T bl1q553mat [ 2 ] ; boolean_T arn4ygznlx ; boolean_T foapz3f1gp ;
boolean_T k1dns1lhtr ; boolean_T bdufyngs0z ; boolean_T epcfokhqja ;
boolean_T ms4psfipsu ; boolean_T eujma4gurb ; boolean_T oapbefqol1 ;
boolean_T peym1sqh5w ; boolean_T mcp3qy3qh1 ; boolean_T odbqoh1kbo ;
boolean_T cdyb24riin ; boolean_T geqsiyq0ae ; boolean_T buk4mce4wc ;
boolean_T gkw3v2je2c ; boolean_T ah4t522etq [ 2 ] ; boolean_T bvtq2ilbrl ;
boolean_T khgmpyjcwf ; boolean_T b1sh5asqq5 ; boolean_T iyljq0p2q2 ;
boolean_T a3ejw4k1vb [ 3 ] ; boolean_T jkanx1c2sy ; boolean_T eteakgjugc ;
boolean_T jjz0dmgypl [ 2 ] ; boolean_T pktwyfaegj ; boolean_T kmavtzptxb ;
boolean_T mjafdcmdy1 ; boolean_T dypjdbgmol ; boolean_T fyveu4cgze [ 3 ] ;
boolean_T mvpvh5z4vn ; boolean_T e23vbkc2br ; boolean_T ikmxhmo1xy [ 2 ] ;
boolean_T bifrows3ko ; boolean_T gurxs4gmgn ; boolean_T dubgfafbwh ;
boolean_T d2qv1tdugi ; boolean_T bmd550nn1i [ 3 ] ; boolean_T ghhf5zgons ;
boolean_T crwxe3fyj2 ; boolean_T okhrzumzrc ; boolean_T ftkzr43zza ;
boolean_T dxbfyhuf2d ; boolean_T c5xg25dykk ; boolean_T ex5tdiigau ;
boolean_T hxdgb1014z ; boolean_T jcmiv2o5uc ; boolean_T a1yjnjjcnf ;
boolean_T cj1z4j4qf4 ; boolean_T j1uiwy3djt ; boolean_T hvtpmx4w53 ;
boolean_T kdzkh5hxbg ; boolean_T bln3vroqur ; boolean_T hdvfrnkcmn ;
boolean_T p2ai4f0o54 ; boolean_T a0k4henh31 ; boolean_T nyms3o1twt ;
i3dogwilm3 lfyyzy3mj4 ; gpeibc1iz2 im3skmxke2 ; gpeibc1iz2 i1jub4ytlu ;
gpeibc1iz2 l2otctcrwa ; gpeibc1iz2 p3atgr1lvy ; jlvgnnbv0g g0suhtc3bz ;
i3dogwilm3 jiiczdlcrb ; gpeibc1iz2 oq2a2iz1om ; gpeibc1iz2 n4yw4kkm3u ;
gpeibc1iz2 hqbkpgyaw2 ; gpeibc1iz2 kl4qbbwlk2 ; jlvgnnbv0g iicqzjvjtu ;
i3dogwilm3 i3kxfqtdpbp ; gpeibc1iz2 mikcvz5h1f ; gpeibc1iz2 naitari34m ;
gpeibc1iz2 c4bfgvlf1r ; gpeibc1iz2 cfxuytlxuwh ; jlvgnnbv0g eecdtyu2lcn ; }
XDis ; typedef struct { real_T fakh1pyzk2 [ 6 ] ; real_T pdhes0243g ; real_T
bbqpxef5jj ; real_T iac0bbig40 [ 2 ] ; real_T bkgemaqqxf [ 6 ] ; real_T
muu4p2nsxg ; real_T b2y4k4jhrs ; real_T dqrbmqffu1 [ 2 ] ; real_T kciqokkdbp
[ 6 ] ; real_T mz4c440sms ; real_T b2k3puejst ; real_T bl1q553mat [ 2 ] ;
real_T arn4ygznlx ; real_T foapz3f1gp ; real_T k1dns1lhtr ; real_T bdufyngs0z
; real_T epcfokhqja ; real_T ms4psfipsu ; real_T eujma4gurb ; real_T
oapbefqol1 ; real_T peym1sqh5w ; real_T mcp3qy3qh1 ; real_T odbqoh1kbo ;
real_T cdyb24riin ; real_T geqsiyq0ae ; real_T buk4mce4wc ; real_T gkw3v2je2c
; real_T ah4t522etq [ 2 ] ; real_T bvtq2ilbrl ; real_T khgmpyjcwf ; real_T
b1sh5asqq5 ; real_T iyljq0p2q2 ; real_T a3ejw4k1vb [ 3 ] ; real_T jkanx1c2sy
; real_T eteakgjugc ; real_T jjz0dmgypl [ 2 ] ; real_T pktwyfaegj ; real_T
kmavtzptxb ; real_T mjafdcmdy1 ; real_T dypjdbgmol ; real_T fyveu4cgze [ 3 ]
; real_T mvpvh5z4vn ; real_T e23vbkc2br ; real_T ikmxhmo1xy [ 2 ] ; real_T
bifrows3ko ; real_T gurxs4gmgn ; real_T dubgfafbwh ; real_T d2qv1tdugi ;
real_T bmd550nn1i [ 3 ] ; real_T ghhf5zgons ; real_T crwxe3fyj2 ; real_T
okhrzumzrc ; real_T ftkzr43zza ; real_T dxbfyhuf2d ; real_T c5xg25dykk ;
real_T ex5tdiigau ; real_T hxdgb1014z ; real_T jcmiv2o5uc ; real_T a1yjnjjcnf
; real_T cj1z4j4qf4 ; real_T j1uiwy3djt ; real_T hvtpmx4w53 ; real_T
kdzkh5hxbg ; real_T bln3vroqur ; real_T hdvfrnkcmn ; real_T p2ai4f0o54 ;
real_T a0k4henh31 ; real_T nyms3o1twt ; hya1ektgr1 lfyyzy3mj4 ; gqot202hqa
im3skmxke2 ; gqot202hqa i1jub4ytlu ; gqot202hqa l2otctcrwa ; gqot202hqa
p3atgr1lvy ; n5ghq1rgtg g0suhtc3bz ; hya1ektgr1 jiiczdlcrb ; gqot202hqa
oq2a2iz1om ; gqot202hqa n4yw4kkm3u ; gqot202hqa hqbkpgyaw2 ; gqot202hqa
kl4qbbwlk2 ; n5ghq1rgtg iicqzjvjtu ; hya1ektgr1 i3kxfqtdpbp ; gqot202hqa
mikcvz5h1f ; gqot202hqa naitari34m ; gqot202hqa c4bfgvlf1r ; gqot202hqa
cfxuytlxuwh ; n5ghq1rgtg eecdtyu2lcn ; } CStateAbsTol ; typedef struct {
real_T i21pfec4o3 [ 2 ] ; real_T lrrzstkpcp ; real_T fbrb2vnaam ; real_T
e1u5prcrvo ; real_T etdw1mxhmd ; real_T ft1ifqthjr ; real_T gajmss54mf ;
real_T fordgzx11d ; real_T cixif3d2o2 ; real_T e5zwlekph0 ; real_T bz4v5aczor
; real_T gwnbtjcefr ; real_T hflwxtttzr ; real_T lcvcknx11q ; real_T
affr3k4yry ; real_T hj54hktqfl ; real_T frbcwzr3ia ; real_T ecgssxuzge ;
real_T dll2lwl2ru ; real_T pd1r43uxfi ; real_T f3dsmoravb ; real_T he1kmicjzz
; real_T a4x3goqsed ; real_T mb4kpxq35f ; real_T azumznwdh0 ; real_T
p3f5rk03vl ; real_T hjpb2sf2bf ; real_T h1b3wqn45g ; real_T facrdie2vn ;
real_T lonxgkwdle ; real_T cpg5o0hzrt ; real_T bjtvf0gyhj ; real_T ffgbf51505
; real_T mmqtgfxo03 ; real_T b0fbvjb1rl ; real_T mf1uglgwpf ; real_T
gk34guvsir ; real_T oml2wnhyom ; real_T kbkjog4hxx ; real_T h2ygpwjo55 ;
real_T iefkvnz2ot ; real_T ib1ug0dvfv ; real_T ckit25xm4d ; real_T ikcibmpbjc
; real_T dnayit4e52 ; real_T m5gurd0xjf ; real_T pvrf1wuep5 ; real_T
hl0qvnjmle ; real_T abxtcout01 ; real_T b4mnwywlpp ; real_T czdvx3fdti ;
real_T pazi22qgvl ; real_T ky3hxbhjli ; real_T hzjis4ixtb ; real_T of4ymib5lm
; real_T ncqoskgzlg ; real_T gdml4vbpnl ; real_T fv1sgp1paj ; real_T
lhfxuzxp01 ; real_T jvana3hk2j ; real_T ihv3zgvmg1 ; real_T bc4yjmq3dw ;
real_T ebtnz5lmbd ; real_T dbziltptva ; real_T cumlgtrfjm ; real_T dcqgzi14gw
; real_T ebv3t1jbdv ; real_T ewvy0zvwte ; real_T lixfgj3vy5 ; real_T
iaftdynbux ; real_T k3npp1pfjf ; real_T ht2yoxxeic ; real_T bmwcygbqo5 ;
mbi1khccur lfyyzy3mj4 ; mbi1khccur jiiczdlcrb ; mbi1khccur i3kxfqtdpbp ; }
ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
eachi032pd_ { real_T HF2_D ; real_T HF3_D ; } ; struct h54kqyhffp_ { real_T
HF5_D ; real_T HF6_D ; } ; struct atjhtdxhdy_ { real_T IF2_D ; real_T IF3_D ;
} ; struct bm5yxkrmv5_ { real_T IF5_D ; real_T IF6_D ; } ; struct mzjp5csrva_
{ real_T BF2_D ; real_T BF3_D ; } ; struct k5yxld1yx1_ { real_T BF5_D ;
real_T BF6_D ; } ; struct etvxweu2x5_ { real_T Mass2_D ; real_T
Mass2_D_hmvust5gzf ; real_T Mass3_D ; real_T Mass2_D_i3n5xqe03i ; real_T
Mass3_D_m13ccyn2hz ; real_T Mass4_D ; real_T Mass2_D_hhukxbo4s5 ; real_T
Mass3_D_lq2q34lidk ; real_T Mass4_D_ln2u3otdpn ; real_T Mass5_D ; real_T
Mass2_H ; real_T Mass2_H_nf44muc0pk ; real_T Mass3_H ; real_T
Mass2_H_fsnfqfykbe ; real_T Mass3_H_bd0tmjd4ep ; real_T Mass4_H ; real_T
Mass2_H_c405ssmlr4 ; real_T Mass3_H_eg0d1mo1i1 ; real_T Mass4_H_jwduj1nf5b ;
real_T Mass5_H ; real_T Mass2_K ; real_T Mass2_K_n5ie301oin ; real_T Mass3_K
; real_T Mass2_K_mj5s2gx4qf ; real_T Mass3_K_nflfda1cbj ; real_T Mass4_K ;
real_T Mass2_K_k4md0a2vvy ; real_T Mass3_K_ejvw5jsueq ; real_T
Mass4_K_dj4qkyirte ; real_T Mass5_K ; real_T Mass2_dth0 ; real_T
Mass2_dth0_n1wijkm53b ; real_T Mass3_dth0 ; real_T Mass2_dth0_jyjm530tk1 ;
real_T Mass3_dth0_bv0vn5dyrc ; real_T Mass4_dth0 ; real_T
Mass2_dth0_pbltnmyhis ; real_T Mass3_dth0_eq5g31rhav ; real_T
Mass4_dth0_oq0xxf535c ; real_T Mass5_dth0 ; real_T Ts_52_Y0 [ 4 ] ; real_T
dw_52_Y0 [ 4 ] ; real_T Integrator6_IC ; real_T Ts_52_Y0_gkoe0kawjs [ 4 ] ;
real_T dw_52_Y0_abvdxog1v2 [ 4 ] ; real_T Integrator6_IC_pli4mpap3v ; real_T
Integrator6_IC_mzbmk3wgxi ; real_T Ts_52_Y0_farrcz0qtu [ 4 ] ; real_T
dw_52_Y0_oz5qrjl0hn [ 4 ] ; real_T Integrator6_IC_b5cdfpqn4h ; real_T
Integrator6_IC_inch3awvdv ; real_T Integrator6_IC_b0eae1b4kg ; real_T
Ts_52_Y0_acrz5xeixu [ 4 ] ; real_T dw_52_Y0_cua0zcp0ln [ 4 ] ; real_T
Integrator6_IC_c31oei5fal ; real_T Integrator6_IC_bcj1qlgzjo ; real_T
Integrator6_IC_hi2spj0lwj ; real_T Integrator6_IC_ca4q4dfwww ; real_T Tm_g_Y0
; real_T Tr25_Y0 [ 4 ] ; real_T dw_52_Y0_eksthwp4ra [ 4 ] ; real_T
ctrl4_Value ; boolean_T ctrl7_Value ; boolean_T ctrl6_Value ; boolean_T
ctrl3_Value ; boolean_T ctrl2_Value ; } ; struct goxfauiosk_ { real_T Out1_Y0
; real_T StateSpace_A ; real_T StateSpace_B ; real_T StateSpace_C ; real_T
StateSpace_InitialCondition ; } ; struct nm45ujaypf_ { real_T uLl_q_Gain [ 3
] ; real_T u2_Value [ 3 ] ; real_T Integrator_IC ; real_T
uDLookupTable_tableData [ 2 ] ; real_T uDLookupTable_bp01Data [ 2 ] ; real_T
Constant1_Value ; real_T Lmq_Gain ; real_T uTT1e6s_Gain ; real_T uLl_d_Gain [
3 ] ; real_T u1_Value [ 3 ] ; real_T Integrator_IC_ayozevzpbr ; real_T
uDLookupTable_tableData_i2zfzseq4g [ 2 ] ; real_T
uDLookupTable_bp01Data_gyedwqazik [ 2 ] ; real_T Constant1_Value_ackdshn4cy ;
real_T Lmd_Gain ; real_T uTT1e6s_Gain_ojglsalmh4 ; real_T u1_Value_pe5pxiu5sw
[ 36 ] ; real_T u1_Value_icc0ye1jhp [ 36 ] ; real_T u3_Value ; real_T
u5_Value [ 36 ] ; real_T u2_Value_pkolckzy0i ; boolean_T
Constant1_Value_nmgvlz3nbv ; boolean_T Constant2_Value ; boolean_T
Constant3_Value ; } ; struct eaxkoxenm5_ { real_T Out1_Y0 ; real_T Out2_Y0 ;
} ; struct alg0v0bidu_ { real_T Out1_Y0 ; real_T Out2_Y0 ; } ; struct P_ {
real_T Ek ; real_T Pc ; real_T speedregulator_Dz ; real_T
speedregulator_Dz_mfgpmqgzg2 ; real_T speedregulator_Dz_fjbn4iiabn ; real_T
speedregulator_Kp ; real_T speedregulator_Kp_gccykbh0yu ; real_T
speedregulator_Kp_crs5bibdie ; real_T STG1_N ; real_T STG1_N_fse3yn4wyt ;
real_T STG1_N_jfntabyhu0 ; real_T speedregulator_Rp ; real_T
speedregulator_Rp_bqqacvanf5 ; real_T speedregulator_Rp_ljlv1thlh2 ; real_T
ThreePhaseBreaker_SwitchA ; real_T ThreePhaseBreaker_SwitchB ; real_T
ThreePhaseBreaker_SwitchC ; real_T speedregulator_Tsm ; real_T
speedregulator_Tsm_kx3odhbnpc ; real_T speedregulator_Tsm_ojahxcw44p ; real_T
speedregulator_g0 ; real_T speedregulator_g0_b4tdlya2jo ; real_T
speedregulator_g0_kw3dxhyhmf ; real_T STG1_gentype ; real_T
STG1_gentype_fmql50levs ; real_T STG1_gentype_fw3hs3su3z ; real_T
Switch_Threshold ; real_T Switch1_Threshold ; real_T Switch2_Threshold ;
real_T Integrator_IC [ 6 ] ; real_T Constant1_Value ; real_T Constant3_Value
; real_T Constant4_Value [ 36 ] ; real_T Switch_Threshold_c5kmeiffji ; real_T
changeIqIdcurrentsigns_Gain [ 6 ] ; real_T Integrator2_IC ; real_T web2_Gain
; real_T Integrator_IC_hpgpjt0nop ; real_T Integrator_IC_emuxkppjp0 [ 2 ] ;
real_T PU2A_Gain ; real_T Integrator_IC_bvi3ahtegq [ 6 ] ; real_T
Constant1_Value_cwyab01xdw ; real_T Constant3_Value_h0iqkhgyun ; real_T
Constant4_Value_nfs10s13hz [ 36 ] ; real_T Switch_Threshold_ewsie1q0xo ;
real_T changeIqIdcurrentsigns_Gain_mcjihstxnd [ 6 ] ; real_T
Integrator2_IC_k2g24to2ei ; real_T web2_Gain_lcgt1j5joi ; real_T
Integrator_IC_pucsnhcpsl ; real_T Integrator_IC_f1grwpn21h [ 2 ] ; real_T
PU2A_Gain_azmhbsp3d5 ; real_T Integrator_IC_gij5w20q3t [ 6 ] ; real_T
Constant1_Value_gfebqf10cs ; real_T Constant3_Value_jmi2b1y04h ; real_T
Constant4_Value_e053asnnap [ 36 ] ; real_T Switch_Threshold_he4u3f2dth ;
real_T changeIqIdcurrentsigns_Gain_gezrjo2oai [ 6 ] ; real_T
Integrator2_IC_jaqgdxnzf1 ; real_T web2_Gain_f1t1hge5pw ; real_T
Integrator_IC_cmny1zo24a ; real_T Integrator_IC_drqoe3ig4x [ 2 ] ; real_T
PU2A_Gain_jwwlz35jgo ; real_T StateSpace_A ; real_T StateSpace_B ; real_T
StateSpace_C ; real_T StateSpace_InitialCondition ; real_T
StateSpace_A_kuuagmu4tw ; real_T StateSpace_B_pvfaod0kzd ; real_T
StateSpace_C_jbglukssej ; real_T StateSpace_InitialCondition_ifndqs2dzt ;
real_T StateSpace_A_cnjaw2bwc4 ; real_T StateSpace_B_g2wsi13yu3 ; real_T
StateSpace_C_h3nfr2du2i ; real_T StateSpace_InitialCondition_fiqqx4xn4m ;
real_T StateSpace_A_dmpnzdcggb ; real_T StateSpace_B_je3n4nysp1 ; real_T
StateSpace_C_erhqcd3yut ; real_T StateSpace_InitialCondition_ltjalipc0r ;
real_T StateSpace_A_cgwhnwi1lk ; real_T StateSpace_B_kf5t1qpbev ; real_T
StateSpace_C_kxy3xw0jje ; real_T StateSpace_InitialCondition_i3ooklv4hw ;
real_T StateSpace_A_p115hqyqma ; real_T StateSpace_B_op3r1oivvr ; real_T
StateSpace_C_kbolkmh3op ; real_T StateSpace_InitialCondition_mqng3gryqh ;
real_T com_Value ; real_T C4_Value ; real_T LookUpTable_XData [ 4 ] ; real_T
LookUpTable_YData [ 4 ] ; real_T LookUpTable_Yat0 ; real_T Switch3_Threshold
; real_T Constant5_Value ; real_T C4_Value_nvdjz5243s ; real_T
LookUpTable_XData_kmcs344j1j [ 5 ] ; real_T LookUpTable_YData_fkv0qiz3iv [ 5
] ; real_T Switch3_Threshold_f1mmjkngez ; real_T C4_Value_pnyuipndxg ; real_T
LookUpTable_XData_ohhmiqbaf3 [ 5 ] ; real_T LookUpTable_YData_id2gp0uwqj [ 5
] ; real_T Switch3_Threshold_nnqr4pvbky ; real_T C4_Value_oo3moohz2g ; real_T
LookUpTable_XData_etcctsvmw3 [ 5 ] ; real_T LookUpTable_YData_hfimmiqrun [ 5
] ; real_T Switch3_Threshold_bxrxnkofap ; real_T StateSpace_P1_Size [ 2 ] ;
real_T StateSpace_P1 [ 1575 ] ; real_T StateSpace_P2_Size [ 2 ] ; real_T
StateSpace_P2 [ 1575 ] ; real_T StateSpace_P3_Size [ 2 ] ; real_T
StateSpace_P3 [ 3 ] ; real_T StateSpace_P4_Size [ 2 ] ; real_T StateSpace_P4
[ 9 ] ; real_T PSSmodel_Value ; real_T nomspeed_Value ; real_T
Integrator_IC_gmwlqri0qi ; real_T units_Gain ; real_T
nomspeed_Value_c0nk3zhzcj ; real_T Integrator_IC_pnvsf1ba1m ; real_T
units_Gain_g4mnkkbnfx ; real_T nomspeed_Value_izoa4dwj5u ; real_T
Integrator_IC_nl0jgal5ea ; real_T units_Gain_jccxsq1mba ; real_T
Integrator1_IC ; real_T theta_Gain ; real_T Integrator1_IC_p32eurgy5l ;
real_T theta_Gain_okb0e1taom ; real_T Integrator1_IC_bjb4q2iz5y ; real_T
theta_Gain_kqbezehmli ; real_T inv_Gain ; real_T Constant2_Value ; real_T
uLl_q_Gain [ 3 ] ; real_T Constant8_Value ; real_T Laqd_nosat_Value [ 2 ] ;
real_T Switch3_Threshold_pzemxjv5z4 ; real_T uLl_d_Gain [ 3 ] ; real_T
V2PU_Gain ; real_T Gain_Gain ; real_T Constant5_Value_byc02c1cb0 ; real_T
Lmqd_nosat_Value [ 2 ] ; real_T Switch2_Threshold_kl4mto40ys ; real_T
rad2deg_Gain ; real_T Gain_Gain_fuxiybkzq2 ; real_T Gain1_Gain ; real_T
outputformatting_Gain [ 18 ] ; real_T inv_Gain_f5iiny2kdh ; real_T
Constant2_Value_euai3peff4 ; real_T uLl_q_Gain_m4orsjlybo [ 3 ] ; real_T
Constant8_Value_nqzndlbmyn ; real_T Laqd_nosat_Value_ntxalhi1f0 [ 2 ] ;
real_T Switch3_Threshold_omnblshz1u ; real_T uLl_d_Gain_cjl2qp12zk [ 3 ] ;
real_T V2PU_Gain_jylzvxj0fw ; real_T Gain_Gain_enugkn2c1j ; real_T
Constant5_Value_juo455eqgt ; real_T Lmqd_nosat_Value_khr3l4ldnq [ 2 ] ;
real_T Switch2_Threshold_i4uiceoq4q ; real_T rad2deg_Gain_jsmpmrxmy1 ; real_T
Gain_Gain_mkjdsitib3 ; real_T Gain1_Gain_kcb1kj5lxc ; real_T
outputformatting_Gain_eurqkbk52k [ 18 ] ; real_T inv_Gain_o0k1xjmpyi ; real_T
Constant2_Value_jyqy0bxnpc ; real_T uLl_q_Gain_k2erowxigx [ 3 ] ; real_T
Constant8_Value_dry4cujolh ; real_T Laqd_nosat_Value_erv1vavdol [ 2 ] ;
real_T Switch3_Threshold_myji0ayfbe ; real_T uLl_d_Gain_hwqwx4zfxw [ 3 ] ;
real_T V2PU_Gain_iabdfw52ge ; real_T Gain_Gain_mfdsiezu4w ; real_T
Constant5_Value_bduiv5wz1d ; real_T Lmqd_nosat_Value_dd1sxxfkzn [ 2 ] ;
real_T Switch2_Threshold_cl5slpkzcf ; real_T rad2deg_Gain_bi21yr5jsd ; real_T
Gain_Gain_pvip314yc1 ; real_T Gain1_Gain_eevh35f1mr ; real_T
outputformatting_Gain_dax2g0f12l [ 18 ] ; real_T Pref2_Value ; real_T
Gain_Gain_pefifgifx1 ; real_T StateSpace_A_jeq012csbm ; real_T
StateSpace_B_dfggmx4udv ; real_T StateSpace_C_no0abjcm0z ; real_T
StateSpace_InitialCondition_m25r5xr5cb ; real_T StateSpace_A_ggc1gj50je ;
real_T StateSpace_B_fs2w14hsg3 ; real_T StateSpace_C_d2qsphy3r2 ; real_T
StateSpace_InitialCondition_hefobfpllp ; real_T StateSpace_A_o51r0ysq4r ;
real_T StateSpace_B_jovqv4vgdw ; real_T StateSpace_C_d442xxcprt ; real_T
StateSpace_InitialCondition_hwumlcdoea ; real_T PSSmodel4_Value ; real_T
PSSmodel3_Value ; real_T LFandIFspeedsensor_A [ 2 ] ; real_T
LFandIFspeedsensor_C [ 2 ] ; real_T Gain3_Gain ; real_T BF1_A ; real_T BF1_C
; real_T BF1_D ; real_T Constant_Value ; real_T Switch1_Threshold_k5puaipvcc
; real_T Gain4_Gain ; real_T BF7_A ; real_T BF7_C ; real_T BF7_D ; real_T
Switch2_Threshold_exksgoyntx ; real_T Gain_Gain_p20n5p05nq ; real_T
LimiteurBF_UpperSat ; real_T LimiteurBF_LowerSat ; real_T Gain5_Gain ; real_T
IF1_A ; real_T IF1_C ; real_T IF1_D ; real_T Switch1_Threshold_higbj4xflz ;
real_T Gain6_Gain ; real_T IF4_A ; real_T IF4_C ; real_T IF4_D ; real_T
Switch2_Threshold_dfewbkt1bp ; real_T Gain1_Gain_idvyeskg5d ; real_T
LimiteurIF_UpperSat ; real_T LimiteurIF_LowerSat ; real_T HFspeedsensor_A [ 3
] ; real_T HFspeedsensor_C [ 3 ] ; real_T Gain7_Gain ; real_T HF1_A ; real_T
HF1_C ; real_T HF1_D ; real_T Switch1_Threshold_bebm4nhf3m ; real_T
Gain8_Gain ; real_T HF4_A ; real_T HF4_C ; real_T HF4_D ; real_T
Switch2_Threshold_jfwrn52rvc ; real_T Gain2_Gain ; real_T LimiteurHF_UpperSat
; real_T LimiteurHF_LowerSat ; real_T Gain9_Gain ; real_T LimiteurVS_UpperSat
; real_T LimiteurVS_LowerSat ; real_T PSSmodel4_Value_fjb5jcvryv ; real_T
PSSmodel3_Value_kdkvzqxzai ; real_T LFandIFspeedsensor_A_pin3ldearr [ 2 ] ;
real_T LFandIFspeedsensor_C_buv4nfuqcm [ 2 ] ; real_T Gain3_Gain_pksauoc4if ;
real_T BF1_A_delndlu34a ; real_T BF1_C_mret0gzhdq ; real_T BF1_D_fdcfea2fgs ;
real_T Constant_Value_itoyuxxojl ; real_T Switch1_Threshold_iy1ylasral ;
real_T Gain4_Gain_b5ejcvbgpn ; real_T BF7_A_k4iveoc42w ; real_T
BF7_C_hdionlpawu ; real_T BF7_D_isjljmj01n ; real_T
Switch2_Threshold_had1z5prla ; real_T Gain_Gain_iiqaym2nmi ; real_T
LimiteurBF_UpperSat_o3x5bjfxqd ; real_T LimiteurBF_LowerSat_bwtnmvfggy ;
real_T Gain5_Gain_pa1hmzxuhn ; real_T IF1_A_f1m02udkpo ; real_T
IF1_C_gothl2dsz2 ; real_T IF1_D_cbrew023nu ; real_T
Switch1_Threshold_asvniztsk0 ; real_T Gain6_Gain_kuchg0djog ; real_T
IF4_A_iuvfdymbvl ; real_T IF4_C_dnkclubxdv ; real_T IF4_D_ku2bv43j2z ; real_T
Switch2_Threshold_iuh5g0jt4y ; real_T Gain1_Gain_kpsagqhnrs ; real_T
LimiteurIF_UpperSat_es2hi1s5ol ; real_T LimiteurIF_LowerSat_frurdeaktw ;
real_T HFspeedsensor_A_a5pa30ijfz [ 3 ] ; real_T HFspeedsensor_C_cvaohhv2zs [
3 ] ; real_T Gain7_Gain_hfww3e14xq ; real_T HF1_A_ats4wicoyd ; real_T
HF1_C_axzmn5jcwg ; real_T HF1_D_lpa0kagdl5 ; real_T
Switch1_Threshold_cabrjj1hlu ; real_T Gain8_Gain_ledih0qio3 ; real_T
HF4_A_pzmdjli40c ; real_T HF4_C_dho02dhy1r ; real_T HF4_D_pykzdopjnv ; real_T
Switch2_Threshold_h5nmitp3v3 ; real_T Gain2_Gain_nxoox2fjqq ; real_T
LimiteurHF_UpperSat_orzjd4jfpc ; real_T LimiteurHF_LowerSat_pd50slxu4g ;
real_T Gain9_Gain_ejmilwkpo4 ; real_T LimiteurVS_UpperSat_boied3g5cs ; real_T
LimiteurVS_LowerSat_jaabg1r2wp ; real_T PSSmodel4_Value_iu4cftfbim ; real_T
PSSmodel3_Value_egr1tn4q2z ; real_T LFandIFspeedsensor_A_ltmtanpzvy [ 2 ] ;
real_T LFandIFspeedsensor_C_kjjmaj00ni [ 2 ] ; real_T Gain3_Gain_n2pt41nnox ;
real_T BF1_A_hzuipfutey ; real_T BF1_C_obmwkcnbyp ; real_T BF1_D_cgj4uagvg5 ;
real_T Constant_Value_ctiu3u5y5j ; real_T Switch1_Threshold_libenmo5pe ;
real_T Gain4_Gain_odb1vf4uhu ; real_T BF7_A_fytycfzjwj ; real_T
BF7_C_kyraijnv01 ; real_T BF7_D_fvct4fi4cx ; real_T
Switch2_Threshold_pcnlvlyswe ; real_T Gain_Gain_ctphntsqal ; real_T
LimiteurBF_UpperSat_drtpw0igsw ; real_T LimiteurBF_LowerSat_jfgwt1rrfd ;
real_T Gain5_Gain_fn43br2gtw ; real_T IF1_A_phvbzobwdk ; real_T
IF1_C_kmsj2ku5gb ; real_T IF1_D_l3skmf2c2r ; real_T
Switch1_Threshold_ec4sedlub3 ; real_T Gain6_Gain_nkqgyjsyfz ; real_T
IF4_A_eeuo01iivz ; real_T IF4_C_lgdhq5amog ; real_T IF4_D_fg0nqcqdtw ; real_T
Switch2_Threshold_jqo3lyfm1q ; real_T Gain1_Gain_esozxtfnfc ; real_T
LimiteurIF_UpperSat_omde2wyowl ; real_T LimiteurIF_LowerSat_akpawp2za0 ;
real_T HFspeedsensor_A_ikmxjaf5ry [ 3 ] ; real_T HFspeedsensor_C_pntjpd4nwy [
3 ] ; real_T Gain7_Gain_gxcwnohj2f ; real_T HF1_A_fo2gh2j44s ; real_T
HF1_C_jyxse3hr4b ; real_T HF1_D_n42t5rhshz ; real_T
Switch1_Threshold_osbdbipauw ; real_T Gain8_Gain_gegvo3d2mr ; real_T
HF4_A_ib3yx1zjd5 ; real_T HF4_C_elkx4prals ; real_T HF4_D_jtnwh4dwkp ; real_T
Switch2_Threshold_o0evjikyci ; real_T Gain2_Gain_k2ogij3rhh ; real_T
LimiteurHF_UpperSat_ox4qdslkjt ; real_T LimiteurHF_LowerSat_pfuuttiq4e ;
real_T Gain9_Gain_jcvgntwng5 ; real_T LimiteurVS_UpperSat_no510emuaw ; real_T
LimiteurVS_LowerSat_lwvbmeuwma ; real_T u1_Gain [ 2 ] ; real_T units1_Gain ;
real_T u1_Gain_dsjh5g5yc4 [ 2 ] ; real_T units1_Gain_kvujbaswne ; real_T
u1_Gain_o5iyvup55k [ 2 ] ; real_T units1_Gain_cs0eyumiya ; real_T
Gain1_Gain_fkz5w2tg5q ; real_T Gain2_Gain_gtonf3ckiq ; real_T
Gain3_Gain_mtexuntqgn ; real_T Vref1_Value ; real_T Vf0ka_Value ; real_T
StateSpace_A_bpl4qcssmc ; real_T StateSpace_B_birgtrkrqe ; real_T
StateSpace_C_di3hwzbffg ; real_T StateSpace_InitialCondition_k0lpwmqnhh ;
real_T StateSpace_A_msqka2ahep ; real_T StateSpace_B_klk423dskp ; real_T
StateSpace_C_jwr2xjjnqu ; real_T StateSpace_D ; real_T
StateSpace_InitialCondition_jzsa1qw0wj ; real_T StateSpace_A_hmcdkdmyej ;
real_T StateSpace_B_apslzpl55z ; real_T StateSpace_C_ktfq31p0ba ; real_T
StateSpace_InitialCondition_dfgndrpfvg ; real_T Constant_Value_hnkts1ewpw ;
real_T Constant1_Value_a0tp1s1pqn ; real_T Constant3_Value_i353yd2bw1 ;
real_T Vfdmax1_Gain ; real_T Vfdmax_Gain ; real_T Servomotorposition_UpperSat
; real_T Servomotorposition_LowerSat ; real_T Pboil_Value ; real_T
Gain4_Gain_ckvhezqqfa ; real_T Gain3_Gain_pymxmudgj4 ; real_T
Gain2_Gain_outjdxfcu2 ; real_T Gain_Gain_ln2utldgfb ; real_T Pref1_Value ;
real_T wref_Value ; real_T StateSpace_A_dxwbmovx23 ; real_T
StateSpace_B_hyavqx1h3s ; real_T StateSpace_C_korx2z4ude ; real_T
StateSpace_InitialCondition_idtqzsy2gb ; real_T
Servomotorspeedlimits_UpperSat ; real_T Servomotorspeedlimits_LowerSat ;
real_T Constant4_Value_dcdo20ugsh ; real_T N_Gain ; real_T
Constant2_Value_jklb4y5fxh ; real_T Constant6_Value [ 36 ] ; real_T
Gain1_Gain_bdpmc35an0 ; real_T u1_Value [ 36 ] ; real_T
Switch1_Threshold_jdvnk5zpxn ; real_T Vkd0Vkq10Vkq20_Value [ 3 ] ; real_T
wbase_Gain ; real_T Gain1_Gain_b2sbq2m1gv ; real_T uL2_pu_Gain ; real_T
Gain3_Gain_el30n1r0jj [ 2 ] ; real_T R2_puL2_puX2R230_Gain ; real_T
Gain4_Gain_f45nyyrnu5 ; real_T u_Pb_Gain ; real_T F1_Gain ; real_T u_2H_Gain
; real_T web1_Gain ; real_T web3_Gain ; real_T donotdeletethisgain_Gain ;
real_T donotdeletethisgain_Gain_htolkq00zs ; real_T
donotdeletethisgain_Gain_ksnznlzpeb ; real_T Kv1_Gain ; real_T
donotdeletethisgain_Gain_hcs0kz04b2 ; real_T
donotdeletethisgain_Gain_m2stcq2ehc ; real_T
donotdeletethisgain_Gain_nrba34cian ; real_T Kv_Gain ; real_T K_Gain ; real_T
Gain5_Gain_gzq4wqubv2 ; real_T Gain1_Gain_n2c2zc5fut ; real_T
donotdeletethisgain_Gain_kuevcf3sdx ; real_T
donotdeletethisgain_Gain_mnpw1uhtyf ; real_T a3_Gain ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
Delay_InitialCondition ; real_T a4_Gain ; real_T Constant_Value_kkpfkdhxzv ;
real_T Constant3_Value_kvcy0floga ; real_T Constant4_Value_aqjbum4lqh ;
real_T Constant5_Value_o4i2izixfm ; real_T Constant6_Value_a00wsihizx ;
real_T Switch_Threshold_ppvr14hokg ; real_T Switch1_Threshold_j0k2owrzrd ;
real_T StateSpace_A_dglmovmyfw ; real_T StateSpace_B_outw5usqe2 ; real_T
StateSpace_C_jrv0j0u0g0 ; real_T StateSpace_D_dskmapuus5 ; real_T
StateSpace_InitialCondition_b2fyvswv1j ; real_T Vref2_Value ; real_T
Vf0ka_Value_jt5grxyxsb ; real_T StateSpace_A_kzs0ec1ban ; real_T
StateSpace_B_how30ag3l4 ; real_T StateSpace_C_dmxkpndill ; real_T
StateSpace_InitialCondition_jzj00ak32w ; real_T StateSpace_A_jp0njyzlup ;
real_T StateSpace_B_lwav2dkmtq ; real_T StateSpace_C_hidglamx2i ; real_T
StateSpace_D_jddjnrx222 ; real_T StateSpace_InitialCondition_l4ut445mc4 ;
real_T StateSpace_A_frz34winug ; real_T StateSpace_B_ojnyn252w3 ; real_T
StateSpace_C_car22bvded ; real_T StateSpace_InitialCondition_ooah045sog ;
real_T Constant_Value_pmj3naht0p ; real_T Constant1_Value_bwnptvelyn ; real_T
Constant3_Value_gl44ovqaqa ; real_T Vfdmax1_Gain_o4xrs40ghl ; real_T
Vfdmax_Gain_mmgottnogm ; real_T Servomotorposition_UpperSat_g2viti3ij0 ;
real_T Servomotorposition_LowerSat_flomn3kebp ; real_T Pboil_Value_efboupdpwe
; real_T Gain4_Gain_nsyra3kfe1 ; real_T Gain3_Gain_infnel21fz ; real_T
Gain2_Gain_o21izxvyzr ; real_T Gain_Gain_jrkxnsh34l ; real_T
Pref2_Value_hzyk4t5t4c ; real_T wref_Value_kuqrxkgpnf ; real_T
StateSpace_A_bw5ufveqx1 ; real_T StateSpace_B_astnbpdao1 ; real_T
StateSpace_C_dkf5nbj2xm ; real_T StateSpace_InitialCondition_gf0hqls5d3 ;
real_T Servomotorspeedlimits_UpperSat_hxtjahgvcj ; real_T
Servomotorspeedlimits_LowerSat_pqcubg4tor ; real_T Constant4_Value_cuvq2updaf
; real_T N_Gain_cfrqi4f2h5 ; real_T Constant2_Value_kpilmp02lc ; real_T
Constant6_Value_h1t5q1m1tn [ 36 ] ; real_T Gain1_Gain_mhvdo1wgna ; real_T
u1_Value_h4jujbq1rl [ 36 ] ; real_T Switch1_Threshold_j1odu5aueg ; real_T
Vkd0Vkq10Vkq20_Value_dxtsp2nol1 [ 3 ] ; real_T wbase_Gain_mn3g0d5nog ; real_T
Gain1_Gain_db2dnxw4x5 ; real_T uL2_pu_Gain_amo3vcbbid ; real_T
Gain3_Gain_niopovboru [ 2 ] ; real_T R2_puL2_puX2R230_Gain_ofv3x04bws ;
real_T Gain4_Gain_jakiacafsa ; real_T u_Pb_Gain_n32fud0ir1 ; real_T
F1_Gain_e3qbzisiku ; real_T u_2H_Gain_dwgaxjw5ex ; real_T
web1_Gain_fyhekbrm5i ; real_T web3_Gain_dhjkloyi5f ; real_T
donotdeletethisgain_Gain_bfl2dczmi1 ; real_T
donotdeletethisgain_Gain_espx2u33a1 ; real_T a3_Gain_jupury5wlc ; real_T
Saturation1_UpperSat_nk2y2hmxxu ; real_T Saturation1_LowerSat_hvszs1cibi ;
real_T Delay_InitialCondition_mjzvst1qqx ; real_T a4_Gain_flo45vukkm ; real_T
Constant_Value_cbsij1nyou ; real_T Constant3_Value_jzoklkoczu ; real_T
Constant4_Value_hap2iayqcd ; real_T Constant5_Value_gh1uwbobyi ; real_T
Constant6_Value_lsq1qxtpqd ; real_T Switch_Threshold_bku4vfxvxp ; real_T
Switch1_Threshold_eb5gwrxtw4 ; real_T StateSpace_A_dtg2q35zqx ; real_T
StateSpace_B_jr1it4y00u ; real_T StateSpace_C_pkwfftnwsw ; real_T
StateSpace_D_gx5tzuqkcz ; real_T StateSpace_InitialCondition_hmq15ssacn ;
real_T Vref3_Value ; real_T Vf0ka_Value_ci3dvxvfpj ; real_T
StateSpace_A_mbsd5owv4o ; real_T StateSpace_B_jxuycgm1ze ; real_T
StateSpace_C_adz4hdkoya ; real_T StateSpace_InitialCondition_i2mtcc4jn1 ;
real_T StateSpace_A_i0w0v1ng4v ; real_T StateSpace_B_ngij4ofkdf ; real_T
StateSpace_C_jjr5vxwkid ; real_T StateSpace_D_bvhuekh5r3 ; real_T
StateSpace_InitialCondition_bj4ax5hyxu ; real_T StateSpace_A_ox53hkb1dd ;
real_T StateSpace_B_pbwys2dgq0 ; real_T StateSpace_C_np4cp0rxto ; real_T
StateSpace_InitialCondition_an3kqgeozj ; real_T Constant_Value_ojcjd2bffn ;
real_T Constant1_Value_pgowlwbezc ; real_T Constant3_Value_dyzgchxzkc ;
real_T Vfdmax1_Gain_j4eezc0ikw ; real_T Vfdmax_Gain_dvpbms4hqi ; real_T
Servomotorposition_UpperSat_natik5gvim ; real_T
Servomotorposition_LowerSat_ira4c4d5cb ; real_T Pboil_Value_mqnhhubr4t ;
real_T Gain4_Gain_ozz2n2j0ij ; real_T Gain3_Gain_oxb12t5li3 ; real_T
Gain2_Gain_bomrjvzlbj ; real_T Gain_Gain_barbsyuone ; real_T Pref3_Value ;
real_T wref_Value_mav3u2ccum ; real_T StateSpace_A_msojirhjk3 ; real_T
StateSpace_B_oc4vbszu10 ; real_T StateSpace_C_gzgmgqpmq4 ; real_T
StateSpace_InitialCondition_gzvtpd02iz ; real_T
Servomotorspeedlimits_UpperSat_llv5tjky0e ; real_T
Servomotorspeedlimits_LowerSat_epl2fm4hc2 ; real_T Constant4_Value_pjhbvkf5yy
; real_T N_Gain_pai5mer4q5 ; real_T Constant2_Value_ppwzngecez ; real_T
Constant6_Value_clv2lszg0g [ 36 ] ; real_T Gain1_Gain_mzl4axpymz ; real_T
u1_Value_ncrdtvkqtx [ 36 ] ; real_T Switch1_Threshold_hrf4ang0bl ; real_T
Vkd0Vkq10Vkq20_Value_dixv2s2wrq [ 3 ] ; real_T wbase_Gain_dvfhsfadsc ; real_T
Gain1_Gain_ma2jvlkzmr ; real_T uL2_pu_Gain_c3v2wolj3k ; real_T
Gain3_Gain_dxmzzi0v1s [ 2 ] ; real_T R2_puL2_puX2R230_Gain_l32hr22yzu ;
real_T Gain4_Gain_aygiaplzkp ; real_T u_Pb_Gain_abjfl00hgc ; real_T
F1_Gain_f13cuaqdbe ; real_T u_2H_Gain_bfgz3otbwj ; real_T
web1_Gain_aqucte2piw ; real_T web3_Gain_idhtddsq33 ; real_T
donotdeletethisgain_Gain_ihssgoipbr ; real_T
donotdeletethisgain_Gain_ctih3wssfd ; real_T a3_Gain_i425ejijaa ; real_T
Saturation1_UpperSat_iy2bpppzxt ; real_T Saturation1_LowerSat_i0053t3rah ;
real_T Delay_InitialCondition_io0pemxg3l ; real_T a4_Gain_fen25jckof ; real_T
Constant_Value_l4bqxc0sjs ; real_T Constant3_Value_c1uved1lw5 ; real_T
Constant4_Value_cx5pwu4z03 ; real_T Constant5_Value_huezfbtji2 ; real_T
Constant6_Value_idmny2apeg ; real_T Switch_Threshold_nvvk5wxpt2 ; real_T
Switch1_Threshold_kf2ombnwm2 ; real_T HitCrossing_Offset ; real_T
HitCrossing_Offset_ob1hdw3rea ; real_T HitCrossing_Offset_ptpe5pr1gg ; real_T
HitCrossing_Offset_exte2lr0fo ; creal_T SwitchCurrents_Value [ 3 ] ; creal_T
Gain2_Gain_hkzhczsimv ; creal_T a2_Gain ; creal_T a_Gain ; creal_T
Gain2_Gain_i5y4vbvcfk ; creal_T a2_Gain_hwupnoab4s ; creal_T
a_Gain_fjdmgsyium ; creal_T Gain2_Gain_inkkx3wv0g ; creal_T
a2_Gain_okuzjezrwu ; creal_T a_Gain_btx4wcssk2 ; creal_T a2_Gain_hdpbuksf2w ;
creal_T a2_Gain_gooewqhr41 ; creal_T a2_Gain_dwoclxyn35 ; creal_T a23_Gain ;
creal_T Gain2_Gain_okd3wig2v4 ; creal_T a23_Gain_n31xyh4pll ; creal_T
Gain2_Gain_a3du3utrce ; creal_T a23_Gain_ba0lkcbkw1 ; creal_T
Gain2_Gain_jeblpkwxie ; creal_T a3_Gain_ne4zcnjncu ; creal_T
a2_Gain_hxseeguaop ; creal_T a3_Gain_pwfbcv2hdq ; creal_T a2_Gain_j4nltdk5ac
; creal_T a3_Gain_jezgxgj35h ; creal_T a2_Gain_bejh0zzpx5 ; uint32_T
Delay_DelayLength ; uint32_T Delay_DelayLength_e4tbatqiqo ; uint32_T
Delay_DelayLength_otginlrv2x ; boolean_T Constant1_Value_kkwfuxsc30 ;
boolean_T Constant1_Value_bcir5gue4t ; boolean_T Constant1_Value_po4mycliud ;
boolean_T Constant1_Value_pe5it1zc1u ; boolean_T Constant2_Value_jdgevhosgz ;
boolean_T Constant3_Value_pc0rbmlcvp ; boolean_T Constant4_Value_b34iavgaxx ;
boolean_T Constant1_Value_o4ktpjp1og ; boolean_T Constant2_Value_jfqnsyijuf ;
boolean_T Constant3_Value_ggyia03vvy ; boolean_T Constant4_Value_a04jhxah0h ;
boolean_T Constant1_Value_bzml0rbttb ; boolean_T Constant2_Value_aueheou35d ;
boolean_T Constant3_Value_m1sgoaygio ; boolean_T Constant4_Value_igllmua4rz ;
alg0v0bidu iwezxor5da ; eaxkoxenm5 al5ms3ycop ; nm45ujaypf lfyyzy3mj4 ;
goxfauiosk im3skmxke2 ; goxfauiosk i1jub4ytlu ; goxfauiosk l2otctcrwa ;
goxfauiosk p3atgr1lvy ; etvxweu2x5 g0suhtc3bz ; k5yxld1yx1 mtlhcioyxm ;
mzjp5csrva iajwi2yieg ; bm5yxkrmv5 ivzbiu131n ; atjhtdxhdy cnotxc2z3h ;
h54kqyhffp fdljmutgrr ; eachi032pd gsfdft5hdw ; alg0v0bidu civchsdznw ;
eaxkoxenm5 emv01xexxw ; nm45ujaypf jiiczdlcrb ; goxfauiosk oq2a2iz1om ;
goxfauiosk n4yw4kkm3u ; goxfauiosk hqbkpgyaw2 ; goxfauiosk kl4qbbwlk2 ;
etvxweu2x5 iicqzjvjtu ; k5yxld1yx1 cmxdysxk15 ; mzjp5csrva b3kk3xvbzl ;
bm5yxkrmv5 hkobjilnmt ; atjhtdxhdy ako1qu1fpl ; h54kqyhffp osligu4cvh ;
eachi032pd fxig4dac3b ; alg0v0bidu okacab3hemp ; eaxkoxenm5 agyrpuacxw3 ;
nm45ujaypf i3kxfqtdpbp ; goxfauiosk mikcvz5h1f ; goxfauiosk naitari34m ;
goxfauiosk c4bfgvlf1r ; goxfauiosk cfxuytlxuwh ; etvxweu2x5 eecdtyu2lcn ;
k5yxld1yx1 eaz24jybtas ; mzjp5csrva nwwecupcxr3 ; bm5yxkrmv5 n12bdjrzo2e ;
atjhtdxhdy p5n4z0qa43g ; h54kqyhffp brervxhrpps ; eachi032pd pu5sgumjsdm ; }
; extern const creal_T a1_IEEE9_Ctest_RGND_Complex ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
a1_IEEE9_Ctest_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
