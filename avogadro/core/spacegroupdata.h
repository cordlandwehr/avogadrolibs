/******************************************************************************

  This source file is part of the Avogadro project.

  Copyright 2016 Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/

#ifndef AVOGADRO_CORE_SPACE_GROUP_DATA
#define AVOGADRO_CORE_SPACE_GROUP_DATA

// This file contains data for each hall number.
// For example, [3] accesses data for hall number 3.
// [0] is a dummy in every case. There are 530 entries in each one.

namespace Avogadro {
namespace Core {

const unsigned short space_group_international_number[] = {
  0, 1, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
  6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
  9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14,
  14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15,
  15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 17, 17, 17, 18, 18,
  18, 19, 20, 20, 20, 21, 21, 21, 22, 23, 24, 25, 25, 25, 26,
  26, 26, 26, 26, 26, 27, 27, 27, 28, 28, 28, 28, 28, 28, 29,
  29, 29, 29, 29, 29, 30, 30, 30, 30, 30, 30, 31, 31, 31, 31,
  31, 31, 32, 32, 32, 33, 33, 33, 33, 33, 33, 34, 34, 34, 35,
  35, 35, 36, 36, 36, 36, 36, 36, 37, 37, 37, 38, 38, 38, 38,
  38, 38, 39, 39, 39, 39, 39, 39, 40, 40, 40, 40, 40, 40, 41,
  41, 41, 41, 41, 41, 42, 42, 42, 43, 43, 43, 44, 44, 44, 45,
  45, 45, 46, 46, 46, 46, 46, 46, 47, 48, 48, 49, 49, 49, 50,
  50, 50, 50, 50, 50, 51, 51, 51, 51, 51, 51, 52, 52, 52, 52,
  52, 52, 53, 53, 53, 53, 53, 53, 54, 54, 54, 54, 54, 54, 55,
  55, 55, 56, 56, 56, 57, 57, 57, 57, 57, 57, 58, 58, 58, 59,
  59, 59, 59, 59, 59, 60, 60, 60, 60, 60, 60, 61, 61, 62, 62,
  62, 62, 62, 62, 63, 63, 63, 63, 63, 63, 64, 64, 64, 64, 64,
  64, 65, 65, 65, 66, 66, 66, 67, 67, 67, 67, 67, 67, 68, 68,
  68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 69, 70, 70, 71, 72,
  72, 72, 73, 73, 74, 74, 74, 74, 74, 74, 75, 76, 77, 78, 79,
  80, 81, 82, 83, 84, 85, 85, 86, 86, 87, 88, 88, 89, 90, 91,
  92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
  106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
  118, 119, 120, 121, 122, 123, 124, 125, 125, 126, 126, 127,
  128, 129, 129, 130, 130, 131, 132, 133, 133, 134, 134, 135,
  136, 137, 137, 138, 138, 139, 140, 141, 141, 142, 142, 143,
  144, 145, 146, 146, 147, 148, 148, 149, 150, 151, 152, 153,
  154, 155, 155, 156, 157, 158, 159, 160, 160, 161, 161, 162,
  163, 164, 165, 166, 166, 167, 167, 168, 169, 170, 171, 172,
  173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184,
  185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
  197, 198, 199, 200, 201, 201, 202, 203, 203, 204, 205, 206,
  207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218,
  219, 220, 221, 222, 222, 223, 224, 224, 225, 226, 227, 227,
  228, 228, 229, 230};

const char* space_group_schoenflies[] = {
  "", "C1^1", "Ci^1", "C2^1", "C2^1", "C2^1", "C2^2",
  "C2^2", "C2^2", "C2^3", "C2^3", "C2^3", "C2^3", "C2^3",
  "C2^3", "C2^3", "C2^3", "C2^3", "Cs^1", "Cs^1", "Cs^1",
  "Cs^2", "Cs^2", "Cs^2", "Cs^2", "Cs^2", "Cs^2", "Cs^2",
  "Cs^2", "Cs^2", "Cs^3", "Cs^3", "Cs^3", "Cs^3", "Cs^3",
  "Cs^3", "Cs^3", "Cs^3", "Cs^3", "Cs^4", "Cs^4", "Cs^4",
  "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4",
  "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4", "Cs^4",
  "Cs^4", "C2h^1", "C2h^1", "C2h^1", "C2h^2", "C2h^2", "C2h^2",
  "C2h^3", "C2h^3", "C2h^3", "C2h^3", "C2h^3", "C2h^3", "C2h^3",
  "C2h^3", "C2h^3", "C2h^4", "C2h^4", "C2h^4", "C2h^4", "C2h^4",
  "C2h^4", "C2h^4", "C2h^4", "C2h^4", "C2h^5", "C2h^5", "C2h^5",
  "C2h^5", "C2h^5", "C2h^5", "C2h^5", "C2h^5", "C2h^5", "C2h^6",
  "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6",
  "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6", "C2h^6",
  "C2h^6", "C2h^6", "C2h^6", "D2^1", "D2^2", "D2^2", "D2^2",
  "D2^3", "D2^3", "D2^3", "D2^4", "D2^5", "D2^5", "D2^5",
  "D2^6", "D2^6", "D2^6", "D2^7", "D2^8", "D2^9", "C2v^1",
  "C2v^1", "C2v^1", "C2v^2", "C2v^2", "C2v^2", "C2v^2", "C2v^2",
  "C2v^2", "C2v^3", "C2v^3", "C2v^3", "C2v^4", "C2v^4", "C2v^4",
  "C2v^4", "C2v^4", "C2v^4", "C2v^5", "C2v^5", "C2v^5", "C2v^5",
  "C2v^5", "C2v^5", "C2v^6", "C2v^6", "C2v^6", "C2v^6", "C2v^6",
  "C2v^6", "C2v^7", "C2v^7", "C2v^7", "C2v^7", "C2v^7", "C2v^7",
  "C2v^8", "C2v^8", "C2v^8", "C2v^9", "C2v^9", "C2v^9", "C2v^9",
  "C2v^9", "C2v^9", "C2v^10", "C2v^10", "C2v^10", "C2v^11", "C2v^11",
  "C2v^11", "C2v^12", "C2v^12", "C2v^12", "C2v^12", "C2v^12", "C2v^12",
  "C2v^13", "C2v^13", "C2v^13", "C2v^14", "C2v^14", "C2v^14", "C2v^14",
  "C2v^14", "C2v^14", "C2v^15", "C2v^15", "C2v^15", "C2v^15", "C2v^15",
  "C2v^15", "C2v^16", "C2v^16", "C2v^16", "C2v^16", "C2v^16", "C2v^16",
  "C2v^17", "C2v^17", "C2v^17", "C2v^17", "C2v^17", "C2v^17", "C2v^18",
  "C2v^18", "C2v^18", "C2v^19", "C2v^19", "C2v^19", "C2v^20", "C2v^20",
  "C2v^20", "C2v^21", "C2v^21", "C2v^21", "C2v^22", "C2v^22", "C2v^22",
  "C2v^22", "C2v^22", "C2v^22", "D2h^1", "D2h^2", "D2h^2", "D2h^3",
  "D2h^3", "D2h^3", "D2h^4", "D2h^4", "D2h^4", "D2h^4", "D2h^4",
  "D2h^4", "D2h^5", "D2h^5", "D2h^5", "D2h^5", "D2h^5", "D2h^5",
  "D2h^6", "D2h^6", "D2h^6", "D2h^6", "D2h^6", "D2h^6", "D2h^7",
  "D2h^7", "D2h^7", "D2h^7", "D2h^7", "D2h^7", "D2h^8", "D2h^8",
  "D2h^8", "D2h^8", "D2h^8", "D2h^8", "D2h^9", "D2h^9", "D2h^9",
  "D2h^10", "D2h^10", "D2h^10", "D2h^11", "D2h^11", "D2h^11", "D2h^11",
  "D2h^11", "D2h^11", "D2h^12", "D2h^12", "D2h^12", "D2h^13", "D2h^13",
  "D2h^13", "D2h^13", "D2h^13", "D2h^13", "D2h^14", "D2h^14", "D2h^14",
  "D2h^14", "D2h^14", "D2h^14", "D2h^15", "D2h^15", "D2h^16", "D2h^16",
  "D2h^16", "D2h^16", "D2h^16", "D2h^16", "D2h^17", "D2h^17", "D2h^17",
  "D2h^17", "D2h^17", "D2h^17", "D2h^18", "D2h^18", "D2h^18", "D2h^18",
  "D2h^18", "D2h^18", "D2h^19", "D2h^19", "D2h^19", "D2h^20", "D2h^20",
  "D2h^20", "D2h^21", "D2h^21", "D2h^21", "D2h^21", "D2h^21", "D2h^21",
  "D2h^22", "D2h^22", "D2h^22", "D2h^22", "D2h^22", "D2h^22", "D2h^22",
  "D2h^22", "D2h^22", "D2h^22", "D2h^22", "D2h^22", "D2h^23", "D2h^24",
  "D2h^24", "D2h^25", "D2h^26", "D2h^26", "D2h^26", "D2h^27", "D2h^27",
  "D2h^28", "D2h^28", "D2h^28", "D2h^28", "D2h^28", "D2h^28", "C4^1",
  "C4^2", "C4^3", "C4^4", "C4^5", "C4^6", "S4^1", "S4^2",
  "C4h^1", "C4h^2", "C4h^3", "C4h^3", "C4h^4", "C4h^4", "C4h^5",
  "C4h^6", "C4h^6", "D4^1", "D4^2", "D4^3", "D4^4", "D4^5",
  "D4^6", "D4^7", "D4^8", "D4^9", "D4^10", "C4v^1", "C4v^2",
  "C4v^3", "C4v^4", "C4v^5", "C4v^6", "C4v^7", "C4v^8", "C4v^9",
  "C4v^10", "C4v^11", "C4v^12", "D2d^1", "D2d^2", "D2d^3", "D2d^4",
  "D2d^5", "D2d^6", "D2d^7", "D2d^8", "D2d^9", "D2d^10", "D2d^11",
  "D2d^12", "D4h^1", "D4h^2", "D4h^3", "D4h^3", "D4h^4", "D4h^4",
  "D4h^5", "D4h^6", "D4h^7", "D4h^7", "D4h^8", "D4h^8", "D4h^9",
  "D4h^10", "D4h^11", "D4h^11", "D4h^12", "D4h^12", "D4h^13", "D4h^14",
  "D4h^15", "D4h^15", "D4h^16", "D4h^16", "D4h^17", "D4h^18", "D4h^19",
  "D4h^19", "D4h^20", "D4h^20", "C3^1", "C3^2", "C3^3", "C3^4",
  "C3^4", "C3i^1", "C3i^2", "C3i^2", "D3^1", "D3^2", "D3^3",
  "D3^4", "D3^5", "D3^6", "D3^7", "D3^7", "C3v^1", "C3v^2",
  "C3v^3", "C3v^4", "C3v^5", "C3v^5", "C3v^6", "C3v^6", "D3d^1",
  "D3d^2", "D3d^3", "D3d^4", "D3d^5", "D3d^5", "D3d^6", "D3d^6",
  "C6^1", "C6^2", "C6^3", "C6^4", "C6^5", "C6^6", "C3h^1",
  "C6h^1", "C6h^2", "D6^1", "D6^2", "D6^3", "D6^4", "D6^5",
  "D6^6", "C6v^1", "C6v^2", "C6v^3", "C6v^4", "D3h^1", "D3h^2",
  "D3h^3", "D3h^4", "D6h^1", "D6h^2", "D6h^3", "D6h^4", "T^1",
  "T^2", "T^3", "T^4", "T^5", "Th^1", "Th^2", "Th^2",
  "Th^3", "Th^4", "Th^4", "Th^5", "Th^6", "Th^7", "O^1",
  "O^2", "O^3", "O^4", "O^5", "O^6", "O^7", "O^8",
  "Td^1", "Td^2", "Td^3", "Td^4", "Td^5", "Td^6", "Oh^1",
  "Oh^2", "Oh^2", "Oh^3", "Oh^4", "Oh^4", "Oh^5", "Oh^6",
  "Oh^7", "Oh^7", "Oh^8", "Oh^8", "Oh^9", "Oh^10"};

const char* space_group_hall_symbol[] = {
  "", "P 1", "-P 1", "P 2y", "P 2",
  "P 2x", "P 2yb", "P 2c", "P 2xa", "C 2y",
  "A 2y", "I 2y", "A 2", "B 2", "I 2",
  "B 2x", "C 2x", "I 2x", "P -2y", "P -2",
  "P -2x", "P -2yc", "P -2yac", "P -2ya", "P -2a",
  "P -2ab", "P -2b", "P -2xb", "P -2xbc", "P -2xc",
  "C -2y", "A -2y", "I -2y", "A -2", "B -2",
  "I -2", "B -2x", "C -2x", "I -2x", "C -2yc",
  "A -2yac", "I -2ya", "A -2ya", "C -2ybc", "I -2yc",
  "A -2a", "B -2bc", "I -2b", "B -2b", "A -2ac",
  "I -2a", "B -2xb", "C -2xbc", "I -2xc", "C -2xc",
  "B -2xbc", "I -2xb", "-P 2y", "-P 2", "-P 2x",
  "-P 2yb", "-P 2c", "-P 2xa", "-C 2y", "-A 2y",
  "-I 2y", "-A 2", "-B 2", "-I 2", "-B 2x",
  "-C 2x", "-I 2x", "-P 2yc", "-P 2yac", "-P 2ya",
  "-P 2a", "-P 2ab", "-P 2b", "-P 2xb", "-P 2xbc",
  "-P 2xc", "-P 2ybc", "-P 2yn", "-P 2yab", "-P 2ac",
  "-P 2n", "-P 2bc", "-P 2xab", "-P 2xn", "-P 2xac",
  "-C 2yc", "-A 2yac", "-I 2ya", "-A 2ya", "-C 2ybc",
  "-I 2yc", "-A 2a", "-B 2bc", "-I 2b", "-B 2b",
  "-A 2ac", "-I 2a", "-B 2xb", "-C 2xbc", "-I 2xc",
  "-C 2xc", "-B 2xbc", "-I 2xb", "P 2 2", "P 2c 2",
  "P 2a 2a", "P 2 2b", "P 2 2ab", "P 2bc 2", "P 2ac 2ac",
  "P 2ac 2ab", "C 2c 2", "A 2a 2a", "B 2 2b", "C 2 2",
  "A 2 2", "B 2 2", "F 2 2", "I 2 2", "I 2b 2c",
  "P 2 -2", "P -2 2", "P -2 -2", "P 2c -2", "P 2c -2c",
  "P -2a 2a", "P -2 2a", "P -2 -2b", "P -2b -2", "P 2 -2c",
  "P -2a 2", "P -2b -2b", "P 2 -2a", "P 2 -2b", "P -2b 2",
  "P -2c 2", "P -2c -2c", "P -2a -2a", "P 2c -2ac", "P 2c -2b",
  "P -2b 2a", "P -2ac 2a", "P -2bc -2c", "P -2a -2ab", "P 2 -2bc",
  "P 2 -2ac", "P -2ac 2", "P -2ab 2", "P -2ab -2ab", "P -2bc -2bc",
  "P 2ac -2", "P 2bc -2bc", "P -2ab 2ab", "P -2 2ac", "P -2 -2bc",
  "P -2ab -2", "P 2 -2ab", "P -2bc 2", "P -2ac -2ac", "P 2c -2n",
  "P 2c -2ab", "P -2bc 2a", "P -2n 2a", "P -2n -2ac", "P -2ac -2n",
  "P 2 -2n", "P -2n 2", "P -2n -2n", "C 2 -2", "A -2 2",
  "B -2 -2", "C 2c -2", "C 2c -2c", "A -2a 2a", "A -2 2a",
  "B -2 -2b", "B -2b -2", "C 2 -2c", "A -2a 2", "B -2b -2b",
  "A 2 -2", "B 2 -2", "B -2 2", "C -2 2", "C -2 -2",
  "A -2 -2", "A 2 -2c", "B 2 -2c", "B -2c 2", "C -2b 2",
  "C -2b -2b", "A -2c -2c", "A 2 -2a", "B 2 -2b", "B -2b 2",
  "C -2c 2", "C -2c -2c", "A -2a -2a", "A 2 -2ac", "B 2 -2bc",
  "B -2bc 2", "C -2bc 2", "C -2bc -2bc", "A -2ac -2ac", "F 2 -2",
  "F -2 2", "F -2 -2", "F 2 -2d", "F -2d 2", "F -2d -2d",
  "I 2 -2", "I -2 2", "I -2 -2", "I 2 -2c", "I -2a 2",
  "I -2b -2b", "I 2 -2a", "I 2 -2b", "I -2b 2", "I -2c 2",
  "I -2c -2c", "I -2a -2a", "-P 2 2", "P 2 2 -1n", "-P 2ab 2bc",
  "-P 2 2c", "-P 2a 2", "-P 2b 2b", "P 2 2 -1ab", "-P 2ab 2b",
  "P 2 2 -1bc", "-P 2b 2bc", "P 2 2 -1ac", "-P 2a 2c", "-P 2a 2a",
  "-P 2b 2", "-P 2 2b", "-P 2c 2c", "-P 2c 2", "-P 2 2a",
  "-P 2a 2bc", "-P 2b 2n", "-P 2n 2b", "-P 2ab 2c", "-P 2ab 2n",
  "-P 2n 2bc", "-P 2ac 2", "-P 2bc 2bc", "-P 2ab 2ab", "-P 2 2ac",
  "-P 2 2bc", "-P 2ab 2", "-P 2a 2ac", "-P 2b 2c", "-P 2a 2b",
  "-P 2ac 2c", "-P 2bc 2b", "-P 2b 2ab", "-P 2 2ab", "-P 2bc 2",
  "-P 2ac 2ac", "-P 2ab 2ac", "-P 2ac 2bc", "-P 2bc 2ab", "-P 2c 2b",
  "-P 2c 2ac", "-P 2ac 2a", "-P 2b 2a", "-P 2a 2ab", "-P 2bc 2c",
  "-P 2 2n", "-P 2n 2", "-P 2n 2n", "P 2 2ab -1ab", "-P 2ab 2a",
  "P 2bc 2 -1bc", "-P 2c 2bc", "P 2ac 2ac -1ac", "-P 2c 2a", "-P 2n 2ab",
  "-P 2n 2c", "-P 2a 2n", "-P 2bc 2n", "-P 2ac 2b", "-P 2b 2ac",
  "-P 2ac 2ab", "-P 2bc 2ac", "-P 2ac 2n", "-P 2bc 2a", "-P 2c 2ab",
  "-P 2n 2ac", "-P 2n 2a", "-P 2c 2n", "-C 2c 2", "-C 2c 2c",
  "-A 2a 2a", "-A 2 2a", "-B 2 2b", "-B 2b 2", "-C 2bc 2",
  "-C 2bc 2bc", "-A 2ac 2ac", "-A 2 2ac", "-B 2 2bc", "-B 2bc 2",
  "-C 2 2", "-A 2 2", "-B 2 2", "-C 2 2c", "-A 2a 2",
  "-B 2b 2b", "-C 2b 2", "-C 2b 2b", "-A 2c 2c", "-A 2 2c",
  "-B 2 2c", "-B 2c 2", "C 2 2 -1bc", "-C 2b 2bc", "C 2 2 -1bc",
  "-C 2b 2c", "A 2 2 -1ac", "-A 2a 2c", "A 2 2 -1ac", "-A 2ac 2c",
  "B 2 2 -1bc", "-B 2bc 2b", "B 2 2 -1bc", "-B 2b 2bc", "-F 2 2",
  "F 2 2 -1d", "-F 2uv 2vw", "-I 2 2", "-I 2 2c", "-I 2a 2",
  "-I 2b 2b", "-I 2b 2c", "-I 2a 2b", "-I 2b 2", "-I 2a 2a",
  "-I 2c 2c", "-I 2 2b", "-I 2 2a", "-I 2c 2", "P 4",
  "P 4w", "P 4c", "P 4cw", "I 4", "I 4bw",
  "P -4", "I -4", "-P 4", "-P 4c", "P 4ab -1ab",
  "-P 4a", "P 4n -1n", "-P 4bc", "-I 4", "I 4bw -1bw",
  "-I 4ad", "P 4 2", "P 4ab 2ab", "P 4w 2c", "P 4abw 2nw",
  "P 4c 2", "P 4n 2n", "P 4cw 2c", "P 4nw 2abw", "I 4 2",
  "I 4bw 2bw", "P 4 -2", "P 4 -2ab", "P 4c -2c", "P 4n -2n",
  "P 4 -2c", "P 4 -2n", "P 4c -2", "P 4c -2ab", "I 4 -2",
  "I 4 -2c", "I 4bw -2", "I 4bw -2c", "P -4 2", "P -4 2c",
  "P -4 2ab", "P -4 2n", "P -4 -2", "P -4 -2c", "P -4 -2ab",
  "P -4 -2n", "I -4 -2", "I -4 -2c", "I -4 2", "I -4 2bw",
  "-P 4 2", "-P 4 2c", "P 4 2 -1ab", "-P 4a 2b", "P 4 2 -1n",
  "-P 4a 2bc", "-P 4 2ab", "-P 4 2n", "P 4ab 2ab -1ab", "-P 4a 2a",
  "P 4ab 2n -1ab", "-P 4a 2ac", "-P 4c 2", "-P 4c 2c", "P 4n 2c -1n",
  "-P 4ac 2b", "P 4n 2 -1n", "-P 4ac 2bc", "-P 4c 2ab", "-P 4n 2n",
  "P 4n 2n -1n", "-P 4ac 2a", "P 4n 2ab -1n", "-P 4ac 2ac", "-I 4 2",
  "-I 4 2c", "I 4bw 2bw -1bw", "-I 4bd 2", "I 4bw 2aw -1bw", "-I 4bd 2c",
  "P 3", "P 31", "P 32", "R 3", "P 3*",
  "-P 3", "-R 3", "-P 3*", "P 3 2", "P 3 2=",
  "P 31 2c (0 0 1)", "P 31 2=", "P 32 2c (0 0 -1)", "P 32 2=", "R 3 2=",
  "P 3* 2", "P 3 -2=", "P 3 -2", "P 3 -2=c", "P 3 -2c",
  "R 3 -2=", "P 3* -2", "R 3 -2=c", "P 3* -2n", "-P 3 2",
  "-P 3 2c", "-P 3 2=", "-P 3 2=c", "-R 3 2=", "-P 3* 2",
  "-R 3 2=c", "-P 3* 2n", "P 6", "P 61", "P 65",
  "P 62", "P 64", "P 6c", "P -6", "-P 6",
  "-P 6c", "P 6 2", "P 61 2 (0 0 -1)", "P 65 2 (0 0 1)", "P 62 2c (0 0 1)",
  "P 64 2c (0 0 -1)", "P 6c 2c", "P 6 -2", "P 6 -2c", "P 6c -2",
  "P 6c -2c", "P -6 2", "P -6c 2", "P -6 -2", "P -6c -2c",
  "-P 6 2", "-P 6 2c", "-P 6c 2", "-P 6c 2c", "P 2 2 3",
  "F 2 2 3", "I 2 2 3", "P 2ac 2ab 3", "I 2b 2c 3", "-P 2 2 3",
  "P 2 2 3 -1n", "-P 2ab 2bc 3", "-F 2 2 3", "F 2 2 3 -1d", "-F 2uv 2vw 3",
  "-I 2 2 3", "-P 2ac 2ab 3", "-I 2b 2c 3", "P 4 2 3", "P 4n 2 3",
  "F 4 2 3", "F 4d 2 3", "I 4 2 3", "P 4acd 2ab 3", "P 4bd 2ab 3",
  "I 4bd 2c 3", "P -4 2 3", "F -4 2 3", "I -4 2 3", "P -4n 2 3",
  "F -4c 2 3", "I -4bd 2c 3", "-P 4 2 3", "P 4 2 3 -1n", "-P 4a 2bc 3",
  "-P 4n 2 3", "P 4n 2 3 -1n", "-P 4bc 2bc 3", "-F 4 2 3", "-F 4c 2 3",
  "F 4d 2 3 -1d", "-F 4vw 2vw 3", "F 4d 2 3 -1cd", "-F 4cvw 2vw 3", "-I 4 2 3",
  "-I 4bd 2c 3"};

const char* space_group_international[] = {
  "", "P 1", "P -1", "P 2 = P 1 2 1",
  "P 2 = P 1 1 2", "P 2 = P 2 1 1", "P 2_1 = P 1 2_1 1",
  "P 2_1 = P 1 1 2_1", "P 2_1 = P 2_1 1 1", "C 2 = C 1 2 1",
  "C 2 = A 1 2 1", "C 2 = I 1 2 1", "C 2 = A 1 1 2",
  "C 2 = B 1 1 2 = B 2", "C 2 = I 1 1 2", "C 2 = B 2 1 1",
  "C 2 = C 2 1 1", "C 2 = I 2 1 1", "P m = P 1 m 1",
  "P m = P 1 1 m", "P m = P m 1 1", "P c = P 1 c 1",
  "P c = P 1 n 1", "P c = P 1 a 1", "P c = P 1 1 a",
  "P c = P 1 1 n", "P c = P 1 1 b = P b", "P c = P b 1 1",
  "P c = P n 1 1", "P c = P c 1 1", "C m = C 1 m 1",
  "C m = A 1 m 1", "C m = I 1 m 1", "C m = A 1 1 m",
  "C m = B 1 1 m = B m", "C m = I 1 1 m", "C m = B m 1 1",
  "C m = C m 1 1", "C m = I m 1 1", "C c = C 1 c 1",
  "C c = A 1 n 1", "C c = I 1 a 1", "C c = A 1 a 1",
  "C c = C 1 n 1", "C c = I 1 c 1", "C c = A 1 1 a",
  "C c = B 1 1 n", "C c = I 1 1 b", "C c = B 1 1 b = B b",
  "C c = A 1 1 n", "C c = I 1 1 a", "C c = B b 1 1",
  "C c = C n 1 1", "C c = I c 1 1", "C c = C c 1 1",
  "C c = B n 1 1", "C c = I b 1 1", "P 2/m = P 1 2/m 1",
  "P 2/m = P 1 1 2/m", "P 2/m = P 2/m 1 1", "P 2_1/m = P 1 2_1/m 1",
  "P 2_1/m = P 1 1 2_1/m", "P 2_1/m = P 2_1/m 1 1", "C 2/m = C 1 2/m 1",
  "C 2/m = A 1 2/m 1", "C 2/m = I 1 2/m 1", "C 2/m = A 1 1 2/m",
  "C 2/m = B 1 1 2/m = B 2/m", "C 2/m = I 1 1 2/m", "C 2/m = B 2/m 1 1",
  "C 2/m = C 2/m 1 1", "C 2/m = I 2/m 1 1", "P 2/c = P 1 2/c 1",
  "P 2/c = P 1 2/n 1", "P 2/c = P 1 2/a 1", "P 2/c = P 1 1 2/a",
  "P 2/c = P 1 1 2/n", "P 2/c = P 1 1 2/b = P 2/b", "P 2/c = P 2/b 1 1",
  "P 2/c = P 2/n 1 1", "P 2/c = P 2/c 1 1", "P 2_1/c = P 1 2_1/c 1",
  "P 2_1/c = P 1 2_1/n 1", "P 2_1/c = P 1 2_1/a 1", "P 2_1/c = P 1 1 2_1/a",
  "P 2_1/c = P 1 1 2_1/n", "P 2_1/c = P 1 1 2_1/b = P 2_1/b",
  "P 2_1/c = P 2_1/b 1 1", "P 2_1/c = P 2_1/n 1 1",
  "P 2_1/c = P 2_1/c 1 1", "C 2/c = C 1 2/c 1",
  "C 2/c = A 1 2/n 1", "C 2/c = I 1 2/a 1", "C 2/c = A 1 2/a 1",
  "C 2/c = C 1 2/n 1", "C 2/c = I 1 2/c 1", "C 2/c = A 1 1 2/a",
  "C 2/c = B 1 1 2/n", "C 2/c = I 1 1 2/b", "C 2/c = B 1 1 2/b = B 2/b",
  "C 2/c = A 1 1 2/n", "C 2/c = I 1 1 2/a", "C 2/c = B 2/b 1 1",
  "C 2/c = C 2/n 1 1", "C 2/c = I 2/c 1 1", "C 2/c = C 2/c 1 1",
  "C 2/c = B 2/n 1 1", "C 2/c = I 2/b 1 1", "P 2 2 2",
  "P 2 2 2_1", "P 2_1 2 2", "P 2 2_1 2",
  "P 2_1 2_1 2", "P 2 2_1 2_1", "P 2_1 2 2_1",
  "P 2_1 2_1 2_1", "C 2 2 2_1", "A 2_1 2 2",
  "B 2 2_1 2", "C 2 2 2", "A 2 2 2",
  "B 2 2 2", "F 2 2 2", "I 2 2 2",
  "I 2_1 2_1 2_1", "P m m 2", "P 2 m m",
  "P m 2 m", "P m c 2_1", "P c m 2_1",
  "P 2_1 m a", "P 2_1 a m", "P b 2_1 m",
  "P m 2_1 b", "P c c 2", "P 2 a a",
  "P b 2 b", "P m a 2", "P b m 2",
  "P 2 m b", "P 2 c m", "P c 2 m",
  "P m 2 a", "P c a 2_1", "P b c 2_1",
  "P 2_1 a b", "P 2_1 c a", "P c 2_1 b",
  "P b 2_1 a", "P n c 2", "P c n 2",
  "P 2 n a", "P 2 a n", "P b 2 n",
  "P n 2 b", "P m n 2_1", "P n m 2_1",
  "P 2_1 m n", "P 2_1 n m", "P n 2_1 m",
  "P m 2_1 n", "P b a 2", "P 2 c b",
  "P c 2 a", "P n a 2_1", "P b n 2_1",
  "P 2_1 n b", "P 2_1 c n", "P c 2_1 n",
  "P n 2_1 a", "P n n 2", "P 2 n n",
  "P n 2 n", "C m m 2", "A 2 m m",
  "B m 2 m", "C m c 2_1", "C c m 2_1",
  "A 2_1 m a", "A 2_1 a m", "B b 2_1 m",
  "B m 2_1 b", "C c c 2", "A 2 a a",
  "B b 2 b", "A m m 2", "B m m 2",
  "B 2 m m", "C 2 m m", "C m 2 m",
  "A m 2 m", "A e m 2", "B m e 2",
  "B 2 e m", "C 2 m e", "C m 2 e",
  "A e 2 m", "A m a 2", "B b m 2",
  "B 2 m b", "C 2 c m", "C c 2 m",
  "A m 2 a", "A e a 2", "B b e 2",
  "B 2 e b", "C 2 c e", "C c 2 e",
  "A e 2 a", "F m m 2", "F 2 m m",
  "F m 2 m", "F d d 2", "F 2 d d",
  "F d 2 d", "I m m 2", "I 2 m m",
  "I m 2 m", "I b a 2", "I 2 c b",
  "I c 2 a", "I m a 2", "I b m 2",
  "I 2 m b", "I 2 c m", "I c 2 m",
  "I m 2 a", "P m m m", "P n n n",
  "P n n n", "P c c m", "P m a a",
  "P b m b", "P b a n", "P b a n",
  "P n c b", "P n c b", "P c n a",
  "P c n a", "P m m a", "P m m b",
  "P b m m", "P c m m", "P m c m",
  "P m a m", "P n n a", "P n n b",
  "P b n n", "P c n n", "P n c n",
  "P n a n", "P m n a", "P n m b",
  "P b m n", "P c n m", "P n c m",
  "P m a n", "P c c a", "P c c b",
  "P b a a", "P c a a", "P b c b",
  "P b a b", "P b a m", "P m c b",
  "P c m a", "P c c n", "P n a a",
  "P b n b", "P b c m", "P c a m",
  "P m c a", "P m a b", "P b m a",
  "P c m b", "P n n m", "P m n n",
  "P n m n", "P m m n", "P m m n",
  "P n m m", "P n m m", "P m n m",
  "P m n m", "P b c n", "P c a n",
  "P n c a", "P n a b", "P b n a",
  "P c n b", "P b c a", "P c a b",
  "P n m a", "P m n b", "P b n m",
  "P c m n", "P m c n", "P n a m",
  "C m c m", "C c m m", "A m m a",
  "A m a m", "B b m m", "B m m b",
  "C m c e", "C c m e", "A e m a",
  "A e a m", "B b e m", "B m e b",
  "C m m m", "A m m m", "B m m m",
  "C c c m", "A m a a", "B b m b",
  "C m m e", "C m m e", "A e m m",
  "A e m m", "B m e m", "B m e m",
  "C c c e", "C c c e", "C c c e",
  "C c c e", "A e a a", "A e a a",
  "A e a a", "A e a a", "B b e b",
  "B b c b", "B b e b", "B b e b",
  "F m m m", "F d d d", "F d d d",
  "I m m m", "I b a m", "I m c b",
  "I c m a", "I b c a", "I c a b",
  "I m m a", "I m m b", "I b m m",
  "I c m m", "I m c m", "I m a m",
  "P 4", "P 4_1", "P 4_2",
  "P 4_3", "I 4", "I 4_1",
  "P -4", "I -4", "P 4/m",
  "P 4_2/m", "P 4/n", "P 4/n",
  "P 4_2/n", "P 4_2/n", "I 4/m",
  "I 4_1/a", "I 4_1/a", "P 4 2 2",
  "P 4 2_1 2", "P 4_1 2 2", "P 4_1 2_1 2",
  "P 4_2 2 2", "P 4_2 2_1 2", "P 4_3 2 2",
  "P 4_3 2_1 2", "I 4 2 2", "I 4_1 2 2",
  "P 4 m m", "P 4 b m", "P 4_2 c m",
  "P 4_2 n m", "P 4 c c", "P 4 n c",
  "P 4_2 m c", "P 4_2 b c", "I 4 m m",
  "I 4 c m", "I 4_1 m d", "I 4_1 c d",
  "P -4 2 m", "P -4 2 c", "P -4 2_1 m",
  "P -4 2_1 c", "P -4 m 2", "P -4 c 2",
  "P -4 b 2", "P -4 n 2", "I -4 m 2",
  "I -4 c 2", "I -4 2 m", "I -4 2 d",
  "P 4/m m m", "P 4/m c c", "P 4/n b m",
  "P 4/n b m", "P 4/n n c", "P 4/n n c",
  "P 4/m b m", "P 4/m n c", "P 4/n m m",
  "P 4/n m m", "P 4/n c c", "P 4/n c c",
  "P 4_2/m m c", "P 4_2/m c m", "P 4_2/n b c",
  "P 4_2/n b c", "P 4_2/n n m", "P 4_2/n n m",
  "P 4_2/m b c", "P 4_2/m n m", "P 4_2/n m c",
  "P 4_2/n m c", "P 4_2/n c m", "P 4_2/n c m",
  "I 4/m m m", "I 4/m c m", "I 4_1/a m d",
  "I 4_1/a m d", "I 4_1/a c d", "I 4_1/a c d",
  "P 3", "P 3_1", "P 3_2",
  "R 3", "R 3", "P -3",
  "R -3", "R -3", "P 3 1 2",
  "P 3 2 1", "P 3_1 1 2", "P 3_1 2 1",
  "P 3_2 1 2", "P 3_2 2 1", "R 3 2",
  "R 3 2", "P 3 m 1", "P 3 1 m",
  "P 3 c 1", "P 3 1 c", "R 3 m",
  "R 3 m", "R 3 c", "R 3 c",
  "P -3 1 m", "P -3 1 c", "P -3 m 1",
  "P -3 c 1", "R -3 m", "R -3 m",
  "R -3 c", "R -3 c", "P 6",
  "P 6_1", "P 6_5", "P 6_2",
  "P 6_4", "P 6_3", "P -6",
  "P 6/m", "P 6_3/m", "P 6 2 2",
  "P 6_1 2 2", "P 6_5 2 2", "P 6_2 2 2",
  "P 6_4 2 2", "P 6_3 2 2", "P 6 m m",
  "P 6 c c", "P 6_3 c m", "P 6_3 m c",
  "P -6 m 2", "P -6 c 2", "P -6 2 m",
  "P -6 2 c", "P 6/m m m", "P 6/m c c",
  "P 6_3/m c m", "P 6_3/m m c", "P 2 3",
  "F 2 3", "I 2 3", "P 2_1 3",
  "I 2_1 3", "P m 3", "P n 3",
  "P n 3", "F m 3", "F d 3",
  "F d 3", "I m 3", "P a 3",
  "I a 3", "P 4 3 2", "P 4_2 3 2",
  "F 4 3 2", "F 4_1 3 2", "I 4 3 2",
  "P 4_3 3 2", "P 4_1 3 2", "I 4_1 3 2",
  "P -4 3 m", "F -4 3 m", "I -4 3 m",
  "P -4 3 n", "F -4 3 c", "I -4 3 d",
  "P m -3 m", "P n -3 n", "P n -3 n",
  "P m -3 n", "P n -3 m", "P n -3 m",
  "F m -3 m", "F m -3 c", "F d -3 m",
  "F d -3 m", "F d -3 c", "F d -3 c",
  "I m -3 m", "I a -3 d"};

const char* space_group_international_full[] = {
  "", "P 1", "P -1",
  "P 1 2 1", "P 1 1 2", "P 2 1 1",
  "P 1 2_1 1", "P 1 1 2_1", "P 2_1 1 1",
  "C 1 2 1", "A 1 2 1", "I 1 2 1",
  "A 1 1 2", "B 1 1 2", "I 1 1 2",
  "B 2 1 1", "C 2 1 1", "I 2 1 1",
  "P 1 m 1", "P 1 1 m", "P m 1 1",
  "P 1 c 1", "P 1 n 1", "P 1 a 1",
  "P 1 1 a", "P 1 1 n", "P 1 1 b",
  "P b 1 1", "P n 1 1", "P c 1 1",
  "C 1 m 1", "A 1 m 1", "I 1 m 1",
  "A 1 1 m", "B 1 1 m", "I 1 1 m",
  "B m 1 1", "C m 1 1", "I m 1 1",
  "C 1 c 1", "A 1 n 1", "I 1 a 1",
  "A 1 a 1", "C 1 n 1", "I 1 c 1",
  "A 1 1 a", "B 1 1 n", "I 1 1 b",
  "B 1 1 b", "A 1 1 n", "I 1 1 a",
  "B b 1 1", "C n 1 1", "I c 1 1",
  "C c 1 1", "B n 1 1", "I b 1 1",
  "P 1 2/m 1", "P 1 1 2/m", "P 2/m 1 1",
  "P 1 2_1/m 1", "P 1 1 2_1/m", "P 2_1/m 1 1",
  "C 1 2/m 1", "A 1 2/m 1", "I 1 2/m 1",
  "A 1 1 2/m", "B 1 1 2/m", "I 1 1 2/m",
  "B 2/m 1 1", "C 2/m 1 1", "I 2/m 1 1",
  "P 1 2/c 1", "P 1 2/n 1", "P 1 2/a 1",
  "P 1 1 2/a", "P 1 1 2/n", "P 1 1 2/b",
  "P 2/b 1 1", "P 2/n 1 1", "P 2/c 1 1",
  "P 1 2_1/c 1", "P 1 2_1/n 1", "P 1 2_1/a 1",
  "P 1 1 2_1/a", "P 1 1 2_1/n", "P 1 1 2_1/b",
  "P 2_1/b 1 1", "P 2_1/n 1 1", "P 2_1/c 1 1",
  "C 1 2/c 1", "A 1 2/n 1", "I 1 2/a 1",
  "A 1 2/a 1", "C 1 2/n 1", "I 1 2/c 1",
  "A 1 1 2/a", "B 1 1 2/n", "I 1 1 2/b",
  "B 1 1 2/b", "A 1 1 2/n", "I 1 1 2/a",
  "B 2/b 1 1", "C 2/n 1 1", "I 2/c 1 1",
  "C 2/c 1 1", "B 2/n 1 1", "I 2/b 1 1",
  "P 2 2 2", "P 2 2 2_1", "P 2_1 2 2",
  "P 2 2_1 2", "P 2_1 2_1 2", "P 2 2_1 2_1",
  "P 2_1 2 2_1", "P 2_1 2_1 2_1", "C 2 2 2_1",
  "A 2_1 2 2", "B 2 2_1 2", "C 2 2 2",
  "A 2 2 2", "B 2 2 2", "F 2 2 2",
  "I 2 2 2", "I 2_1 2_1 2_1", "P m m 2",
  "P 2 m m", "P m 2 m", "P m c 2_1",
  "P c m 2_1", "P 2_1 m a", "P 2_1 a m",
  "P b 2_1 m", "P m 2_1 b", "P c c 2",
  "P 2 a a", "P b 2 b", "P m a 2",
  "P b m 2", "P 2 m b", "P 2 c m",
  "P c 2 m", "P m 2 a", "P c a 2_1",
  "P b c 2_1", "P 2_1 a b", "P 2_1 c a",
  "P c 2_1 b", "P b 2_1 a", "P n c 2",
  "P c n 2", "P 2 n a", "P 2 a n",
  "P b 2 n", "P n 2 b", "P m n 2_1",
  "P n m 2_1", "P 2_1 m n", "P 2_1 n m",
  "P n 2_1 m", "P m 2_1 n", "P b a 2",
  "P 2 c b", "P c 2 a", "P n a 2_1",
  "P b n 2_1", "P 2_1 n b", "P 2_1 c n",
  "P c 2_1 n", "P n 2_1 a", "P n n 2",
  "P 2 n n", "P n 2 n", "C m m 2",
  "A 2 m m", "B m 2 m", "C m c 2_1",
  "C c m 2_1", "A 2_1 m a", "A 2_1 a m",
  "B b 2_1 m", "B m 2_1 b", "C c c 2",
  "A 2 a a", "B b 2 b", "A m m 2",
  "B m m 2", "B 2 m m", "C 2 m m",
  "C m 2 m", "A m 2 m", "A e m 2",
  "B m e 2", "B 2 e m", "C 2 m e",
  "C m 2 e", "A e 2 m", "A m a 2",
  "B b m 2", "B 2 m b", "C 2 c m",
  "C c 2 m", "A m 2 a", "A e a 2",
  "B b e 2", "B 2 e b", "C 2 c e",
  "C c 2 e", "A e 2 a", "F m m 2",
  "F 2 m m", "F m 2 m", "F d d 2",
  "F 2 d d", "F d 2 d", "I m m 2",
  "I 2 m m", "I m 2 m", "I b a 2",
  "I 2 c b", "I c 2 a", "I m a 2",
  "I b m 2", "I 2 m b", "I 2 c m",
  "I c 2 m", "I m 2 a", "P 2/m 2/m 2/m",
  "P 2/n 2/n 2/n", "P 2/n 2/n 2/n", "P 2/c 2/c 2/m",
  "P 2/m 2/a 2/a", "P 2/b 2/m 2/b", "P 2/b 2/a 2/n",
  "P 2/b 2/a 2/n", "P 2/n 2/c 2/b", "P 2/n 2/c 2/b",
  "P 2/c 2/n 2/a", "P 2/c 2/n 2/a", "P 2_1/m 2/m 2/a",
  "P 2/m 2_1/m 2/b", "P 2/b 2_1/m 2/m", "P 2/c 2/m 2_1/m",
  "P 2/m 2/c 2_1/m", "P 2_1/m 2/a 2/m", "P 2/n 2_1/n 2/a",
  "P 2_1/n 2/n 2/b", "P 2/b 2/n 2_1/n", "P 2/c 2_1/n 2/n",
  "P 2_1/n 2/c 2/n", "P 2/n 2/a 2_1/n", "P 2/m 2/n 2_1/a",
  "P 2/n 2/m 2_1/b", "P 2_1/b 2/m 2/n", "P 2_1/c 2/n 2/m",
  "P 2/n 2_1/c 2/m", "P 2/m 2_1/a 2/n", "P 2_1/c 2/c 2/a",
  "P 2/c 2_1/c 2/b", "P 2/b 2_1/a 2/a", "P 2/c 2/a 2_1/a",
  "P 2/b 2/c 2_1/b", "P 2_1/b 2/a 2/b", "P 2_1/b 2_1/a 2/m",
  "P 2/m 2_1/c 2_1/b", "P 2_1/c 2/m 2_1/a", "P 2_1/c 2_1/c 2/n",
  "P 2/n 2_1/a 2_1/a", "P 2_1/b 2/n 2_1/b", "P 2/b 2_1/c 2_1/m",
  "P 2_1/c 2/a 2_1/m", "P 2_1/m 2/c 2_1/a", "P 2_1/m 2_1/a 2/b",
  "P 2_1/b 2_1/m 2/a", "P 2/c 2_1/m 2_1/b", "P 2_1/n 2_1/n 2/m",
  "P 2/m 2_1/n 2_1/n", "P 2_1/n 2/m 2_1/n", "P 2_1/m 2_1/m 2/n",
  "P 2_1/m 2_1/m 2/n", "P 2/n 2_1/m 2_1/m", "P 2/n 2_1/m 2_1/m",
  "P 2_1/m 2/n 2_1/m", "P 2_1/m 2/n 2_1/m", "P 2_1/b 2/c 2_1/n",
  "P 2/c 2_1/a 2_1/n", "P 2_1/n 2_1/c 2/a", "P 2_1/n 2/a 2_1/b",
  "P 2/b 2_1/n 2_1/a", "P 2_1/c 2_1/n 2/b", "P 2_1/b 2_1/c 2_1/a",
  "P 2_1/c 2_1/a 2_1/b", "P 2_1/n 2_1/m 2_1/a", "P 2_1/m 2_1/n 2_1/b",
  "P 2_1/b 2_1/n 2_1/m", "P 2_1/c 2_1/m 2_1/n", "P 2_1/m 2_1/c 2_1/n",
  "P 2_1/n 2_1/a 2_1/m", "C 2/m 2/c 2_1/m", "C 2/c 2/m 2_1/m",
  "A 2_1/m 2/m 2/a", "A 2_1/m 2/a 2/m", "B 2/b 2_1/m 2/m",
  "B 2/m 2_1/m 2/b", "C 2/m 2/c 2_1/e", "C 2/c 2/m 2_1/e",
  "A 2_1/e 2/m 2/a", "A 2_1/e 2/a 2/m", "B 2/b 2_1/e 2/m",
  "B 2/m 2_1/e 2/b", "C 2/m 2/m 2/m", "A 2/m 2/m 2/m",
  "B 2/m 2/m 2/m", "C 2/c 2/c 2/m", "A 2/m 2/a 2/a",
  "B 2/b 2/m 2/b", "C 2/m 2/m 2/e", "C 2/m 2/m 2/e",
  "A 2/e 2/m 2/m", "A 2/e 2/m 2/m", "B 2/m 2/e 2/m",
  "B 2/m 2/e 2/m", "C 2/c 2/c 2/e", "C 2/c 2/c 2/e",
  "C 2/c 2/c 2/e", "C 2/c 2/c 2/e", "A 2/e 2/a 2/a",
  "A 2/e 2/a 2/a", "A 2/e 2/a 2/a", "A 2/e 2/a 2/a",
  "B 2/b 2/e 2/b", "B 2/b 2/e 2/b", "B 2/b 2/e 2/b",
  "B 2/b 2/e 2/b", "F 2/m 2/m 2/m", "F 2/d 2/d 2/d",
  "F 2/d 2/d 2/d", "I 2/m 2/m 2/m", "I 2/b 2/a 2/m",
  "I 2/m 2/c 2/b", "I 2/c 2/m 2/a", "I 2/b 2/c 2/a",
  "I 2/c 2/a 2/b", "I 2/m 2/m 2/a", "I 2/m 2/m 2/b",
  "I 2/b 2/m 2/m", "I 2/c 2/m 2/m", "I 2/m 2/c 2/m",
  "I 2/m 2/a 2/m", "P 4", "P 4_1",
  "P 4_2", "P 4_3", "I 4",
  "I 4_1", "P -4", "I -4",
  "P 4/m", "P 4_2/m", "P 4/n",
  "P 4/n", "P 4_2/n", "P 4_2/n",
  "I 4/m", "I 4_1/a", "I 4_1/a",
  "P 4 2 2", "P 4 2_1 2", "P 4_1 2 2",
  "P 4_1 2_1 2", "P 4_2 2 2", "P 4_2 2_1 2",
  "P 4_3 2 2", "P 4_3 2_1 2", "I 4 2 2",
  "I 4_1 2 2", "P 4 m m", "P 4 b m",
  "P 4_2 c m", "P 4_2 n m", "P 4 c c",
  "P 4 n c", "P 4_2 m c", "P 4_2 b c",
  "I 4 m m", "I 4 c m", "I 4_1 m d",
  "I 4_1 c d", "P -4 2 m", "P -4 2 c",
  "P -4 2_1 m", "P -4 2_1 c", "P -4 m 2",
  "P -4 c 2", "P -4 b 2", "P -4 n 2",
  "I -4 m 2", "I -4 c 2", "I -4 2 m",
  "I -4 2 d", "P 4/m 2/m 2/m", "P 4/m 2/c 2/c",
  "P 4/n 2/b 2/m", "P 4/n 2/b 2/m", "P 4/n 2/n 2/c",
  "P 4/n 2/n 2/c", "P 4/m 2_1/b m", "P 4/m 2_1/n c",
  "P 4/n 2_1/m m", "P 4/n 2_1/m m", "P 4/n 2_1/c c",
  "P 4/n 2_1/c c", "P 4_2/m 2/m 2/c", "P 4_2/m 2/c 2/m",
  "P 4_2/n 2/b 2/c", "P 4_2/n 2/b 2/c", "P 4_2/n 2/n 2/m",
  "P 4_2/n 2/n 2/m", "P 4_2/m 2_1/b 2/c", "P 4_2/m 2_1/n 2/m",
  "P 4_2/n 2_1/m 2/c", "P 4_2/n 2_1/m 2/c", "P 4_2/n 2_1/c 2/m",
  "P 4_2/n 2_1/c 2/m", "I 4/m 2/m 2/m", "I 4/m 2/c 2/m",
  "I 4_1/a 2/m 2/d", "I 4_1/a 2/m 2/d", "I 4_1/a 2/c 2/d",
  "I 4_1/a 2/c 2/d", "P 3", "P 3_1",
  "P 3_2", "R 3", "R 3",
  "P -3", "R -3", "R -3",
  "P 3 1 2", "P 3 2 1", "P 3_1 1 2",
  "P 3_1 2 1", "P 3_2 1 2", "P 3_2 2 1",
  "R 3 2", "R 3 2", "P 3 m 1",
  "P 3 1 m", "P 3 c 1", "P 3 1 c",
  "R 3 m", "R 3 m", "R 3 c",
  "R 3 c", "P -3 1 2/m", "P -3 1 2/c",
  "P -3 2/m 1", "P -3 2/c 1", "R -3 2/m",
  "R -3 2/m", "R -3 2/c", "R -3 2/c",
  "P 6", "P 6_1", "P 6_5",
  "P 6_2", "P 6_4", "P 6_3",
  "P -6", "P 6/m", "P 6_3/m",
  "P 6 2 2", "P 6_1 2 2", "P 6_5 2 2",
  "P 6_2 2 2", "P 6_4 2 2", "P 6_3 2 2",
  "P 6 m m", "P 6 c c", "P 6_3 c m",
  "P 6_3 m c", "P -6 m 2", "P -6 c 2",
  "P -6 2 m", "P -6 2 c", "P 6/m 2/m 2/m",
  "P 6/m 2/c 2/c", "P 6_3/m 2/c 2/m", "P 6_3/m 2/m 2/c",
  "P 2 3", "F 2 3", "I 2 3",
  "P 2_1 3", "I 2_1 3", "P 2/m -3",
  "P 2/n -3", "P 2/n -3", "F 2/m -3",
  "F 2/d -3", "F 2/d -3", "I 2/m -3",
  "P 2_1/a -3", "I 2_1/a -3", "P 4 3 2",
  "P 4_2 3 2", "F 4 3 2", "F 4_1 3 2",
  "I 4 3 2", "P 4_3 3 2", "P 4_1 3 2",
  "I 4_1 3 2", "P -4 3 m", "F -4 3 m",
  "I -4 3 m", "P -4 3 n", "F -4 3 c",
  "I -4 3 d", "P 4/m -3 2/m", "P 4/n -3 2/n",
  "P 4/n -3 2/n", "P 4_2/m -3 2/n", "P 4_2/n -3 2/m",
  "P 4_2/n -3 2/m", "F 4/m -3 2/m", "F 4/m -3 2/c",
  "F 4_1/d -3 2/m", "F 4_1/d -3 2/m", "F 4_1/d -3 2/c",
  "F 4_1/d -3 2/c", "I 4/m -3 2/m", "I 4_1/a -3 2/d"};

const char* space_group_international_short[] = {
  "", "P1", "P-1", "P2", "P2", "P2",
  "P2_1", "P2_1", "P2_1", "C2", "C2", "C2",
  "C2", "C2", "C2", "C2", "C2", "C2",
  "Pm", "Pm", "Pm", "Pc", "Pc", "Pc",
  "Pc", "Pc", "Pc", "Pc", "Pc", "Pc",
  "Cm", "Cm", "Cm", "Cm", "Cm", "Cm",
  "Cm", "Cm", "Cm", "Cc", "Cc", "Cc",
  "Cc", "Cc", "Cc", "Cc", "Cc", "Cc",
  "Cc", "Cc", "Cc", "Cc", "Cc", "Cc",
  "Cc", "Cc", "Cc", "P2/m", "P2/m", "P2/m",
  "P2_1/m", "P2_1/m", "P2_1/m", "C2/m", "C2/m", "C2/m",
  "C2/m", "C2/m", "C2/m", "C2/m", "C2/m", "C2/m",
  "P2/c", "P2/c", "P2/c", "P2/c", "P2/c", "P2/c",
  "P2/c", "P2/c", "P2/c", "P2_1/c", "P2_1/c", "P2_1/c",
  "P2_1/c", "P2_1/c", "P2_1/c", "P2_1/c", "P2_1/c", "P2_1/c",
  "C2/c", "C2/c", "C2/c", "C2/c", "C2/c", "C2/c",
  "C2/c", "C2/c", "C2/c", "C2/c", "C2/c", "C2/c",
  "C2/c", "C2/c", "C2/c", "C2/c", "C2/c", "C2/c",
  "P222", "P222_1", "P2_122", "P22_12", "P2_12_12", "P22_12_1",
  "P2_122_1", "P2_12_12_1", "C222_1", "A2_122", "B22_12", "C222",
  "A222", "B222", "F222", "I222", "I2_12_12_1", "Pmm2",
  "P2mm", "Pm2m", "Pmc2_1", "Pcm2_1", "P2_1ma", "P2_1am",
  "Pb2_1m", "Pm2_1b", "Pcc2", "P2aa", "Pb2b", "Pma2",
  "Pbm2", "P2mb", "P2cm", "Pc2m", "Pm2a", "Pca2_1",
  "Pbc2_1", "P2_1ab", "P2_1ca", "Pc2_1b", "Pb2_1a", "Pnc2",
  "Pcn2", "P2na", "P2an", "Pb2n", "Pn2b", "Pmn2_1",
  "Pnm2_1", "P2_1mn", "P2_1nm", "Pn2_1m", "Pm2_1n", "Pba2",
  "P2cb", "Pc2a", "Pna2_1", "Pbn2_1", "P2_1nb", "P2_1cn",
  "Pc2_1n", "Pn2_1a", "Pnn2", "P2nn", "Pn2n", "Cmm2",
  "A2mm", "Bm2m", "Cmc2_1", "Ccm2_1", "A2_1ma", "A2_1am",
  "Bb2_1m", "Bm2_1b", "Ccc2", "A2aa", "Bb2b", "Amm2",
  "Bmm2", "B2mm", "C2mm", "Cm2m", "Am2m", "Aem2",
  "Bme2", "B2em", "C2me", "Cm2e", "Ae2m", "Ama2",
  "Bbm2", "B2mb", "C2cm", "Cc2m", "Am2a", "Aea2",
  "Bbe2", "B2eb", "C2ce", "Cc2e", "Ae2a", "Fmm2",
  "F2mm", "Fm2m", "Fdd2", "F2dd", "Fd2d", "Imm2",
  "I2mm", "Im2m", "Iba2", "I2cb", "Ic2a", "Ima2",
  "Ibm2", "I2mb", "I2cm", "Ic2m", "Im2a", "Pmmm",
  "Pnnn", "Pnnn", "Pccm", "Pmaa", "Pbmb", "Pban",
  "Pban", "Pncb", "Pncb", "Pcna", "Pcna", "Pmma",
  "Pmmb", "Pbmm", "Pcmm", "Pmcm", "Pmam", "Pnna",
  "Pnnb", "Pbnn", "Pcnn", "Pncn", "Pnan", "Pmna",
  "Pnmb", "Pbmn", "Pcnm", "Pncm", "Pman", "Pcca",
  "Pccb", "Pbaa", "Pcaa", "Pbcb", "Pbab", "Pbam",
  "Pmcb", "Pcma", "Pccn", "Pnaa", "Pbnb", "Pbcm",
  "Pcam", "Pmca", "Pmab", "Pbma", "Pcmb", "Pnnm",
  "Pmnn", "Pnmn", "Pmmn", "Pmmn", "Pnmm", "Pnmm",
  "Pmnm", "Pmnm", "Pbcn", "Pcan", "Pnca", "Pnab",
  "Pbna", "Pcnb", "Pbca", "Pcab", "Pnma", "Pmnb",
  "Pbnm", "Pcmn", "Pmcn", "Pnam", "Cmcm", "Ccmm",
  "Amma", "Amam", "Bbmm", "Bmmb", "Cmce", "Ccme",
  "Aema", "Aeam", "Bbem", "Bmeb", "Cmmm", "Ammm",
  "Bmmm", "Cccm", "Amaa", "Bbmb", "Cmme", "Cmme",
  "Aemm", "Aemm", "Bmem", "Bmem", "Ccce", "Ccce",
  "Ccce", "Ccce", "Aeaa", "Aeaa", "Aeaa", "Aeaa",
  "Bbeb", "Bbcb", "Bbeb", "Bbeb", "Fmmm", "Fddd",
  "Fddd", "Immm", "Ibam", "Imcb", "Icma", "Ibca",
  "Icab", "Imma", "Immb", "Ibmm", "Icmm", "Imcm",
  "Imam", "P4", "P4_1", "P4_2", "P4_3", "I4",
  "I4_1", "P-4", "I-4", "P4/m", "P4_2/m", "P4/n",
  "P4/n", "P4_2/n", "P4_2/n", "I4/m", "I4_1/a", "I4_1/a",
  "P422", "P42_12", "P4_122", "P4_12_12", "P4_222", "P4_22_12",
  "P4_322", "P4_32_12", "I422", "I4_122", "P4mm", "P4bm",
  "P4_2cm", "P4_2nm", "P4cc", "P4nc", "P4_2mc", "P4_2bc",
  "I4mm", "I4cm", "I4_1md", "I4_1cd", "P-42m", "P-42c",
  "P-42_1m", "P-42_1c", "P-4m2", "P-4c2", "P-4b2", "P-4n2",
  "I-4m2", "I-4c2", "I-42m", "I-42d", "P4/mmm", "P4/mcc",
  "P4/nbm", "P4/nbm", "P4/nnc", "P4/nnc", "P4/mbm", "P4/mnc",
  "P4/nmm", "P4/nmm", "P4/ncc", "P4/ncc", "P4_2/mmc", "P4_2/mcm",
  "P4_2/nbc", "P4_2/nbc", "P4_2/nnm", "P4_2/nnm", "P4_2/mbc", "P4_2/mnm",
  "P4_2/nmc", "P4_2/nmc", "P4_2/ncm", "P4_2/ncm", "I4/mmm", "I4/mcm",
  "I4_1/amd", "I4_1/amd", "I4_1/acd", "I4_1/acd", "P3", "P3_1",
  "P3_2", "R3", "R3", "P-3", "R-3", "R-3",
  "P312", "P321", "P3_112", "P3_121", "P3_212", "P3_221",
  "R32", "R32", "P3m1", "P31m", "P3c1", "P31c",
  "R3m", "R3m", "R3c", "R3c", "P-31m", "P-31c",
  "P-3m1", "P-3c1", "R-3m", "R-3m", "R-3c", "R-3c",
  "P6", "P6_1", "P6_5", "P6_2", "P6_4", "P6_3",
  "P-6", "P6/m", "P6_3/m", "P622", "P6_122", "P6_522",
  "P6_222", "P6_422", "P6_322", "P6mm", "P6cc", "P6_3cm",
  "P6_3mc", "P-6m2", "P-6c2", "P-62m", "P-62c", "P6/mmm",
  "P6/mcc", "P6_3/mcm", "P6_3/mmc", "P23", "F23", "I23",
  "P2_13", "I2_13", "Pm3", "Pn3", "Pn3", "Fm3",
  "Fd3", "Fd3", "Im3", "Pa3", "Ia3", "P432",
  "P4_232", "F432", "F4_132", "I432", "P4_332", "P4_132",
  "I4_132", "P-43m", "F-43m", "I-43m", "P-43n", "F-43c",
  "I-43d", "Pm-3m", "Pn-3n", "Pn-3n", "Pm-3n", "Pn-3m",
  "Pn-3m", "Fm-3m", "Fm-3c", "Fd-3m", "Fd-3m", "Fd-3c",
  "Fd-3c", "Im-3m", "Ia-3d"};

const char* space_group_setting[] = {
  "", "", "", "b", "c", "a", "b", "c",
  "a", "b1", "b2", "b3", "c1", "c2", "c3", "a1",
  "a2", "a3", "b", "c", "a", "b1", "b2", "b3",
  "c1", "c2", "c3", "a1", "a2", "a3", "b1", "b2",
  "b3", "c1", "c2", "c3", "a1", "a2", "a3", "b1",
  "b2", "b3", "-b1", "-b2", "-b3", "c1", "c2", "c3",
  "-c1", "-c2", "-c3", "a1", "a2", "a3", "-a1", "-a2",
  "-a3", "b", "c", "a", "b", "c", "a", "b1",
  "b2", "b3", "c1", "c2", "c3", "a1", "a2", "a3",
  "b1", "b2", "b3", "c1", "c2", "c3", "a1", "a2",
  "a3", "b1", "b2", "b3", "c1", "c2", "c3", "a1",
  "a2", "a3", "b1", "b2", "b3", "-b1", "-b2", "-b3",
  "c1", "c2", "c3", "-c1", "-c2", "-c3", "a1", "a2",
  "a3", "-a1", "-a2", "-a3", "", "", "cab", "bca",
  "", "cab", "bca", "", "", "cab", "bca", "",
  "cab", "bca", "", "", "", "", "cab", "bca",
  "", "ba-c", "cab", "-cba", "bca", "a-cb", "", "cab",
  "bca", "", "ba-c", "cab", "-cba", "bca", "a-cb", "",
  "ba-c", "cab", "-cba", "bca", "a-cb", "", "ba-c", "cab",
  "-cba", "bca", "a-cb", "", "ba-c", "cab", "-cba", "bca",
  "a-cb", "", "cab", "bca", "", "ba-c", "cab", "-cba",
  "bca", "a-cb", "", "cab", "bca", "", "cab", "bca",
  "", "ba-c", "cab", "-cba", "bca", "a-cb", "", "cab",
  "bca", "", "ba-c", "cab", "-cba", "bca", "a-cb", "",
  "ba-c", "cab", "-cba", "bca", "a-cb", "", "ba-c", "cab",
  "-cba", "bca", "a-cb", "", "ba-c", "cab", "-cba", "bca",
  "a-cb", "", "cab", "bca", "", "cab", "bca", "",
  "cab", "bca", "", "cab", "bca", "", "ba-c", "cab",
  "-cba", "bca", "a-cb", "", "1", "2", "", "cab",
  "bca", "1", "2", "1cab", "2cab", "1bca", "2bca", "",
  "ba-c", "cab", "-cba", "bca", "a-cb", "", "ba-c", "cab",
  "-cba", "bca", "a-cb", "", "ba-c", "cab", "-cba", "bca",
  "a-cb", "", "ba-c", "cab", "-cba", "bca", "a-cb", "",
  "cab", "bca", "", "cab", "bca", "", "ba-c", "cab",
  "-cba", "bca", "a-cb", "", "cab", "bca", "1", "2",
  "1cab", "2cab", "1bca", "2bca", "", "ba-c", "cab", "-cba",
  "bca", "a-cb", "", "ba-c", "", "ba-c", "cab", "-cba",
  "bca", "a-cb", "", "ba-c", "cab", "-cba", "bca", "a-cb",
  "", "ba-c", "cab", "-cba", "bca", "a-cb", "", "cab",
  "bca", "", "cab", "bca", "", "ba-c", "cab", "-cba",
  "bca", "a-cb", "1", "2", "1ba-c", "2ba-c", "1cab", "2cab",
  "1-cba", "2-cba", "1bca", "2bca", "1a-cb", "2a-cb", "", "1",
  "2", "", "", "cab", "bca", "", "ba-c", "",
  "ba-c", "cab", "-cba", "bca", "a-cb", "", "", "",
  "", "", "", "", "", "", "", "1",
  "2", "1", "2", "", "1", "2", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "1", "2", "1", "2", "", "",
  "1", "2", "1", "2", "", "", "1", "2",
  "1", "2", "", "", "1", "2", "1", "2",
  "", "", "1", "2", "1", "2", "", "",
  "", "H", "R", "", "H", "R", "", "",
  "", "", "", "", "H", "R", "", "",
  "", "", "H", "R", "H", "R", "", "",
  "", "", "H", "R", "H", "R", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "", "1",
  "2", "", "1", "2", "", "", "", "",
  "", "", "", "", "", "", "", "",
  "", "", "", "", "", "", "1", "2",
  "", "1", "2", "", "", "1", "2", "1",
  "2", "", ""};

} // Core
} // Avogadro

#endif // AVOGADRO_CORE_SPACE_GROUP_DATA