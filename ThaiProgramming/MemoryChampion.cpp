#include <bits/stdc++.h>
using namespace std;

int main(){
      unsigned long long int arr[] = {13,
                  118,
                  545,
                  1509,
                  3469,
                  7024,
                  12581,
                  20915,
                  33409,
                  49702,
                  72694,
                  101222,
                  139157,
                  185294,
                  244054,
                  314398,
                  399338,
                  501496,
                  622946,
                  759912,
                  921904,
                  1108923,
                  1327873,
                  1569194,
                  1852763,
                  2162714,
                  2513709,
                  2901761,
                  3345869,
                  3833028,
                  4371780,
                  4964461,
                  5615423,
                  6310688,
                  7085617,
                  7919347,
                  8857938,
                  9855251,
                  10952601,
                  12104301,
                  13380647,
                  14732111,
                  16203283,
                  17741222,
                  19400708,
                  21187701,
                  23104260,
                  25102987,
                  27279037,
                  29553179,
                  32014765,
                  34571983,
                  37351103,
                  40221540,
                  43312731,
                  46528546,
                  49982418,
                  53576096,
                  57402375,
                  61346086,
                  65618023,
                  70016576,
                  74653326,
                  79486300,
                  84565602,
                  89874468,
                  95511909,
                  101335040,
                  107405031,
                  113736464,
                  120483823,
                  127346811,
                  134651747,
                  142228659,
                  150044483,
                  158196125,
                  166661371,
                  175482713,
                  184765932,
                  194199161,
                  204177448,
                  214499010,
                  225240085,
                  236192312,
                  247640913,
                  259531735,
                  271883010,
                  284529737,
                  297775951,
                  311277249,
                  325395830,
                  339877940,
                  354966365,
                  370472390,
                  386476643,
                  402938353,
                  420086259,
                  437599825,
                  455737174,
                  474312274,
                  493745360,
                  513566935,
                  534198549,
                  555116890,
                  576674737,
                  599055481,
                  622283312,
                  645549294,
                  670068824,
                  694858927,
                  720586163,
                  746776357,
                  774028775,
                  801671046,
                  830222047,
                  859543585,
                  889583437,
                  920418037,
                  952163253,
                  984475999,
                  1017949782,
                  1051986354,
                  1087084397,
                  1122860563,
                  1159733876,
                  1197111199,
                  1235959900,
                  1275290645,
                  1315758276,
                  1356960171,
                  1399646010,
                  1442565680,
                  1486909534,
                  1532218196,
                  1578688946,
                  1625838653,
                  1674581369,
                  1723736279,
                  1774493089,
                  1825786076,
                  1878820002,
                  1932909510,
                  1988044009,
                  2043955212,
                  2101579056,
                  2160251456,
                  2219881009,
                  2280999893,
                  2343878010,
                  2406869230,
                  2472292494,
                  2538187588,
                  2605740993,
                  2674210692,
                  2744622162,
                  2816079262,
                  2889499735,
                  2964035397,
                  3040236096,
                  3116901716,
                  3195807973,
                  3275994452,
                  3358424252,
                  3441633967,
                  3526519993,
                  3612951980,
                  3701552433,
                  3790358068,
                  3881919665,
                  3974368296,
                  4068939029,
                  4165274346,
                  4263434773,
                  4362950394,
                  4463903329,
                  4566460111,
                  4671827124,
                  4778330222,
                  4887059591,
                  4996497098,
                  5109220388,
                  5222520415,
                  5338787671,
                  5456296974,
                  5576105291,
                  5697798743,
                  5821604223,
                  5947311534,
                  6074755009,
                  6203665552,
                  6336457741,
                  6470057173,
                  6606944581,
                  6745171414,
                  6885525888,
                  7027452083,
                  7172627965,
                  7318415955,
                  7468449860,
                  7619095003,
                  7773640146,
                  7929579180,
                  8087874577,
                  8247955669,
                  8411690896,
                  8577499706,
                  8745773360,
                  8914901305,
                  9087713661,
                  9261828131,
                  9441094751,
                  9621660292,
                  9805232046,
                  9991698312,
                  10180394760,
                  10370514446,
                  10564628751,
                  10761126284,
                  10960941595,
                  11161562829,
                  11366606245,
                  11573706637,
                  11784774291,
                  11996818873,
                  12212624006,
                  12431759402,
                  12654476058,
                  12878132821,
                  13106908641,
                  13336954656,
                  13570479504,
                  13806856855,
                  14047659884,
                  14289559224,
                  14537053451,
                  14785757085,
                  15039013278,
                  15293812025,
                  15554242600,
                  15815008690,
                  16082079914,
                  16350849561,
                  16623621031,
                  16898807908,
                  17178373989,
                  17460514660,
                  17747043319,
                  18035998465,
                  18330403672,
                  18626529375,
                  18928243463,
                  19230342350,
                  19538144114,
                  19849619655,
                  20164258661,
                  20482593494,
                  20806054897,
                  21131498960,
                  21462124839,
                  21794509831,
                  22132974275,
                  22474808767,
                  22822220843,
                  23169113060,
                  23523083231,
                  23880544311,
                  24243250433,
                  24608444261,
                  24979649054,
                  25351983384,
                  25732482306,
                  26113941555,
                  26500096701,
                  26891156744,
                  27285898133,
                  27683890239,
                  28090252153,
                  28497985599,
                  28911322268,
                  29326525796,
                  29750393964,
                  30175734134,
                  30608977588,
                  31044780534,
                  31484857570,
                  31928963727,
                  32378760544,
                  32830922924,
                  33291579985,
                  33753933892,
                  34224359072,
                  34698090800,
                  35178146180,
                  35659466911,
                  36148892604,
                  36641805539,
                  37139508896,
                  37644192503,
                  38152709698,
                  38662858866
      };
      int n;cin >> n;
      for(int i = 0;i < n;i++){
            int temp;
            cin >> temp;
            cout << arr[temp - 1] << "\n";
      }
      return 0;
}