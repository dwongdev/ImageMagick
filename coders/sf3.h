/*
  Copyright @ 1999 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.  You may
  obtain a copy of the License at
  
    https://imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#include "coders/coders-private.h"

#define MagickSF3Headers \
  MagickCoderHeader("SF3", 0, "\x81SF3\x00\xE0\xD0\r\n\n\x03")

#define MagickSF3Aliases

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

MagickCoderExports(SF3)

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
