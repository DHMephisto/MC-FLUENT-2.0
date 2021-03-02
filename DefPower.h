#include "udf.h"

real Power_1[10] = {0.572991, 0.849614, 1.31469, 1.52349, 1.5997, 1.74416, 1.46507, 1.18308, 0.80925, 1.63042e-322};
real Power_2[10] = {3.82299, 5.75099, 8.23848, 10.2903, 11.3278, 11.5974, 10.2971, 8.34156, 5.74443, 4.79244e-322};
real Power_3[10] = {523.065, 1029.87, 1510.31, 1889.04, 2100.15, 2103.01, 1878.18, 1513.19, 1042.04, 4.79244e-322};
real Power_6[10] = {0.587651, 0.912155, 1.2836, 1.59616, 1.74882, 1.78294, 1.63494, 1.35264, 0.945748, 4.79244e-322};
real Power_7[10] = {3.87021, 5.84324, 8.65965, 11.0719, 11.7653, 11.9216, 10.8532, 8.89913, 5.89518, 4.79244e-322};
real Power_8[10] = {539.922, 1077.83, 1577.14, 1965.95, 2197.62, 2202.98, 1964.85, 1571.48, 1092.73, 4.79244e-322};
real Power_11[10] = {0.615957, 0.830081, 1.20687, 1.56393, 1.79002, 1.6196, 1.52746, 1.18736, 0.819874, 4.79244e-322};
real Power_12[10] = {3.7651, 5.54348, 8.45247, 10.2778, 11.9914, 11.5184, 10.5165, 8.34842, 5.62032, 4.79244e-322};
real Power_13[10] = {522.224, 1032.31, 1512.77, 1888.68, 2104.9, 2102, 1884.37, 1512.43, 1043.3, 4.79244e-322};
real Power_16[10] = {0.636078, 0.946079, 1.24079, 1.53987, 1.78288, 1.73215, 1.56406, 1.28195, 0.83355, 4.79244e-322};
real Power_17[10] = {4.12154, 5.93592, 8.6356, 10.6044, 12.1616, 11.8733, 10.5209, 8.48857, 5.8313, 4.79244e-322};
real Power_18[10] = {545.405, 1083.51, 1570.57, 1963.99, 2193.09, 2191.94, 1959.62, 1578.67, 1088.64, 4.79244e-322};
real Power_21[10] = {0.572153, 0.851633, 1.24181, 1.64161, 1.75197, 1.73442, 1.60565, 1.26772, 0.881996, 4.79244e-322};
real Power_22[10] = {3.83773, 5.84937, 8.47647, 10.8376, 11.7703, 12.2751, 11.0666, 8.57476, 6.16677, 4.79244e-322};
real Power_23[10] = {545.651, 1075.29, 1580.97, 1977.87, 2187.63, 2191.87, 1964.05, 1582.02, 1084.78, 4.79244e-322};
real Power_26[10] = {0.612183, 0.799141, 1.25455, 1.52894, 1.70658, 1.62131, 1.51357, 1.35424, 0.865431, 4.79244e-322};
real Power_27[10] = {3.75189, 5.6633, 8.13657, 10.3907, 11.4016, 11.4515, 10.2014, 8.35045, 5.61086, 4.79244e-322};
real Power_28[10] = {520.164, 1034.07, 1509.61, 1886.36, 2099.37, 2095.01, 1883.65, 1514.84, 1043.25, 4.79244e-322};
real Power_31[10] = {0.640736, 0.840619, 1.23508, 1.5568, 1.82355, 1.70987, 1.56871, 1.28695, 0.959191, 4.79244e-322};
real Power_32[10] = {3.99099, 5.92334, 8.75559, 10.8427, 11.8984, 11.9102, 10.6807, 8.39744, 6.00953, 4.79244e-322};
real Power_33[10] = {544.535, 1081.3, 1572.89, 1967.22, 2192.22, 2192.19, 1964, 1580.83, 1098.53, 4.79244e-322};
real Power_36[10] = {0.551465, 0.901526, 1.23603, 1.57298, 1.6718, 1.72055, 1.57278, 1.19276, 0.862501, 4.79244e-322};
real Power_37[10] = {3.94238, 5.84882, 8.19938, 10.2993, 11.5876, 11.3706, 10.1978, 8.43085, 5.79247, 4.79244e-322};
real Power_38[10] = {523.56, 1037.32, 1514.02, 1889.83, 2102.03, 2099.57, 1883.63, 1520.26, 1045.42, 1.63007e-319};
DEFINE_SOURCE(fuel_1,c,t,dS,eqn);
DEFINE_SOURCE(fuel_2,c,t,dS,eqn);
DEFINE_SOURCE(fuel_3,c,t,dS,eqn);
DEFINE_SOURCE(fuel_6,c,t,dS,eqn);
DEFINE_SOURCE(fuel_7,c,t,dS,eqn);
DEFINE_SOURCE(fuel_8,c,t,dS,eqn);
DEFINE_SOURCE(fuel_11,c,t,dS,eqn);
DEFINE_SOURCE(fuel_12,c,t,dS,eqn);
DEFINE_SOURCE(fuel_13,c,t,dS,eqn);
DEFINE_SOURCE(fuel_16,c,t,dS,eqn);
DEFINE_SOURCE(fuel_17,c,t,dS,eqn);
DEFINE_SOURCE(fuel_18,c,t,dS,eqn);
DEFINE_SOURCE(fuel_21,c,t,dS,eqn);
DEFINE_SOURCE(fuel_22,c,t,dS,eqn);
DEFINE_SOURCE(fuel_23,c,t,dS,eqn);
DEFINE_SOURCE(fuel_26,c,t,dS,eqn);
DEFINE_SOURCE(fuel_27,c,t,dS,eqn);
DEFINE_SOURCE(fuel_28,c,t,dS,eqn);
DEFINE_SOURCE(fuel_31,c,t,dS,eqn);
DEFINE_SOURCE(fuel_32,c,t,dS,eqn);
DEFINE_SOURCE(fuel_33,c,t,dS,eqn);
DEFINE_SOURCE(fuel_36,c,t,dS,eqn);
DEFINE_SOURCE(fuel_37,c,t,dS,eqn);
DEFINE_SOURCE(fuel_38,c,t,dS,eqn);