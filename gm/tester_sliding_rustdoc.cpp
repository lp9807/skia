//['ClipRectOp', 'TranslateOp', 'DrawPathOp', 'DrawRectOp', 'SaveOp', 'ConcatOp', 'RestoreOp', 'NoopOp', 'DrawRRectOp', 'ClipRRectOp', 'DrawSlugOp', 'StrikeClientLoad']

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "gm.h"

#include "include/core/SkCanvas.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkBlendMode.h"
#include "include/core/SkColor.h"
#include "include/core/SkRRect.h"
#include "include/core/SkPath.h"
#include "include/private/chromium/Slug.h"
#include "src/core/SkPaintPriv.h"
#include "src/core/SkReadBuffer.h"

#include "tools/ToolUtils.h"

#define inf 9999999

namespace {
// Deserialize hex string to raw data
void hexToRawData(const std::string& hexString, void* output, size_t size) {
    unsigned char* byteOutput = static_cast<unsigned char*>(output);
    for (size_t i = 0; i < size; ++i) {
        std::istringstream iss(hexString.substr(i * 2, 2));
        int byte;
        iss >> std::hex >> byte;
        byteOutput[i] = static_cast<unsigned char>(byte);
    }
}
}


// Begin loading ops and loading data when needed
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest1, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect0 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect0, 28);
        SkReadBuffer paintBuffer_rect0(paintdata_rect0, 28);
        SkPaint paintRect0 = SkPaintPriv::Unflatten(paintBuffer_rect0);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data0 = malloc(504);
        hexToRawData("00000000000044c2a98a67440000803f000052420080bf43580200000000803f0000000000005242000000000000803f0080bf4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080bf4300000000000000000000803f000054420000a74300c074440000c04318000000000054420080a8430000ec420000ae43000015430000a74300002b430000ae4300004a430000ae4300006d430000ae43000095430000ae430000ad430000aa430000b9430000ae430000d3430000ae430080e4430000ae4300c000440000ae43000009440080ae43000013440000ae4300001b440000ae43000022440080ae4300802b440000a743000031440000ae43008038440080ae4300004b440000ae4300c053440000a74300805d440000aa43000063440000a74300c06d440000ae43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43018000000ea000000230100003e010000180100004801000041010000230100005c010000480100001301000045010000490100006601000020010000570100006601000030010000200100006b0100004a010000270100005e0100002f01000023010000", data0, 504);
        auto slug0 = sktext::gpu::Slug::Deserialize(data0, 504);
        free(data0);
        void *paintdata_slug0 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug0, 28);
        SkReadBuffer paintbuffer_slug0 = SkReadBuffer(paintdata_slug0, 28);
        SkPaint paint_slug0 = SkPaintPriv::Unflatten(paintbuffer_slug0);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data1 = malloc(528);
        hexToRawData("00004040000044c209286c4400007041000052420080ec43780200000000803f0000000000005242000000000000803f0080ec4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080ec4300000000000000000000803f00005c420000d443004079440000f4431a00000000005c420000d4430000bc420000db43000002430000db4300001f430080db43000048430000db43008082430000db43008092430000db430080a6430000d7430080b2430000db430080c3430000d7430080ce430000d4430080d9430000db430000eb430000db43008003440000db4300800d440000db43004015440000db4300801d440080db43000027440000d44300802c440000d443004036440000db4300803e440000d44300c04b440000d443000055440080db43004062440000d74300c067440000d443004072440000db43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301a0000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004a010000470100004f010000560100004801000066010000300100001c010000230100001e01000016010000700100005c0100002c01000021010000", data1, 528);
        auto slug1 = sktext::gpu::Slug::Deserialize(data1, 528);
        free(data1);
        void *paintdata_slug1 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug1, 28);
        SkReadBuffer paintbuffer_slug1 = SkReadBuffer(paintdata_slug1, 28);
        SkPaint paint_slug1 = SkPaintPriv::Unflatten(paintbuffer_slug1);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data2 = malloc(264);
        hexToRawData("00000040000038c2f5be02430000803f000e7e440080ec43180100000000803f00000000000e7e44000000000000803f0080ec4300000000000000000000803f010000000100000000000000010000000000803f00000000000e7e44000000000000803f0080ec4300000000000000000000803f00807e440080d54300608f440000ed430400000000807e440080d543004084440080db43008089440000db4300e08c440000d743dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b43004000000d5000000620100005a0100005c010000", data2, 264);
        auto slug2 = sktext::gpu::Slug::Deserialize(data2, 264);
        free(data2);
        void *paintdata_slug2 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug2, 28);
        SkReadBuffer paintbuffer_slug2 = SkReadBuffer(paintdata_slug2, 28);
        SkPaint paint_slug2 = SkPaintPriv::Unflatten(paintbuffer_slug2);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data3 = malloc(300);
        hexToRawData("00000000000044c2924e5143000070410000524200c00c44480100000000803f0000000000005242000000000000803f00c00c4400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c00c4400000000000000000000803f000054420080004400008343008010440700000000005442000004440000ba42000004440000f8420000044400001c4300800044000033430000044400005543000004440000714300000244dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b430070000004e010000550100004b01000035010000200100001b0100005f010000", data3, 300);
        auto slug3 = sktext::gpu::Slug::Deserialize(data3, 300);
        free(data3);
        void *paintdata_slug3 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug3, 28);
        SkReadBuffer paintbuffer_slug3 = SkReadBuffer(paintdata_slug3, 28);
        SkPaint paint_slug3 = SkPaintPriv::Unflatten(paintbuffer_slug3);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data4 = malloc(504);
        hexToRawData("00004040000044c2d68c4d440000704100969a4300c00c44580200000000803f0000000000969a43000000000000803f00c00c4400000000000000000000803f010000000100000000000000010000000000803f0000000000969a43000000000000803f00c00c4400000000000000000000803f00809c430080004400808d44008010441800000000809c4300800a440000ab43004001440080be43008000440080d243008000440000dd43000004440080f24300000444008003440000044400000c4400c00344000015440000044400802144000004440040294400000444000032440000044400003c4400000244000042440000044400804a440080004400804f440000044400005a440000044400c064440080004400c069440080004400c06e440000044400c0784400800044004081440000044400a086440000024400a0894400000444daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301800000045000000dd0000002c01000030010000580100004c0100001201000028010000200100001801000048010000450100005c0100001101000033010000470100005a0100003d01000033010000440100003a0100005a0100005d01000049010000", data4, 504);
        auto slug4 = sktext::gpu::Slug::Deserialize(data4, 504);
        free(data4);
        void *paintdata_slug4 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug4, 28);
        SkReadBuffer paintbuffer_slug4 = SkReadBuffer(paintdata_slug4, 28);
        SkPaint paint_slug4 = SkPaintPriv::Unflatten(paintbuffer_slug4);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data5 = malloc(588);
        hexToRawData("00000000000044c2be598344000070410000524200402344c80200000000803f0000000000005242000000000000803f0040234400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040234400000000000000000000803f000050420000174400e08944000027441f0000000000504200c01a440000b84200801a440000fc4200801a4400001b43000017440000314300801a440000544300c01a4400007d4300801a4400009443000017440000a94300801a440000b943000017440080c24300801a440000d643000017440080e14300c01a440080f543000017440000044400801a4400c00b4400801a4400c013440000174400001a4400801a440000224400801a4400c0294400801a440000324400801a4400803c4400801a440040444400801a4400804c4400801a44004053440040214400405b4400801a4400c06a4400801a440080734400801a4400407a44008018440040824400801a440080864400001744daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f0000006601000010010000560100003001000049010000630100005b0100002e010000220100003d0100004f01000025010000620100003e010000560100002101000024010000210100005701000022010000450100001b010000230100005a0100003c000000400100004b010000580100005e0100004801000025010000", data5, 588);
        auto slug5 = sktext::gpu::Slug::Deserialize(data5, 588);
        free(data5);
        void *paintdata_slug5 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug5, 28);
        SkReadBuffer paintbuffer_slug5 = SkReadBuffer(paintdata_slug5, 28);
        SkPaint paint_slug5 = SkPaintPriv::Unflatten(paintbuffer_slug5);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect1 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fdedd5d3fdedd5d3f0000803f01030000", paintdata_rect1, 28);
        SkReadBuffer paintBuffer_rect1(paintdata_rect1, 28);
        SkPaint paintRect1 = SkPaintPriv::Unflatten(paintBuffer_rect1);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data6 = malloc(420);
        hexToRawData("00000041000092c29da467440000803f0060b74200003b43e80100000000803f000000000060b742000000000000803f00003b4300000000000000000000803f010000000100000000000000010000000000803f000000000060b742000000000000803f00003b4300000000000000000000803f0000c6420000e44200807e4400003c43110000000000c6420000e64200002243000008430000584300000743008081430000f2420080a5430000e6420000c743000006430000e443000007430080fd430000084300400d4400000743008021440000074300c02f440000074300803c440000f2420000474400000743008053440000f24200405e440000e4420000644400000643004073440000074313f2e9404c000000010000006365727338000000020000000000c4420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430110000000b02000068050000370500005705000094000000b0040000690300006b0500008a040000930300009304000054050000f7020000570500001a040000b004000091040000", data6, 420);
        auto slug6 = sktext::gpu::Slug::Deserialize(data6, 420);
        free(data6);
        void *paintdata_slug6 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug6, 28);
        SkReadBuffer paintbuffer_slug6 = SkReadBuffer(paintdata_slug6, 28);
        SkPaint paint_slug6 = SkPaintPriv::Unflatten(paintbuffer_slug6);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ConcatOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawPathOp
        void *pathdata0 = malloc(736);
        hexToRawData("050000005300000000000000350000000000b044000018440000b044000090430000b044000029430070a5440000a94200e09a440000000000008c4400000000000090430000000000002943000000000000a9420000a942000000000000294300000000000090430000000000008c440000000000e09a440000a9420070a544000029430000b044000090430000b044000078440000b04400807b440000b04400c07d4400e0ae440000804400c0ad44000080440000ac44000080440000a444000080440040a24400c07d440020a14400807b440000a044000078440000a044000090430000a04400005e430000a04400002f4300209a4400000043004094440000004300008c4400000043000090430000004300005e4300002f4300002f4300005e4300000043000090430000004300008c4400000043004094440000004300209a4400002f430000a04400005e430000a044000090430000a044000018440000a04400801b440020a14400c01d440040a244000020440000a444000020440000ac440000204400c0ad440000204400e0ae4400c01d440000b04400801b440000b044000018440000e0440000b8440000e044000070440000e0440080694400a0dd4400c064440040db44000060440000d8440000604400c0d444000060440060d24400c064440060bc440060884400c055440080db43004053440080d643000050440080d64300c04c440080d64300404a440080db4300c02d4400400a4400402b4400c00c4400402b440000104400402b440040134400c02d4400c015440060a84400609c44006092440060b2440000904400c0b444000090440000b844000090440040bb440060924400a0bd4400c094440000c044000098440000c0440000d8440000c0440040db440000c04400a0dd4400a0bd440000e0440040bb440000e0440000b8440001020201020201020201020201020201020201020201020201020201020205000102020201010202010202010102020201020205000000", pathdata0, 736);
        SkPath path0;
        path0.readFromMemory(pathdata0, 736);
        void *paintdata_path0 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_path0, 28);
        SkReadBuffer paintBuffer_path0(paintdata_path0, 28);
        SkPaint paintPath0 = SkPaintPriv::Unflatten(paintBuffer_path0);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 0.000000, 1344.000000, 640.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect0);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug0->draw(canvas, paint_slug0);
        //slug0->draw(canvas);
        free(paintdata_slug0);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug1->draw(canvas, paint_slug1);
        //slug1->draw(canvas);
        free(paintdata_slug1);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug2->draw(canvas, paint_slug2);
        //slug2->draw(canvas);
        free(paintdata_slug2);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug3->draw(canvas, paint_slug3);
        //slug3->draw(canvas);
        free(paintdata_slug3);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug4->draw(canvas, paint_slug4);
        //slug4->draw(canvas);
        free(paintdata_slug4);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug5->draw(canvas, paint_slug5);
        //slug5->draw(canvas);
        free(paintdata_slug5);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 237.000000, 1264.000000, 244.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect1);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug6->draw(canvas, paint_slug6);
        //slug6->draw(canvas);
        free(paintdata_slug6);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(263.000000, 512.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(7.000000, 0.000000, 46.000000, 39.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ConcatOp\n";
{
            SkM44 mat = SkM44(0.021081f,0.000000,0.000000,7.598939f,0.000000,-0.021081f,0.000000,35.479458f,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000);
            canvas->concat(mat);
            }
        
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawPathOp\n";
{
        canvas->drawPath(path0, paintPath0);
        free(pathdata0);
        free(paintdata_path0);
    }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 523F2D75FCC6400257DD652ADD944D1B_1764622847622414.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest2, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect2 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect2, 28);
        SkReadBuffer paintBuffer_rect2(paintdata_rect2, 28);
        SkPaint paintRect2 = SkPaintPriv::Unflatten(paintBuffer_rect2);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data7 = malloc(588);
        hexToRawData("00000000000044c2be598344000070410000524200402344c80200000000803f0000000000005242000000000000803f0000704100000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000704100000000000000000000803f00005042000008c200e089440000f0411f00000000005042000098c10000b8420000a0c10000fc420000a0c100001b43000008c2000031430000a0c100005443000098c100007d430000a0c100009443000008c20000a9430000a0c10000b943000008c20080c2430000a0c10000d643000008c20080e143000098c10080f543000008c2000004440000a0c100c00b440000a0c100c01344000008c200001a440000a0c1000022440000a0c100c029440000a0c1000032440000a0c100803c440000a0c1004044440000a0c100804c440000a0c1004053440000e04000405b440000a0c100c06a440000a0c1008073440000a0c100407a440000e0c1004082440000a0c100808644000008c2daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f0000006601000010010000560100003001000049010000630100005b0100002e010000220100003d0100004f01000025010000620100003e010000560100002101000024010000210100005701000022010000450100001b010000230100005a0100003c000000400100004b010000580100005e0100004801000025010000", data7, 588);
        auto slug7 = sktext::gpu::Slug::Deserialize(data7, 588);
        free(data7);
        void *paintdata_slug7 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug7, 28);
        SkReadBuffer paintbuffer_slug7 = SkReadBuffer(paintdata_slug7, 28);
        SkPaint paint_slug7 = SkPaintPriv::Unflatten(paintbuffer_slug7);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data8 = malloc(588);
        hexToRawData("00000000000044c2011d8c44000070410000524200c03944c80200000000803f0000000000005242000000000000803f0000d24200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000d24200000000000000000000803f000050420000604200c092440000f0421f0000000000504200008e420000d64200006042000014430000604200002a4300008c4200004743000060420080804300008c420080914300008c420000a14300008c420000ba4300008c420080ca4300008e420000de4300008c420000ef43000060420000f9430000604200c0014400008c4200400a440000604200c01344000060420040194400008c4200c0254400008c4200802e440000604200403e44000060420040434400008c4200004e4400008c4200805a440000604200405f4400006042008064440000604200c06e4400008c420040774400008c4200c0804400008c4200c0844400008c4200208a4400008c4200408e4400006042daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f0000006a0100002f01000033010000180100002c010000110100005701000022010000120100006401000012010000300100003d01000013010000150100003f010000210100004a010000872100003301000044010000230100002f0000003201000027010000490100004f0100002101000044010000230100001e010000", data8, 588);
        auto slug8 = sktext::gpu::Slug::Deserialize(data8, 588);
        free(data8);
        void *paintdata_slug8 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug8, 28);
        SkReadBuffer paintbuffer_slug8 = SkReadBuffer(paintdata_slug8, 28);
        SkPaint paint_slug8 = SkPaintPriv::Unflatten(paintbuffer_slug8);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data9 = malloc(264);
        hexToRawData("00000000000044c257a407430000803f0000524200405044180100000000803f0000000000005242000000000000803f0000434300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000434300000000000000000000803f000050420000124300003c43000044430400000000005042000021430000d8420000124300000043000018430000164300001243daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430040000006a010000330100005c0100002d010000", data9, 264);
        auto slug9 = sktext::gpu::Slug::Deserialize(data9, 264);
        free(data9);
        void *paintdata_slug9 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug9, 28);
        SkReadBuffer paintbuffer_slug9 = SkReadBuffer(paintdata_slug9, 28);
        SkPaint paint_slug9 = SkPaintPriv::Unflatten(paintbuffer_slug9);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data10 = malloc(324);
        hexToRawData("00004040000044c29219ba43000070410088544300405044680100000000803f0000000000885443000000000000803f0000434300000000000000000000803f010000000100000000000000010000000000803f0000000000885443000000000000803f0000434300000000000000000000803f0000584300001243004012440000524309000000000058430000204300007e430000214300009343000020430080a443000017430000b843000021430000cb43000020430000f04300001243008001440000204300800b4400002043b1ef66dd4c0000000100000063657273380000000300000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000240092ff590000000100b430090000005601000061010000590100005c010000630100004e0100001d010000480100001b010000", data10, 324);
        auto slug10 = sktext::gpu::Slug::Deserialize(data10, 324);
        free(data10);
        void *paintdata_slug10 = malloc(28);
        hexToRawData("00000000000080408e8d0d3fd1d0d03de1e0603e0000803f01030000", paintdata_slug10, 28);
        SkReadBuffer paintbuffer_slug10 = SkReadBuffer(paintdata_slug10, 28);
        SkPaint paint_slug10 = SkPaintPriv::Unflatten(paintbuffer_slug10);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data11 = malloc(372);
        hexToRawData("00000040000044c2138feb43000070410062154400405044a80100000000803f0000000000621544000000000000803f0000434300000000000000000000803f010000000100000000000000010000000000803f0000000000621544000000000000803f0000434300000000000000000000803f00c015440000124300a08544000052430d00000000c015440000124300c01b4400003a430040234400001543004032440000204300c03a44000020430040444400002143000052440000204300c05a4400001243008064440000184300006a4400001243008074440000204300007d44000020430020824400002043daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300d0000003200000045000000c200000012010000440100007201000049010000270100005d0100002e010000220100005901000023010000", data11, 372);
        auto slug11 = sktext::gpu::Slug::Deserialize(data11, 372);
        free(data11);
        void *paintdata_slug11 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug11, 28);
        SkReadBuffer paintbuffer_slug11 = SkReadBuffer(paintdata_slug11, 28);
        SkPaint paint_slug11 = SkPaintPriv::Unflatten(paintbuffer_slug11);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data12 = malloc(600);
        hexToRawData("00000040000044c2fca39044000030410000524200c06644d80200000000803f0000000000005242000000000000803f00808e4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00808e4300000000000000000000803f0000584200006c430040974400009443200000000000584200007a430000aa4200007a430000ec4200007a430000134300007a430000364300007b4300005e4300007a4300007d4300007a4300008e4300007a4300809e4300007a430000b443000072430080c04300007a430000d14300006c430000e44300007a430000fc43000072430080034400006c4300000e4400007a4300401a4400006c430080204400007a430040294400007a430080304400007a4300c0434400007a4300804c4400006c430000574400006e4300805d4400006c430080674400007a4300c0704400007a430040794400006c430080814400007a4300e0844400006f4300a0884400007b4300808c4400007b4300a0934400007a43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430200000005601000021010000580100004901000063010000570100001901000021010000580100005f010000100100003a010000200100005d0100002d01000021010000260100004b01000054010000430100004a0100002401000026080000140100004a0100004801000039010000590100002a080000780000006901000022010000", data12, 600);
        auto slug12 = sktext::gpu::Slug::Deserialize(data12, 600);
        free(data12);
        void *paintdata_slug12 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug12, 28);
        SkReadBuffer paintbuffer_slug12 = SkReadBuffer(paintdata_slug12, 28);
        SkPaint paint_slug12 = SkPaintPriv::Unflatten(paintbuffer_slug12);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data13 = malloc(564);
        hexToRawData("00004040000044c25ece6a44000070410000524200407d44a80200000000803f0000000000005242000000000000803f0080bb4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080bb4300000000000000000000803f00005c420000a343000078440000c3431d00000000005c420000aa430000ac420000aa430000f0420000a34300000c430000a343000022430000aa43000043430000aa43000060430000a643000077430000a343000085430080aa43008098430000aa430080a8430000a3430000b2430080aa430080cd430000aa430080dc430000aa430000ed430000a3430000f7430000a343008004440000a64300000a440000a34300c014440000aa4300001d440000aa43004024440000aa4300c030440000a443004037440080a443000041440000a34300804b440000aa4300c057440080a44300c061440080aa4300406c440000aa4300c072440000a643daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301d0000001a0100004a0100003f0100003e010000200100001a0100005e0100003301000064010000220100003d010000730100001b010000130100003c0100003f0100005e0100002f010000230100005a0100002301000024080000dd0000002c01000020010000d400000061010000590100005f010000", data13, 564);
        auto slug13 = sktext::gpu::Slug::Deserialize(data13, 564);
        free(data13);
        void *paintdata_slug13 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug13, 28);
        SkReadBuffer paintbuffer_slug13 = SkReadBuffer(paintdata_slug13, 28);
        SkPaint paint_slug13 = SkPaintPriv::Unflatten(paintbuffer_slug13);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data14 = malloc(588);
        hexToRawData("00000040000044c222518a44000070410000524200e08944c80200000000803f0000000000005242000000000000803f0080e84300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080e84300000000000000000000803f000058420000d04300e090440000f0431f000000000058420080d1430000c2420000d743000005430000d743000027430000d04300004e430000d743000068430000d043008089430000d743000099430000d0430000a3430000d0430000b0430000e4430080b6430080d1430080cd430000d1430000df430000d7430080f0430000d743008007440000d743000014440000d74300801c440000d743004024440000d743000030440000d043008035440000d74300403e440000d743008045440080d64300804e440000d743008056440080e44300c05e440000d743000066440000d74300c06e440000d74300007e440000d743004085440000d743008089440000d74300608d440000d743daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f000000960000004b010000480100003a010000590100002f010000230100003e010000240100004500000028080000db0000004801000041010000230100001001000055010000200100003c01000013010000540100002b010000230100003e0000005a010000480100004101000023010000100100005501000020010000", data14, 588);
        auto slug14 = sktext::gpu::Slug::Deserialize(data14, 588);
        free(data14);
        void *paintdata_slug14 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug14, 28);
        SkReadBuffer paintbuffer_slug14 = SkReadBuffer(paintdata_slug14, 28);
        SkPaint paint_slug14 = SkPaintPriv::Unflatten(paintbuffer_slug14);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data15 = malloc(288);
        hexToRawData("00000040000044c2167a2e430000803f0000524200209544380100000000803f0000000000005242000000000000803f00c00a4400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c00a4400000000000000000000803f00005c420000fd430000634300000b440600000000005c42000002440000a4420000024400000f4300000244000030430000fd43000044430000fd4300005a4300800844daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430060000005a01000040010000120100003c0100003e01000044000000", data15, 288);
        auto slug15 = sktext::gpu::Slug::Deserialize(data15, 288);
        free(data15);
        void *paintdata_slug15 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug15, 28);
        SkReadBuffer paintbuffer_slug15 = SkReadBuffer(paintdata_slug15, 28);
        SkPaint paint_slug15 = SkPaintPriv::Unflatten(paintbuffer_slug15);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -638.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 638.000000, 1344.000000, 1278.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect2);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug7->draw(canvas, paint_slug7);
        //slug7->draw(canvas);
        free(paintdata_slug7);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug8->draw(canvas, paint_slug8);
        //slug8->draw(canvas);
        free(paintdata_slug8);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug9->draw(canvas, paint_slug9);
        //slug9->draw(canvas);
        free(paintdata_slug9);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug10->draw(canvas, paint_slug10);
        //slug10->draw(canvas);
        free(paintdata_slug10);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug11->draw(canvas, paint_slug11);
        //slug11->draw(canvas);
        free(paintdata_slug11);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug12->draw(canvas, paint_slug12);
        //slug12->draw(canvas);
        free(paintdata_slug12);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug13->draw(canvas, paint_slug13);
        //slug13->draw(canvas);
        free(paintdata_slug13);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug14->draw(canvas, paint_slug14);
        //slug14->draw(canvas);
        free(paintdata_slug14);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug15->draw(canvas, paint_slug15);
        //slug15->draw(canvas);
        free(paintdata_slug15);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: D13903F6EA6503849AF27DF4BB11BBCF_1764622847659371.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest3, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect3 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect3, 28);
        SkReadBuffer paintBuffer_rect3(paintdata_rect3, 28);
        SkPaint paintRect3 = SkPaintPriv::Unflatten(paintBuffer_rect3);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data16 = malloc(576);
        hexToRawData("00000000000044c251da8d4400007041000052420040a844b80200000000803f0000000000005242000000000000803f00008c4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00008c4200000000000000000000803f000050420000a841006094440000aa421e000000000050420000c0410000c2420000a8410000ea420000a84100001b4300000c4200003e430000a841000065430000d84100007b430000a8410080924300000c420080a34300000c420000b24300000c420080c9430000a8410000de4300000c420080f04300000c4200c000440000a84100400a4400000c420080154400000c4200401e4400000c420000264400000c420000324400000c420040414400000c4200c0494400000c420040544400000c4200c05c440000084200c0654400000c4200406e440000a84100407b440000a841004082440000104200e088440000d84100a08b440000a84100e0904400000c42daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e000000920000003c0100003e01000049010000270100005d0100002e010000220100005901000023010000170100004a0100004b01000038010000580100001301000055010000200100004001000012010000440100001201000028010000200100001f01000017010000710100005d0100002d01000021010000", data16, 576);
        auto slug16 = sktext::gpu::Slug::Deserialize(data16, 576);
        free(data16);
        void *paintdata_slug16 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug16, 28);
        SkReadBuffer paintbuffer_slug16 = SkReadBuffer(paintdata_slug16, 28);
        SkPaint paint_slug16 = SkPaintPriv::Unflatten(paintbuffer_slug16);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data17 = malloc(612);
        hexToRawData("00000040000048c28e68904400007041000052420080b344e80200000000803f0000000000005242000000000000803f0000204300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000204300000000000000000000803f000058420000dc420000974400002f4321000000000058420000e4420000be420000fc42000008430000fa42000023430000ea4200004c430000e242000079430000fa4200008b430000f84200009d430000fa420000ae430000fa420000c2430000de420000cd430000fc420000dd430000fa420000ee430000ea420000f9430000de42000002440000fa4200c00a440000fa42000015440000184300c01c440000de42008026440000fc42008030440000ea4200c03a440000fa42004043440000ea4200c048440000de42004053440000fa4200805b440000fa4200c066440000fc4200c070440000fa4200807b440000fa42000082440000dc4200208a440000fa4200c08d440000de42008090440000fa4200a094440000de42daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43021000000d6000000630100005b0100005d010000cb000000560100002901000010010000460100003101000076010000120100005c010000310100004a010000470100003d00000016010000610100005d0100004b0100005c0100002d010000210100005401000060010000440100004b010000802100001901000031010000110100003f010000", data17, 612);
        auto slug17 = sktext::gpu::Slug::Deserialize(data17, 612);
        free(data17);
        void *paintdata_slug17 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug17, 28);
        SkReadBuffer paintbuffer_slug17 = SkReadBuffer(paintdata_slug17, 28);
        SkPaint paint_slug17 = SkPaintPriv::Unflatten(paintbuffer_slug17);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data18 = malloc(612);
        hexToRawData("00004040000044c24db090440000803f0000524200c0be44e80200000000803f0000000000005242000000000000803f00007a4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00007a4300000000000000000000803f00005c42000049430040974400007b432100000000005c42000049430000bc4200005743000002430000574300001f43000058430000484300005743008082430000574300809243000057430080a64300004f430080b243000057430080c34300004f430080ce43000049430080d943000057430000eb430000574300c003440000574300800b4400005743000014440000574300001b440000574300c023440000584300002e4400005743008035440000574300403d440000574300c045440000574300005144000057430080594400005743004061440000574300406d4400004943008072440000574300007d44000057430000824400004943008084440000584300c089440000494300a08e440000574300e0924400004943daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430210000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004a010000470100005701000022010000590100004a01000060010000540100001a01000022010000590100001001000056010000210100003101000046010000180100003c010000620100001e010000210100001c010000", data18, 612);
        auto slug18 = sktext::gpu::Slug::Deserialize(data18, 612);
        free(data18);
        void *paintdata_slug18 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug18, 28);
        SkReadBuffer paintbuffer_slug18 = SkReadBuffer(paintdata_slug18, 28);
        SkPaint paint_slug18 = SkPaintPriv::Unflatten(paintbuffer_slug18);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data19 = malloc(348);
        hexToRawData("0000803f000044c280e6bb430000803f000052420000ca44880100000000803f0000000000005242000000000000803f0000aa4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000aa4300000000000000000000803f00005442008091430000d6430080aa430b00000000005442008091430000be4200809843000000430080984300001f43008098430000514300809843000074430080984300008f43000099430080ab43008098430080bb43008091430000c543008091430080d14300009343daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300b0000002e010000220100005501000020010000100100005a01000069010000220100003d0100003f01000011000000", data19, 348);
        auto slug19 = sktext::gpu::Slug::Deserialize(data19, 348);
        free(data19);
        void *paintdata_slug19 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug19, 28);
        SkReadBuffer paintbuffer_slug19 = SkReadBuffer(paintdata_slug19, 28);
        SkPaint paint_slug19 = SkPaintPriv::Unflatten(paintbuffer_slug19);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data20 = malloc(612);
        hexToRawData("00000040000044c274558c4400007041000052420020dd44e80200000000803f0000000000005242000000000000803f0080f64300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080f64300000000000000000000803f000058420000de4300e092440000fe4321000000000058420080df4300009a420000de430000e6420080e54300001a430000e54300003c430080e543000065430080df43000075430000e543008089430000e5430000a1430000de430000ab430080e5430000c0430000e5430080cd430000e1430080e0430000de430080eb430000e5430080fd430000e543004007440000de4300c010440000de4300c015440000e54300c01f440080e44300802c440000de4300c032440000e54300803b440000e54300c046440000e14300404c440000de4300c056440000e543004063440000e54300006a440000e143000070440000e543008078440000e543008081440000de43006086440000e54300a08a440000e54300808e440000de43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43021000000b200000026010000710100004b0100006101000019080000540100002201000037010000620100005a0100005c0100003e010000480100004a0100003b01000033010000470100002a0100002701000048010000550100005e0100002e010000220100005b0100005c01000011010000470100001d01000010010000560100001d010000", data20, 612);
        auto slug20 = sktext::gpu::Slug::Deserialize(data20, 612);
        free(data20);
        void *paintdata_slug20 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug20, 28);
        SkReadBuffer paintbuffer_slug20 = SkReadBuffer(paintdata_slug20, 28);
        SkPaint paint_slug20 = SkPaintPriv::Unflatten(paintbuffer_slug20);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data21 = malloc(528);
        hexToRawData("00000000000044c24af54c4400007041000052420060e844780200000000803f0000000000005242000000000000803f00c0114400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c0114400000000000000000000803f000054420080054400005a44008015441a000000000054420080054400009242008005440000ba4200800544000004430000094400002243000009440000444300000944000060430040094400008b430000094400809a43000009440080aa43008005440000b743000009440000c743000009440080d643000009440080e643000009440000fc430000094400c005440000094400c00d4400c00f44008015440080054400002044000009440040284400000944000030440000094400003c4400800544000041440000074400c04a4400800544000050440000094400c0574400400944daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301a0000003e010000300100001501000057010000110100005701000072010000560100002001000027010000200100005701000022010000440100001b010000230100003e0000002e010000220100005501000020010000300100005d010000330100005801000075000000", data21, 528);
        auto slug21 = sktext::gpu::Slug::Deserialize(data21, 528);
        free(data21);
        void *paintdata_slug21 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug21, 28);
        SkReadBuffer paintbuffer_slug21 = SkReadBuffer(paintdata_slug21, 28);
        SkPaint paint_slug21 = SkPaintPriv::Unflatten(paintbuffer_slug21);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data22 = malloc(300);
        hexToRawData("00000040000038c2d4c47b430000803f002f5f440060e844480100000000803f00000000002f5f44000000000000803f00c0114400000000000000000000803f010000000100000000000000010000000000803f00000000002f5f44000000000000803f00c0114400000000000000000000803f00c05f440040064400208f44000012440700000000c05f440040064400c0694400400944000074440000094400c07a4400000744002082440040064400e087440040064400a08c4400400644dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b43007000000d700000060010000580100005e01000090000000ce000000b2000000", data22, 300);
        auto slug22 = sktext::gpu::Slug::Deserialize(data22, 300);
        free(data22);
        void *paintdata_slug22 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug22, 28);
        SkReadBuffer paintbuffer_slug22 = SkReadBuffer(paintdata_slug22, 28);
        SkPaint paint_slug22 = SkPaintPriv::Unflatten(paintbuffer_slug22);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data23 = malloc(372);
        hexToRawData("00004040000044c2d29ee3430000803f0000524200a0f344a80100000000803f0000000000005242000000000000803f0040284400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040284400000000000000000000803f00005c4200001c440000fe43008028440d00000000005c4200001c440000bc4200801f440000024300801f4400001f4300c01f440000484300801f440080824300801f440080924300801f440080a64300801d440080b24300801f440080c34300801d440080ce4300001c440080d94300801f440000eb4300801f44dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4300d0000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004a01000047010000", data23, 372);
        auto slug23 = sktext::gpu::Slug::Deserialize(data23, 372);
        free(data23);
        void *paintdata_slug23 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug23, 28);
        SkReadBuffer paintbuffer_slug23 = SkReadBuffer(paintdata_slug23, 28);
        SkPaint paint_slug23 = SkPaintPriv::Unflatten(paintbuffer_slug23);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -1276.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 1276.000000, 1344.000000, 1916.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect3);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug16->draw(canvas, paint_slug16);
        //slug16->draw(canvas);
        free(paintdata_slug16);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug17->draw(canvas, paint_slug17);
        //slug17->draw(canvas);
        free(paintdata_slug17);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug18->draw(canvas, paint_slug18);
        //slug18->draw(canvas);
        free(paintdata_slug18);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug19->draw(canvas, paint_slug19);
        //slug19->draw(canvas);
        free(paintdata_slug19);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug20->draw(canvas, paint_slug20);
        //slug20->draw(canvas);
        free(paintdata_slug20);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug21->draw(canvas, paint_slug21);
        //slug21->draw(canvas);
        free(paintdata_slug21);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug22->draw(canvas, paint_slug22);
        //slug22->draw(canvas);
        free(paintdata_slug22);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug23->draw(canvas, paint_slug23);
        //slug23->draw(canvas);
        free(paintdata_slug23);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: EFE9EDB6749339AC9BADAC74A595E391_1764622847669889.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest4, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect4 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect4, 28);
        SkReadBuffer paintBuffer_rect4(paintdata_rect4, 28);
        SkPaint paintRect4 = SkPaintPriv::Unflatten(paintBuffer_rect4);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data24 = malloc(372);
        hexToRawData("00004040000044c2d29ee3430000803f0000524200a0f344a80100000000803f0000000000005242000000000000803f00000c4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00000c4200000000000000000000803f00005c42000060c10000fe43000010420d00000000005c42000060c10000bc4200000080000002430000008000001f430000803f0000484300000080008082430000008000809243000000800080a643000000c10080b243000000800080c343000000c10080ce43000060c10080d943000000800000eb4300000080dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4300d0000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004a01000047010000", data24, 372);
        auto slug24 = sktext::gpu::Slug::Deserialize(data24, 372);
        free(data24);
        void *paintdata_slug24 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug24, 28);
        SkReadBuffer paintbuffer_slug24 = SkReadBuffer(paintdata_slug24, 28);
        SkPaint paint_slug24 = SkPaintPriv::Unflatten(paintbuffer_slug24);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data25 = malloc(600);
        hexToRawData("00000040000044c2577f8544000070410000524200d00f45d80200000000803f0000000000005242000000000000803f0080c14300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080c14300000000000000000000803f000058420000a94300208c440000c94320000000000058420080aa4300009a420000a9430000e6420080b04300001a430000b04300003c430080b043000065430080aa43000073430000a943000094430000a94300009e430000a9430000a8430000a9430000bb430000b0430080d2430000ac430000df430000b0430000f8430000a943008001440000b04300000a440000b043008012440000b04300001a440000b043004028440080aa43004032440080b04300c03c440000b043008043440000ac43000049440080bd43000051440000ac43008056440000a943008060440000a943000066440000b04300c070440000a943004076440000b043008080440000ac43004083440000a943008088440000b043daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43020000000b200000026010000710100004b01000061010000190800001e0100003e0100003001000039010000230100005f010000480100003f01000021010000100100005601000045010000d5000000620100005a0100005c0100003c0000005d0100002e010000320100005a010000310100005a0100005d0100002e01000022010000", data25, 600);
        auto slug25 = sktext::gpu::Slug::Deserialize(data25, 600);
        free(data25);
        void *paintdata_slug25 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug25, 28);
        SkReadBuffer paintbuffer_slug25 = SkReadBuffer(paintdata_slug25, 28);
        SkPaint paint_slug25 = SkPaintPriv::Unflatten(paintbuffer_slug25);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data26 = malloc(612);
        hexToRawData("00000040000044c2724e8c44000070410000524200701545e80200000000803f0000000000005242000000000000803f0080ee4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080ee4300000000000000000000803f00005c420000d64300e092440000f6432100000000005c420000dd430000a8420000dd430000ea420000dd43000012430000d943000029430000d64300003f430000dd43000062430000dd4300008d430000d643008099430000dd430080ab430000dd430080c1430080dd430080d4430000dd430000e6430080dd430080fc430080d743000006440080d743004011440000d643004016440000d64300c01f440000dd43008028440000d643004032440000d94300c037440000d643004042440000dd4300804a440000dd4300c051440000dd4300005e440000dd4300c065440000dd4300006e440000dd43004075440000dd4300c07d440080dd43000084440000dd4300e087440000dd4300c08b440000dd4300e08f440000dd43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430210000005a010000200100001a0100005e010000330100004801000045010000250100004a01000054010000700100004a0100006001000010000000910000003f0100003d01000048010000260100005c0100002d01000021010000580100002101000056010000200100005b010000490100006201000056010000190100002101000058010000", data26, 612);
        auto slug26 = sktext::gpu::Slug::Deserialize(data26, 612);
        free(data26);
        void *paintdata_slug26 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug26, 28);
        SkReadBuffer paintbuffer_slug26 = SkReadBuffer(paintdata_slug26, 28);
        SkPaint paint_slug26 = SkPaintPriv::Unflatten(paintbuffer_slug26);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data27 = malloc(540);
        hexToRawData("00004040000044c2fcb78444000070410000524200101b45880200000000803f0000000000005242000000000000803f00c00d4400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c00d4400000000000000000000803f00005c420080014400408b44008011441b00000000005c42000005440000b442000005440000ee4200000544000012430040054400003a43000005440000774300000544008093430000034400809e43008001440080b343000005440080c443000003440080d743004005440080ea43000005440080fb430040054400000c4400800144008016440000054400801e44004005440080284400000544004034440000054400403e4400000544000046440000054400c04e4400c00444004057440000054400c05e44000005440040674400000544000076440000054400a082440000054400e0864400800144daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301b00000012010000580100005a0100006301000043010000210100005e0100002e010000120100005c0100007301000049010000620100002c0100001001000066010000200100004c01000057010000490100002b01000056010000100100004201000040010000220100001d010000", data27, 540);
        auto slug27 = sktext::gpu::Slug::Deserialize(data27, 540);
        free(data27);
        void *paintdata_slug27 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug27, 28);
        SkReadBuffer paintbuffer_slug27 = SkReadBuffer(paintdata_slug27, 28);
        SkPaint paint_slug27 = SkPaintPriv::Unflatten(paintbuffer_slug27);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data28 = malloc(624);
        hexToRawData("0000803f000048c226ff9444000070410000524200b02045f80200000000803f0000000000005242000000000000803f0040244400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040244400000000000000000000803f0000544200c0174400809b44000028442200000000005442000018440000bc4200801b440000fc42000018440000174300801b4400003a4300801b440000594300801b44000079430040224400808c43000018440000a04300c01b440080b343008019440080c74300801b440080dc4300801b440080ed430080194400800044000018440080054400801b440040144400801b4400c01c4400801b440040264400c01b4400c0334400801b4400803a4400801b4400c0444400801b4400004d4400801b4400405444000018440080594400c017440040644400801b4400806f44000018440000754400801b4400807d4400801b4400c0834400401b440000884400c01b4400408d4400801b440080914400401b440000964400801b4400609a4400c01b44daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430220000001601000021010000240100004901000056010000210100003f00000014010000630100005f010000450100004b0100005d01000033010000440100001001000046010000730100005b0100004d010000230100001a010000320100008b2100001a0100003f01000012010000470100002a01000062010000120100002b0100002301000076000000", data28, 624);
        auto slug28 = sktext::gpu::Slug::Deserialize(data28, 624);
        free(data28);
        void *paintdata_slug28 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug28, 28);
        SkReadBuffer paintbuffer_slug28 = SkReadBuffer(paintdata_slug28, 28);
        SkPaint paint_slug28 = SkPaintPriv::Unflatten(paintbuffer_slug28);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect5 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fdedd5d3fdedd5d3f0000803f01030000", paintdata_rect5, 28);
        SkReadBuffer paintBuffer_rect5(paintdata_rect5, 28);
        SkPaint paintRect5 = SkPaintPriv::Unflatten(paintBuffer_rect5);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data29 = malloc(360);
        hexToRawData("0000e040000086c2d6ff0f440000b0410000c44200b00545980100000000803f000000000000c442000000000000803f0000614300000000000000000000803f010000000100000000000000010000000000803f000000000000c442000000000000803f0000614300000000000000000000803f0000d24200001e4300802844000077430c0000000000d24200001f430000174300003143000049430000314300007e430000314300009043000031430080a94300001f430000b543000031430000ce43000031430000f84300001e4300400a440000324300801644000031430080204400002543d9c83acd4c000000010000006365727338000000040000000000b6420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300c0000005c01000092030000f502000024050000900400001b04000093040000ea030000090200006b0500003605000054050000", data29, 360);
        auto slug29 = sktext::gpu::Slug::Deserialize(data29, 360);
        free(data29);
        void *paintdata_slug29 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug29, 28);
        SkReadBuffer paintbuffer_slug29 = SkReadBuffer(paintdata_slug29, 28);
        SkPaint paint_slug29 = SkPaintPriv::Unflatten(paintbuffer_slug29);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -1914.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 1914.000000, 1344.000000, 2554.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect4);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug24->draw(canvas, paint_slug24);
        //slug24->draw(canvas);
        free(paintdata_slug24);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug25->draw(canvas, paint_slug25);
        //slug25->draw(canvas);
        free(paintdata_slug25);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug26->draw(canvas, paint_slug26);
        //slug26->draw(canvas);
        free(paintdata_slug26);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug27->draw(canvas, paint_slug27);
        //slug27->draw(canvas);
        free(paintdata_slug27);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug28->draw(canvas, paint_slug28);
        //slug28->draw(canvas);
        free(paintdata_slug28);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 2176.000000, 1264.000000, 2179.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect5);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug29->draw(canvas, paint_slug29);
        //slug29->draw(canvas);
        free(paintdata_slug29);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 61A370EF33D0B027F91B2735A947416B_1764622847676090.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest5, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect6 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect6, 28);
        SkReadBuffer paintBuffer_rect6(paintdata_rect6, 28);
        SkPaint paintRect6 = SkPaintPriv::Unflatten(paintBuffer_rect6);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data30 = malloc(624);
        hexToRawData("0000803f000048c226ff9444000070410000524200b02045f80200000000803f0000000000005242000000000000803f0000984100000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000984100000000000000000000803f000054420000f8c100809b440000084222000000000054420000f0c10000bc42000080c10000fc420000f0c100001743000080c100003a43000080c100005943000080c1000079430000304100808c430000f0c10000a043000070c10080b3430000c0c10080c743000080c10080dc43000080c10080ed430000c0c1008000440000f0c100800544000080c100401444000080c100c01c44000080c100402644000070c100c03344000080c100803a44000080c100c04444000080c100004d44000080c1004054440000f0c1008059440000f8c100406444000080c100806f440000f0c100007544000080c100807d44000080c100c08344000088c100008844000070c100408d44000080c100809144000088c100009644000080c100609a44000070c1daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430220000001601000021010000240100004901000056010000210100003f00000014010000630100005f010000450100004b0100005d01000033010000440100001001000046010000730100005b0100004d010000230100001a010000320100008b2100001a0100003f01000012010000470100002a01000062010000120100002b0100002301000076000000", data30, 624);
        auto slug30 = sktext::gpu::Slug::Deserialize(data30, 624);
        free(data30);
        void *paintdata_slug30 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug30, 28);
        SkReadBuffer paintbuffer_slug30 = SkReadBuffer(paintdata_slug30, 28);
        SkPaint paint_slug30 = SkPaintPriv::Unflatten(paintbuffer_slug30);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data31 = malloc(600);
        hexToRawData("00000000000044c2b6d18b44000070410000524200703a45d80200000000803f0000000000005242000000000000803f0080d74300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080d74300000000000000000000803f000050420000bf43006092440000df4320000000000050420080c0430000c4420000bf43000010430000c643000032430000c64300004f430000c243000065430000bf4300007b430000c64300008f430000c6430000a4430000c6430000b5430000c2430000c1430000c6430080d0430000bf430000da430080c6430000f5430000c643008004440000bf4300000a440000c643004011440000bf4300801a440000c643000025440000c64300c02d440000c64300003d440000c643004045440000bf43004053440000c043008059440000c24300405f440000bf4300c069440000c64300c075440000bf43000080440000c643008084440000c64300c088440000bf4300808d440080d34300608f440080c043daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43020000000920000007c21000022010000190100005d010000320100004a01000044010000120100005c010000210100003c0100007201000046010000300100001901000039010000440100001301000041010000230100001e010000260800005f0100002c01000020010000140100004b010000480100003a0100003d00000028080000", data31, 600);
        auto slug31 = sktext::gpu::Slug::Deserialize(data31, 600);
        free(data31);
        void *paintdata_slug31 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug31, 28);
        SkReadBuffer paintbuffer_slug31 = SkReadBuffer(paintdata_slug31, 28);
        SkPaint paint_slug31 = SkPaintPriv::Unflatten(paintbuffer_slug31);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data32 = malloc(528);
        hexToRawData("0000803f000044c274a77944000070410000524200104045780200000000803f0000000000005242000000000000803f0040024400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040024400000000000000000000803f000054420000ec4300608344000006441a000000000054420080ed430000b8420000ec43000006430000f343000037430080ed4300005f430080f343008084430000f343000092430000ef430080a5430080ed430080b8430000f3430000c8430000f3430000d9430080f2430080ea430000f3430080f9430000f343004005440000f343000014440000f34300c022440000ec43000028440000f343000032440080f24300c03e440080ed4300c048440000f343008051440000f34300805b440080f243000064440080f34300406e440000f34300c076440080f24300c07f440000f343dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4301a000000de0000002c01000020010000d5000000620100005a0100005c010000ce00000056010000490100002a01000056010000100100004101000040010000320100004601000029010000be00000013010000450100002b01000063010000130100002901000020010000", data32, 528);
        auto slug32 = sktext::gpu::Slug::Deserialize(data32, 528);
        free(data32);
        void *paintdata_slug32 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug32, 28);
        SkReadBuffer paintbuffer_slug32 = SkReadBuffer(paintdata_slug32, 28);
        SkPaint paint_slug32 = SkPaintPriv::Unflatten(paintbuffer_slug32);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data33 = malloc(264);
        hexToRawData("380a8341000044c23d6001430000000080ba834400104045180100000000803f0000000080ba8344000000000000803f0040024400000000000000000000803f010000000100000000000000010000000000803f0000000080ba8344000000000000803f0040024400000000000000000000803f00c085440000ec4300e09344004002440400000000c085440080f34300a08c440000ec4300208f440000ec4300a091440000ec43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300400000069010000320100003f0100003d010000", data33, 264);
        auto slug33 = sktext::gpu::Slug::Deserialize(data33, 264);
        free(data33);
        void *paintdata_slug33 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug33, 28);
        SkReadBuffer paintbuffer_slug33 = SkReadBuffer(paintdata_slug33, 28);
        SkPaint paint_slug33 = SkPaintPriv::Unflatten(paintbuffer_slug33);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data34 = malloc(576);
        hexToRawData("0000803f000044c2be998b44000070410000524200b04545b80200000000803f0000000000005242000000000000803f00c0184400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c0184400000000000000000000803f0000544200800c440020924400801c441e0000000000544200c00f440000ae4200800c440000d4420040104400001243000010440000414300401044000068430000104400008543004010440000a243000010440000b343000010440080d043000010440000e143004010440000f543000010440080024400001044008009440040104400c0124400800c4400801844000010440000204400401044008032440000104400403b4400800c440000454400000e4400804a4400800c4400005544000010440000614400800c44008066440000104400006f44000010440000794400c00f4400c0804400401044000086440000104400208a4400c00f4400a08e4400001044daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e0000002a010000320100006601000020010000700100004b010000600100001201000044010000480100006501000023010000560100006501000032010000230100006a01000049010000260100005d0100002d010000210100003e01000010010000460100002801000060010000100100002a01000021010000", data34, 576);
        auto slug34 = sktext::gpu::Slug::Deserialize(data34, 576);
        free(data34);
        void *paintdata_slug34 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug34, 28);
        SkReadBuffer paintbuffer_slug34 = SkReadBuffer(paintdata_slug34, 28);
        SkPaint paint_slug34 = SkPaintPriv::Unflatten(paintbuffer_slug34);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data35 = malloc(624);
        hexToRawData("0000803f000048c2a1839044000070410000524200504b45f80200000000803f0000000000005242000000000000803f00402f4400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00402f4400000000000000000000803f0000584200c02244000097440000334422000000000058420000234400009a42008026440000d8420080264400000f430080264400005b4300c022440080824300802644000092430080264400009f43008024440000b243008026440000c643008026440080d443000023440000df43008026440000f443008026440040014400002344004006440080264400c00f4400002344004015440080264400c01d44008026440000254400002d4400002c4400c0234400c035440080264400403e4400c026440080484400c0234400004c4400002344000051440000234400005a440000234400c0634400c0264400c06d440000234400c0724400002344004078440000234400e0824400802644004089440000234400608c44008026440020904400c02644daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4302200000026010000570100004a010000430100008b21000056010000590100005e0100004c01000057010000320100004601000019010000310100004e0100003c010000220100005901000047000000f30000004b01000061010000190800003c0100003e0100001501000060010000300100003d0100001f0100001301000027010000200100006a010000", data35, 624);
        auto slug35 = sktext::gpu::Slug::Deserialize(data35, 624);
        free(data35);
        void *paintdata_slug35 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug35, 28);
        SkReadBuffer paintbuffer_slug35 = SkReadBuffer(paintdata_slug35, 28);
        SkPaint paint_slug35 = SkPaintPriv::Unflatten(paintbuffer_slug35);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect7 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect7, 28);
        SkReadBuffer paintBuffer_rect7(paintdata_rect7, 28);
        SkPaint paintRect7 = SkPaintPriv::Unflatten(paintBuffer_rect7);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data36 = malloc(420);
        hexToRawData("00000000000068c2f2d943440000904100d0d24200802b45e80100000000803f0000000000d0d242000000000000803f0000404300000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f0000404300000000000000000000803f0000d4420000064300005e4400005243110000000000d442000006430000434300001843000082430000084300809943000019430000ae43000018430080be4300000e430080d943000009430080ef43000018430080fb43000018430000094400001743000015440000184300c01a4400001843008025440000184300c0354400001843008045440000094300404a440000184300c054440000174318bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43011000000f202000091030000080200006a0500003605000057050000fc01000024050000b3040000ea03000025050000f50200008b040000890400001b04000090040000eb030000", data36, 420);
        auto slug36 = sktext::gpu::Slug::Deserialize(data36, 420);
        free(data36);
        void *paintdata_slug36 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug36, 28);
        SkReadBuffer paintbuffer_slug36 = SkReadBuffer(paintdata_slug36, 28);
        SkPaint paint_slug36 = SkPaintPriv::Unflatten(paintbuffer_slug36);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data37 = malloc(312);
        hexToRawData("0000c04000005cc28c2bac430000904100d0d24200b03045580100000000803f0000000000d0d242000000000000803f0080894300000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f0080894300000000000000000000803f0000e04200005c430000e14300809243080000000000e04200005c430000174300006b430000424300006b4300006c4300006a4300008e4300006c430000a34300006b430080b74300006a430080ce4300006b4318bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430080000005e010000f702000090040000eb0300006b050000f6020000eb03000093030000", data37, 312);
        auto slug37 = sktext::gpu::Slug::Deserialize(data37, 312);
        free(data37);
        void *paintdata_slug37 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug37, 28);
        SkReadBuffer paintbuffer_slug37 = SkReadBuffer(paintdata_slug37, 28);
        SkPaint paint_slug37 = SkPaintPriv::Unflatten(paintbuffer_slug37);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -2552.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 2552.000000, 1344.000000, 3192.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect6);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug30->draw(canvas, paint_slug30);
        //slug30->draw(canvas);
        free(paintdata_slug30);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug31->draw(canvas, paint_slug31);
        //slug31->draw(canvas);
        free(paintdata_slug31);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug32->draw(canvas, paint_slug32);
        //slug32->draw(canvas);
        free(paintdata_slug32);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug33->draw(canvas, paint_slug33);
        //slug33->draw(canvas);
        free(paintdata_slug33);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug34->draw(canvas, paint_slug34);
        //slug34->draw(canvas);
        free(paintdata_slug34);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug35->draw(canvas, paint_slug35);
        //slug35->draw(canvas);
        free(paintdata_slug35);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 2858.000000, 1264.000000, 2861.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect7);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug36->draw(canvas, paint_slug36);
        //slug36->draw(canvas);
        free(paintdata_slug36);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug37->draw(canvas, paint_slug37);
        //slug37->draw(canvas);
        free(paintdata_slug37);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: DC936E4592B9C5C812B4672A9E965F37_1764622849438354.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest6, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect8 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect8, 28);
        SkReadBuffer paintBuffer_rect8(paintdata_rect8, 28);
        SkPaint paintRect8 = SkPaintPriv::Unflatten(paintBuffer_rect8);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data38 = malloc(624);
        hexToRawData("0000803f000048c2a1839044000070410000524200504b45f80200000000803f0000000000005242000000000000803f00007c4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00007c4200000000000000000000803f00005842000050410000974400009c4222000000000058420000604100009a420000e0410000d8420000e04100000f430000e04100005b4300005041008082430000e041000092430000e04100009f430000a0410000b2430000e0410000c6430000e0410080d443000060410000df430000e0410000f4430000e0410040014400006041004006440000e04100c00f4400006041004015440000e04100c01d440000e041000025440000584200002c440000884100c035440000e04100403e440000e841008048440000884100004c4400006041000051440000604100005a440000604100c063440000e84100c06d440000604100c0724400006041004078440000604100e082440000e041004089440000604100608c440000e041002090440000e841daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4302200000026010000570100004a010000430100008b21000056010000590100005e0100004c01000057010000320100004601000019010000310100004e0100003c010000220100005901000047000000f30000004b01000061010000190800003c0100003e0100001501000060010000300100003d0100001f0100001301000027010000200100006a010000", data38, 624);
        auto slug38 = sktext::gpu::Slug::Deserialize(data38, 624);
        free(data38);
        void *paintdata_slug38 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug38, 28);
        SkReadBuffer paintbuffer_slug38 = SkReadBuffer(paintdata_slug38, 28);
        SkPaint paint_slug38 = SkPaintPriv::Unflatten(paintbuffer_slug38);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data39 = malloc(600);
        hexToRawData("00000000000044c216e79044000070410000524200f05045d80200000000803f0000000000005242000000000000803f0000194300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000194300000000000000000000803f000054420000d042006097440000284320000000000054420000ec420000ba420000ec420000f8420000ec4200001c430000d042000033430000ec42000055430000ec42000071430000dc42008084430000ec4200009b430000ec420000ac430000d0420000b7430000ec420080c8430000ec420080dc430000ea420080f5430000dc42004000440000d04200c00a440000ec42008016440000ee4200c024440000ec4200c02c440000ee42008034440000114300c03c440000ec42008045440000ec42000050440000d04200405d440000d042004066440000ee42008073440000dc42000079440000d04200c081440000ec42002088440000ec4200208c440000ec42006091440000d0420000964400001143daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430200000004e010000550100004b01000035010000200100001b0100005f01000058010000130100003d0100004b010000450100002b0100005c0100002d010000210100006901000012010000730100003f00000013010000450100001c01000014010000720100005e0100002e0100002201000023010000460100001c0100003f000000", data39, 600);
        auto slug39 = sktext::gpu::Slug::Deserialize(data39, 600);
        free(data39);
        void *paintdata_slug39 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug39, 28);
        SkReadBuffer paintbuffer_slug39 = SkReadBuffer(paintdata_slug39, 28);
        SkPaint paint_slug39 = SkPaintPriv::Unflatten(paintbuffer_slug39);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data40 = malloc(588);
        hexToRawData("00000000000044c265e48d44000070410000524200905645c80200000000803f0000000000005242000000000000803f0000734300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000734300000000000000000000803f000050420000424300809444000081431f00000000005042000051430000b642000050430000fa420000514300002643000045430000354300004243000048430000424300006c430000424300008b430000504300809b43000051430000af43000050430000c843000050430000e243000050430080f0430000504300c000440000424300c005440000424300400b44000042430080184400004f430040214400005043008028440000504300403144000050430000384400005043004046440000504300004f440000424300c0584400004243004063440000504300806b440000514300807d440000484300c0814400005043002088440000514300608d44000050430000914400005043daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f0000007201000048010000620100001a0800003d0100003f0100002f010000130100006401000022010000130100005a010000480100003d010000330100001c0100002801000054010000110100005b0100004d01000049010000270100002d010000490100006b0100005d0100004a010000610100005901000023010000", data40, 588);
        auto slug40 = sktext::gpu::Slug::Deserialize(data40, 588);
        free(data40);
        void *paintdata_slug40 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug40, 28);
        SkReadBuffer paintbuffer_slug40 = SkReadBuffer(paintdata_slug40, 28);
        SkPaint paint_slug40 = SkPaintPriv::Unflatten(paintbuffer_slug40);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data41 = malloc(360);
        hexToRawData("0000803f000044c2f36ec643000070410000524200305c45980100000000803f0000000000005242000000000000803f0080a64300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080a64300000000000000000000803f0000544200008e430000e1430000ae430c00000000005442000091430000964200008e430000ec42000095430000254300008e4300003b430000954300005d4300009543008082430080944300809343008095430080a843000095430080b943008094430080cb43000095430080dc430000a243daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300c0000005e0100002f010000230100003f01000011010000470100002a01000061010000110100002b0100002301000045000000", data41, 360);
        auto slug41 = sktext::gpu::Slug::Deserialize(data41, 360);
        free(data41);
        void *paintdata_slug41 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug41, 28);
        SkReadBuffer paintbuffer_slug41 = SkReadBuffer(paintdata_slug41, 28);
        SkPaint paint_slug41 = SkPaintPriv::Unflatten(paintbuffer_slug41);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data42 = malloc(600);
        hexToRawData("00000040000044c29b5e8d44000070410000524200b07045d80200000000803f0000000000005242000000000000803f0040254400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040254400000000000000000000803f00005842000019440000944400002944200000000000584200c0194400009a42000019440000ea4200801c440000144300801c440000354300801c44000059430000194400007e43000019440000894300801c4400009d4300401c440080b64300801c440000d44300c01c440000e843000019440000f24300801a440000fd43000019440080034400801c4400000d44000019440080124400801c4400801e44000019440080284400c01c4400c0324400801c4400403d440000194400c0464400801c4400404e4400801c4400c05644000019440040604400801c4400c06b4400801c44004074440000194400007e4400801c440020844400801c440060884400401c4400e08c4400801c440000914400801c44daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43020000000b2000000260100005501000020010000130100001c01000033010000440100002a01000043010000620100003e0100005c010000300100004d0100003c010000220100002e01000062010000460100001d01000054010000220100001d010000580100004b010000240100004f010000120100002b010000230100005a010000", data42, 600);
        auto slug42 = sktext::gpu::Slug::Deserialize(data42, 600);
        free(data42);
        void *paintdata_slug42 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug42, 28);
        SkReadBuffer paintbuffer_slug42 = SkReadBuffer(paintdata_slug42, 28);
        SkPaint paint_slug42 = SkPaintPriv::Unflatten(paintbuffer_slug42);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect9 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect9, 28);
        SkReadBuffer paintBuffer_rect9(paintdata_rect9, 28);
        SkPaint paintRect9 = SkPaintPriv::Unflatten(paintBuffer_rect9);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data43 = malloc(372);
        hexToRawData("0000c040000068c2fcaf0f440000904100d0d24200006745a80100000000803f0000000000d0d242000000000000803f0000fd4300000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f0000fd4300000000000000000000803f0000e0420000e04300002a44000003440d0000000000e0420000e14300001f430080e943000048430000e943000069430000e44300808f430080e1430080a4430000e9430000c6430080e1430000d9430000e9430000ed430000e943004001440000e943008011440080e84300c01c440000e04300c020440000e94318bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300d0000000a0200006805000037050000550500007a000000e7050000a6000000e3050000f50200008b040000190500007004000091030000", data43, 372);
        auto slug43 = sktext::gpu::Slug::Deserialize(data43, 372);
        free(data43);
        void *paintdata_slug43 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug43, 28);
        SkReadBuffer paintbuffer_slug43 = SkReadBuffer(paintdata_slug43, 28);
        SkPaint paint_slug43 = SkPaintPriv::Unflatten(paintbuffer_slug43);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -3190.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 3190.000000, 1344.000000, 3830.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect8);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug38->draw(canvas, paint_slug38);
        //slug38->draw(canvas);
        free(paintdata_slug38);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug39->draw(canvas, paint_slug39);
        //slug39->draw(canvas);
        free(paintdata_slug39);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug40->draw(canvas, paint_slug40);
        //slug40->draw(canvas);
        free(paintdata_slug40);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug41->draw(canvas, paint_slug41);
        //slug41->draw(canvas);
        free(paintdata_slug41);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug42->draw(canvas, paint_slug42);
        //slug42->draw(canvas);
        free(paintdata_slug42);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 3727.000000, 1264.000000, 3730.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect9);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug43->draw(canvas, paint_slug43);
        //slug43->draw(canvas);
        free(paintdata_slug43);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: B2CE2A5294ADAB099058AD556FCE4725_1764622849622974.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest7, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect10 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect10, 28);
        SkReadBuffer paintBuffer_rect10(paintdata_rect10, 28);
        SkPaint paintRect10 = SkPaintPriv::Unflatten(paintBuffer_rect10);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data44 = malloc(600);
        hexToRawData("00000040000044c29b5e8d44000070410000524200b07045d80200000000803f0000000000005242000000000000803f0000b84100000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000b84100000000000000000000803f000058420000d0c1000094440000184220000000000058420000b8c100009a420000d0c10000ea42000040c100001443000040c100003543000040c1000059430000d0c100007e430000d0c100008943000040c100009d43000050c10080b643000040c10000d443000030c10000e8430000d0c10000f2430000a0c10000fd430000d0c100800344000040c100000d440000d0c100801244000040c100801e440000d0c100802844000030c100c03244000040c100403d440000d0c100c04644000040c100404e44000040c100c056440000d0c100406044000040c100c06b44000040c1004074440000d0c100007e44000040c100208444000040c100608844000050c100e08c44000040c100009144000040c1daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43020000000b2000000260100005501000020010000130100001c01000033010000440100002a01000043010000620100003e0100005c010000300100004d0100003c010000220100002e01000062010000460100001d01000054010000220100001d010000580100004b010000240100004f010000120100002b010000230100005a010000", data44, 600);
        auto slug44 = sktext::gpu::Slug::Deserialize(data44, 600);
        free(data44);
        void *paintdata_slug44 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug44, 28);
        SkReadBuffer paintbuffer_slug44 = SkReadBuffer(paintdata_slug44, 28);
        SkPaint paint_slug44 = SkPaintPriv::Unflatten(paintbuffer_slug44);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data45 = malloc(612);
        hexToRawData("00004040000044c20e3b8e44000070410000524200507645e80200000000803f0000000000005242000000000000803f0000e24200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000e24200000000000000000000803f00005c420000804200e09444000000432100000000005c4200009c420000b242000080420000024300009c420000244300009e4200004c4300008c420000744300009c42000093430000804200009e4300009c420000af4300009c420000c34300009a420000d44300009e420000e94300009c420080f94300009a4200c0054400009c4200c01144000080420040174400009c4200001e4400009c42004028440000864200002c4400008c420080354400009e4200003f4400009c4200c0474400009e4200c0514400009c4200805d4400009c420040644400008c420080694400009e4200807244000080420000784400009c42002080440000d2420000844400008c4200c086440000804200208c4400009c420020904400009c42daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4302100000012010000140100004b010000600100005c010000120100003e01000010010000460100002801000060010000100100002a01000021010000320100005a010000440100001a0800005d010000700100004a0100006301000057010000580100005d010000720100003c010000220100003d0000005e0100002f0100002301000045010000", data45, 612);
        auto slug45 = sktext::gpu::Slug::Deserialize(data45, 612);
        free(data45);
        void *paintdata_slug45 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug45, 28);
        SkReadBuffer paintbuffer_slug45 = SkReadBuffer(paintdata_slug45, 28);
        SkPaint paint_slug45 = SkPaintPriv::Unflatten(paintbuffer_slug45);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data46 = malloc(372);
        hexToRawData("00000040000044c2830cfa43000070410000524200f07b45a80100000000803f0000000000005242000000000000803f00004b4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00004b4300000000000000000000803f0000584200001a4300400a4400005a430d0000000000584200001d430000be42000029430000084300002843000023430000204300004b4300001d4300007143000029430080934300001d430000a643000029430080b943000028430080ca43000028430000e843000028430000fb4300001a430000034400002843dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4300d000000d6000000630100005b0100005d0100009700000073010000a30000006c01000012010000430100004e0100003c01000022010000", data46, 372);
        auto slug46 = sktext::gpu::Slug::Deserialize(data46, 372);
        free(data46);
        void *paintdata_slug46 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug46, 28);
        SkReadBuffer paintbuffer_slug46 = SkReadBuffer(paintdata_slug46, 28);
        SkPaint paint_slug46 = SkPaintPriv::Unflatten(paintbuffer_slug46);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data47 = malloc(420);
        hexToRawData("380a8b41000044c2820e24440000704100d40a4400f07b45e80100000000803f0000000000d40a44000000000000803f00004b4300000000000000000000803f010000000100000000000000010000000000803f0000000000d40a44000000000000803f00004b4300000000000000000000803f00000f4400001a430080974400005a431100000000000f4400001a430080194400002843008022440000284300002d4400002943008036440000284300403f440000294300c04d4400002843008055440000284300005e440000294300c067440000284300c06f440000284300807744000028430000804400001a4300e084440000424300c0884400001d4300e08d4400001d430000934400001d43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430110000002f0100001301000059010000700100004a010000600100001901000049010000670100002001000057010000220100001d01000044000000d400000095000000a2000000", data47, 420);
        auto slug47 = sktext::gpu::Slug::Deserialize(data47, 420);
        free(data47);
        void *paintdata_slug47 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug47, 28);
        SkReadBuffer paintbuffer_slug47 = SkReadBuffer(paintdata_slug47, 28);
        SkPaint paint_slug47 = SkPaintPriv::Unflatten(paintbuffer_slug47);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data48 = malloc(588);
        hexToRawData("00000040000044c2cad39644000070410000524200c88045c80200000000803f0000000000005242000000000000803f0080924300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080924300000000000000000000803f00005c420000744300609d4400009a431f00000000005c42000081430000a442000074430000f8420000814300001d43008081430000564300008143008081430000814300009343000074430000b243000081430000cb43000074430080de43008081430000f34300008143000004440000814300000b440000744300c0194400008143008022440000744300c02c4400008143008034440000814300803d440000744300404744000081430000534400808143000061440000744300c0654400007a4300806b4400007443000076440000814300807e44008081430040844400007a43002089440080814300408e440000814300a091440000744300409444000081430040994400808043daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f0000005a0100002c01000048010000690100005a010000490100007f210000130100001601000061010000450100001b0100002f010000490100002601000019010000490100001e0100002101000069010000330100005f0100002c01000048010000610100005d0100006001000058010000310100004601000028010000", data48, 588);
        auto slug48 = sktext::gpu::Slug::Deserialize(data48, 588);
        free(data48);
        void *paintdata_slug48 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug48, 28);
        SkReadBuffer paintbuffer_slug48 = SkReadBuffer(paintdata_slug48, 28);
        SkPaint paint_slug48 = SkPaintPriv::Unflatten(paintbuffer_slug48);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data49 = malloc(648);
        hexToRawData("00004040000044c282ca95440000803f0000524200988345180300000000803f0000000000005242000000000000803f0080bf4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080bf4300000000000000000000803f00005c420000a74300609c440000c0432400000000005c420000ae430000d2420000a7430000fe420000ae43000021430000aa4300004a430000ae4300006c430000a743000089430080ae430000a6430000ae430080b7430000ae430000c7430000a7430000da430000ae430000e9430000bb430000f8430080a843008001440000aa4300c00b440000ae43000014440000a743004019440000ae43008020440000ae4300402d440000a743008032440000ae4300003d440000ae43000044440000a743000049440080ae43008053440000a74300405d440000ae43008065440000ae43000071440000ae43008078440080ae43004081440000ae43004085440000ae43002089440000ae4300c08c440000a74300808f440000ae43002093440000ae43004097440000ae4300409b440080a843daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43024000000120100003d010000480100005d0100004b010000250100006b01000048010000560100001c0100005b01000045000000b10000005e010000100100003e010000580100004a0100003101000045010000180100003c010000620100001e010000210100005b010000230100006d0100002301000056010000190100003101000059010000230100005a01000013000000", data49, 648);
        auto slug49 = sktext::gpu::Slug::Deserialize(data49, 648);
        free(data49);
        void *paintdata_slug49 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug49, 28);
        SkReadBuffer paintbuffer_slug49 = SkReadBuffer(paintdata_slug49, 28);
        SkPaint paint_slug49 = SkPaintPriv::Unflatten(paintbuffer_slug49);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect11 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect11, 28);
        SkReadBuffer paintBuffer_rect11(paintdata_rect11, 28);
        SkPaint paintRect11 = SkPaintPriv::Unflatten(paintBuffer_rect11);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data50 = malloc(324);
        hexToRawData("0000c040000068c2f8d69c430000904100d0d24200088945680100000000803f0000000000d0d242000000000000803f00400b4400000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f00400b4400000000000000000000803f0000e0420080f9430080d14300c00f44090000000000e0420080fa4300001f43008001440000484300400144000069430080fd43008084430080f94300808d430000fb4300009743004001440080ab43000001440000c2430040014418bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430090000000a020000680500003705000055050000700400001904000091040000e903000034050000", data50, 324);
        auto slug50 = sktext::gpu::Slug::Deserialize(data50, 324);
        free(data50);
        void *paintdata_slug50 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug50, 28);
        SkReadBuffer paintbuffer_slug50 = SkReadBuffer(paintdata_slug50, 28);
        SkPaint paint_slug50 = SkPaintPriv::Unflatten(paintbuffer_slug50);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -3828.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 3828.000000, 1344.000000, 4468.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect10);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug44->draw(canvas, paint_slug44);
        //slug44->draw(canvas)
        free(paintdata_slug44);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug45->draw(canvas, paint_slug45);
        //slug45->draw(canvas)
        free(paintdata_slug45);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug46->draw(canvas, paint_slug46);
        //slug46->draw(canvas)
        free(paintdata_slug46);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug47->draw(canvas, paint_slug47);
        //slug47->draw(canvas)
        free(paintdata_slug47);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug48->draw(canvas, paint_slug48);
        //slug48->draw(canvas)
        free(paintdata_slug48);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug49->draw(canvas, paint_slug49);
        //slug49->draw(canvas)
        free(paintdata_slug49);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 4416.000000, 1264.000000, 4419.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect11);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug50->draw(canvas, paint_slug50);
        //slug50->draw(canvas)
        free(paintdata_slug50);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 190710951CBB985DB4376C7B1A5E1E9B_1764622849889306.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest8, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect12 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect12, 28);
        SkReadBuffer paintBuffer_rect12(paintdata_rect12, 28);
        SkPaint paintRect12 = SkPaintPriv::Unflatten(paintBuffer_rect12);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data51 = malloc(324);
        hexToRawData("00000040000044c208128843000070410000524200e08d45680100000000803f0000000000005242000000000000803f0000944200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000944200000000000000000000803f000058420000c8410080a2430000b24209000000000058420000e0410000be42000020420000084300001c42000023430000f841000039430000c84100004d430000c8410000614300001c4200008543000018420080964300001c42dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b43009000000d6000000630100005b0100005d0100003e01000030010000440100002b0100005b010000", data51, 324);
        auto slug51 = sktext::gpu::Slug::Deserialize(data51, 324);
        free(data51);
        void *paintdata_slug51 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug51, 28);
        SkReadBuffer paintbuffer_slug51 = SkReadBuffer(paintdata_slug51, 28);
        SkPaint paint_slug51 = SkPaintPriv::Unflatten(paintbuffer_slug51);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data52 = malloc(408);
        hexToRawData("380a8b41000044c2704315440000704100a0ba4300e08d45d80100000000803f0000000000a0ba43000000000000803f0000944200000000000000000000803f010000000100000000000000010000000000803f0000000000a0ba43000000000000803f0000944200000000000000000000803f0080c3430000c841008072440000b242100000000080c343000018420000d443000020420000e8430000c8410080f3430000c8410040034400001c4200800b4400001c42004016440000204200c01f4400001c420080284400002042008036440000f84100003c440000c8410040464400001c4200004e4400001c4200805644000020420080604400001842000069440000c841daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430100000002b01000062010000320100001f0100002101000058010000730100004a010000630100005d0100002e0100005601000048010000620100002a0100002d010000", data52, 408);
        auto slug52 = sktext::gpu::Slug::Deserialize(data52, 408);
        free(data52);
        void *paintdata_slug52 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug52, 28);
        SkReadBuffer paintbuffer_slug52 = SkReadBuffer(paintdata_slug52, 28);
        SkPaint paint_slug52 = SkPaintPriv::Unflatten(paintbuffer_slug52);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data53 = malloc(576);
        hexToRawData("00004040000044c2783b8944000070410000524200b09045b80200000000803f0000000000005242000000000000803f0000244300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000244300000000000000000000803f00005c420000e64200c08f44000033431e00000000005c420000e6420000bc42000001430000fe4200000243000037430000014300005f430000e642000075430000014300808c430000014300809e430000e6420080b0430000e6420000bb43000001430000cf43000000430000e943000001430000fa430000014300c007440000e642004015440000014300801c4400000143004024440000f24200002a440000f24200802f440000e64200c034440000014300c03e440000004300404b44000002430040554400000143000063440000f242008068440000e642000073440000014300407f440000ec4200c084440000024300e089440000014300408d440000f242daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e0000001e010000490100006a010000470100003e01000048010000110100001f01000032010000470100002901000012010000440100001f0100005b010000210100005f0100005c010000310100004501000028010000610100004d0100005d0100002e01000022010000d600000060010000580100005d010000", data53, 576);
        auto slug53 = sktext::gpu::Slug::Deserialize(data53, 576);
        free(data53);
        void *paintdata_slug53 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug53, 28);
        SkReadBuffer paintbuffer_slug53 = SkReadBuffer(paintdata_slug53, 28);
        SkPaint paint_slug53 = SkPaintPriv::Unflatten(paintbuffer_slug53);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data54 = malloc(636);
        hexToRawData("0000803f000044c27ae29044000070410000524200809345080300000000803f0000000000005242000000000000803f00007e4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00007e4300000000000000000000803f0000544200004d43008097440080864323000000000054420000534300009c4200005b430000e44200005b430000144300004d4300002a4300005b430000474300004d430000714300005b430000894300004d430080934300005b430000a843000076430080b743000053430080c24300004d430080d74300005b430000e84300005b430000024400005b4300000c4400005b430080134400005b4300001c4400005c430040254400004d4300c02a4400004d430080344400005b4300c03c4400005b430000484400005b4300c0504400005b4300c05e4400004d430000644400005b4300006e44000053430000744400005b4300407c4400005b4300c0814400005b430040864400005b4300c089440000534300a08c4400004d4300008f4400005c4300e0934400005b43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430230000005e0100004b010000480100003e010000180100002c0100001001000032010000460100003d0000005d0100002e01000022010000450100004d010000540100004a01000064010000320100001e0100002101000058010000130100004501000031010000450100005c0100002101000054010000110100001b0100005f010000300100006401000022010000", data54, 636);
        auto slug54 = sktext::gpu::Slug::Deserialize(data54, 636);
        free(data54);
        void *paintdata_slug54 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug54, 28);
        SkReadBuffer paintbuffer_slug54 = SkReadBuffer(paintdata_slug54, 28);
        SkPaint paint_slug54 = SkPaintPriv::Unflatten(paintbuffer_slug54);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data55 = malloc(552);
        hexToRawData("0000803f000044c22f797c44000070410000524200509645980200000000803f0000000000005242000000000000803f0000ac4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000ac4300000000000000000000803f000054420080934300e084440080b3431c000000000054420080964300009c4200809a430000e44200809a430000144300809343000038430080964300004e43008093430000784300809a4300008d43008096430000a043008096430080ac4300809a430000bd4300809a430000cf4300809a430000dd43008093430080f24300809a430080014400809a4300000c4400009b4300c0154400809a4300401e4400009b4300402c44008093430000374400809a4300403f4400009b4300005144008096430040574400809a430040644400809a4300806b4400809a43000074440080934300c0784400009b430040814400809a43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301c0000005e0100004b010000480100003e0100005d0100002e010000120100005c0100005e01000023010000110100001b0100002f010000230100005a0100007101000048010000610100002f0100004b010000680100005f010000480100005a010000480100003e0100006401000022010000", data55, 552);
        auto slug55 = sktext::gpu::Slug::Deserialize(data55, 552);
        free(data55);
        void *paintdata_slug55 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug55, 28);
        SkReadBuffer paintbuffer_slug55 = SkReadBuffer(paintdata_slug55, 28);
        SkPaint paint_slug55 = SkPaintPriv::Unflatten(paintbuffer_slug55);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data56 = malloc(492);
        hexToRawData("00004040000044c2389d4044000070410000524200209945480200000000803f0000000000005242000000000000803f0000d94300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000d94300000000000000000000803f00005c420080c04300c04d440080e0431700000000005c420080c7430000ac420080c7430000f6420080c04300001f430080c043000034430080c74300005c430000c743000088430080c743008096430080c0430080ab430080c7430000bc430080c0430000c6430080c0430000d1430080c7430000e1430080c7430000f5430000c743008003440080c74300c00b440080c74300c016440080c04300c01b440080c74300402a440000c243004034440000c84300c03e440080c743004045440080c34300804b440080d443daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430170000001a0100004a0100001f0100003201000047010000290100001a0100002e010000120100003c0100003e01000021010000470100002a01000021010000580100003301000044010000d400000061010000590100005f01000044000000", data56, 492);
        auto slug56 = sktext::gpu::Slug::Deserialize(data56, 492);
        free(data56);
        void *paintdata_slug56 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug56, 28);
        SkReadBuffer paintbuffer_slug56 = SkReadBuffer(paintdata_slug56, 28);
        SkPaint paint_slug56 = SkPaintPriv::Unflatten(paintbuffer_slug56);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ConcatOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawPathOp
        void *pathdata1 = malloc(736);
        hexToRawData("050000005300000000000000350000000000b044000018440000b044000090430000b044000029430070a5440000a94200e09a440000000000008c4400000000000090430000000000002943000000000000a9420000a942000000000000294300000000000090430000000000008c440000000000e09a440000a9420070a544000029430000b044000090430000b044000078440000b04400807b440000b04400c07d4400e0ae440000804400c0ad44000080440000ac44000080440000a444000080440040a24400c07d440020a14400807b440000a044000078440000a044000090430000a04400005e430000a04400002f4300209a4400000043004094440000004300008c4400000043000090430000004300005e4300002f4300002f4300005e4300000043000090430000004300008c4400000043004094440000004300209a4400002f430000a04400005e430000a044000090430000a044000018440000a04400801b440020a14400c01d440040a244000020440000a444000020440000ac440000204400c0ad440000204400e0ae4400c01d440000b04400801b440000b044000018440000e0440000b8440000e044000070440000e0440080694400a0dd4400c064440040db44000060440000d8440000604400c0d444000060440060d24400c064440060bc440060884400c055440080db43004053440080d643000050440080d64300c04c440080d64300404a440080db4300c02d4400400a4400402b4400c00c4400402b440000104400402b440040134400c02d4400c015440060a84400609c44006092440060b2440000904400c0b444000090440000b844000090440040bb440060924400a0bd4400c094440000c044000098440000c0440000d8440000c0440040db440000c04400a0dd4400a0bd440000e0440040bb440000e0440000b8440001020201020201020201020201020201020201020201020201020201020205000102020201010202010202010102020201020205000000", pathdata1, 736);
        SkPath path1;
        path1.readFromMemory(pathdata1, 736);
        void *paintdata_path1 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_path1, 28);
        SkReadBuffer paintBuffer_path1(paintdata_path1, 28);
        SkPaint paintPath1 = SkPaintPriv::Unflatten(paintBuffer_path1);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect13 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect13, 28);
        SkReadBuffer paintBuffer_rect13(paintdata_rect13, 28);
        SkPaint paintRect13 = SkPaintPriv::Unflatten(paintBuffer_rect13);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data57 = malloc(384);
        hexToRawData("0000c040000068c2c8750c440000904100d0d24200889e45b80100000000803f0000000000d0d242000000000000803f00c0174400000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f00c0174400000000000000000000803f0000e0420040094400c0264400401c440e0000000000e04200c0094400001f4300000e440000484300c00d440000694300400b4400808f4300000a440080a543004009440080ad4300c00d440000c04300c00d440080d44300800d440080ec4300c00d440080f84300c00d4400c0074400000e440000134400c00d4400401d440080094418bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300e0000000a020000680500003705000055050000fe01000072040000f6020000e4050000e803000024050000b30400006a0500009204000081030000", data57, 384);
        auto slug57 = sktext::gpu::Slug::Deserialize(data57, 384);
        free(data57);
        void *paintdata_slug57 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug57, 28);
        SkReadBuffer paintbuffer_slug57 = SkReadBuffer(paintdata_slug57, 28);
        SkPaint paint_slug57 = SkPaintPriv::Unflatten(paintbuffer_slug57);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -4466.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 4466.000000, 1344.000000, 5106.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect12);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug51->draw(canvas, paint_slug51);
        //slug51->draw(canvas)
        free(paintdata_slug51);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug52->draw(canvas, paint_slug52);
        //slug52->draw(canvas)
        free(paintdata_slug52);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug53->draw(canvas, paint_slug53);
        //slug53->draw(canvas)
        free(paintdata_slug53);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug54->draw(canvas, paint_slug54);
        //slug54->draw(canvas)
        free(paintdata_slug54);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug55->draw(canvas, paint_slug55);
        //slug55->draw(canvas)
        free(paintdata_slug55);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug56->draw(canvas, paint_slug56);
        //slug56->draw(canvas)
        free(paintdata_slug56);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(327.000000, 4490.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(7.000000, 0.000000, 46.000000, 39.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ConcatOp\n";
{
            SkM44 mat = SkM44(0.021081f,0.000000,0.000000,7.598939f,0.000000,-0.021081f,0.000000,35.479458f,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000);
            canvas->concat(mat);
            }
        
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawPathOp\n";
{
        canvas->drawPath(path1, paintPath1);
        free(pathdata1);
        free(paintdata_path1);
    }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 5105.000000, 1264.000000, 5108.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect13);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug57->draw(canvas, paint_slug57);
        //slug57->draw(canvas)
        free(paintdata_slug57);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 8F8AEFE6E08CA9C3AEEBE25787D34949_1764622850441276.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest9, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect14 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect14, 28);
        SkReadBuffer paintBuffer_rect14(paintdata_rect14, 28);
        SkPaint paintRect14 = SkPaintPriv::Unflatten(paintBuffer_rect14);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data58 = malloc(252);
        hexToRawData("0000803f000044c2763fdb420000803f000052420068a345080100000000803f0000000000005242000000000000803f0000fa4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000fa4200000000000000000000803f0000544200009842000022430000fc42030000000000544200009e420000b84200009842000006430000b442daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43003000000de0000002c01000020010000", data58, 252);
        auto slug58 = sktext::gpu::Slug::Deserialize(data58, 252);
        free(data58);
        void *paintdata_slug58 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug58, 28);
        SkReadBuffer paintbuffer_slug58 = SkReadBuffer(paintdata_slug58, 28);
        SkPaint paint_slug58 = SkPaintPriv::Unflatten(paintbuffer_slug58);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data59 = malloc(384);
        hexToRawData("00000040000044c2741ff74300007041003835430068a345b80100000000803f0000000000383543000000000000803f0000fa4200000000000000000000803f010000000100000000000000010000000000803f0000000000383543000000000000803f0000fa4200000000000000000000803f00003743000098420000294400000c430e0000000000374300009e4200005f430000b642008084430000b442000092430000a4420080a54300009e420000b843000098420000c3430000b4420080d2430000b6420000e5430000b2420000f6430000b44200c002440000b44200800b440000b642008015440000b4420000204400009842dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4300e000000d5000000620100005a0100005c010000ce0000003e010000100100007101000028010000570100004a01000063010000470100001e010000", data59, 384);
        auto slug59 = sktext::gpu::Slug::Deserialize(data59, 384);
        free(data59);
        void *paintdata_slug59 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug59, 28);
        SkReadBuffer paintbuffer_slug59 = SkReadBuffer(paintdata_slug59, 28);
        SkPaint paint_slug59 = SkPaintPriv::Unflatten(paintbuffer_slug59);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data60 = malloc(396);
        hexToRawData("380a8b41000044c2ac9a054400007041009634440068a345c80100000000803f0000000000963444000000000000803f0000fa4200000000000000000000803f010000000100000000000000010000000000803f0000000000963444000000000000803f0000fa4200000000000000000000803f000039440000984200209d4400000c430f000000000039440000984200403e440000b442008049440000b442000056440000b24200c05e440000b442008066440000b44200c06e440000b442004077440000a442006080440000b4420040854400009842000088440000b44200608c440000b442004090440000b442004096440000a442006099440000b442daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300f0000003301000058010000130100002a0100005601000020010000130100005d0100004f0100003e010000100100001a010000220100005e0100004b010000", data60, 396);
        auto slug60 = sktext::gpu::Slug::Deserialize(data60, 396);
        free(data60);
        void *paintdata_slug60 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug60, 28);
        SkReadBuffer paintbuffer_slug60 = SkReadBuffer(paintdata_slug60, 28);
        SkPaint paint_slug60 = SkPaintPriv::Unflatten(paintbuffer_slug60);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data61 = malloc(600);
        hexToRawData("0000803f000044c209ed8f4400007041000052420038a645d80200000000803f0000000000005242000000000000803f0000574300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000574300000000000000000000803f00005442000026430080964400006643200000000000544200002c4300009842000034430000d0420000354300001f430000344300004243000035430000694300002c43000089430000344300009a43000034430000af43000026430080ca43000034430080d743000026430080ec43000034430000fe430000344300c0064400003443000013440000344300001a440000344300402944000034430080314400002643004036440000264300803f4400002643000049440000264300004e4400002c43000054440000344300805f44000034430000684400002643008072440000344300407a440000344300a0814400002643008086440000344300808a4400004f4300a08e44000034430020934400003443daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430200000005e010000570100007101000049010000630100005f01000011010000470100001d0100005a0100002f0100001301000055010000200100005801000042010000100100003e0100003c01000014010000320100005f010000580100004b010000240100001b0100004b0100001c010000230100003e0000004a01000054010000", data61, 600);
        auto slug61 = sktext::gpu::Slug::Deserialize(data61, 600);
        free(data61);
        void *paintdata_slug61 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug61, 28);
        SkReadBuffer paintbuffer_slug61 = SkReadBuffer(paintdata_slug61, 28);
        SkPaint paint_slug61 = SkPaintPriv::Unflatten(paintbuffer_slug61);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data62 = malloc(540);
        hexToRawData("00004040000044c22737804400007041000052420008a945880200000000803f0000000000005242000000000000803f0080984300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080984300000000000000000000803f00005c420000804300c086440000a0431b00000000005c42000087430000ac42008087430000f64200008743000024430000874300004543000087430000624300008043000076430000874300809943000087430080a943000087430080bd43000083430080d043008087430000ec43000080430000f6430000834300c000440000804300400f4400008743008016440000874300001f440000874300402e440000874300003b4400008743008043440000804300404d440000834300c052440000804300805d4400008743008069440000874300c078440000874300e08044000087430040844400008343daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301b000000220100006d0100004e0100002101000054010000330100004301000021010000440100005f01000069010000320100005f0100002c010000590100004b01000040010000220100004b010000240100005f0100002f01000023010000400100004a0100005b0100005d010000", data62, 540);
        auto slug62 = sktext::gpu::Slug::Deserialize(data62, 540);
        free(data62);
        void *paintdata_slug62 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug62, 28);
        SkReadBuffer paintbuffer_slug62 = SkReadBuffer(paintdata_slug62, 28);
        SkPaint paint_slug62 = SkPaintPriv::Unflatten(paintbuffer_slug62);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data63 = malloc(384);
        hexToRawData("00000000000044c2cef8de43000070410000524200d8ab45b80100000000803f0000000000005242000000000000803f0080c54300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080c54300000000000000000000803f000054420000ad430080f9430000cd430e000000000054420000b4430000bc420000b443000000430000b443000027430080b44300004f430000ad43000064430000b443008083430000b44300009b430000b4430000aa430000b4430080b8430000b4430080c9430000b0430080d5430000b4430000e6430000b4430000f5430000c143daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300e0000004e010000490100004e010000610100003d01000013010000550100001901000055010000130100005d010000210100005801000046000000", data63, 384);
        auto slug63 = sktext::gpu::Slug::Deserialize(data63, 384);
        free(data63);
        void *paintdata_slug63 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug63, 28);
        SkReadBuffer paintbuffer_slug63 = SkReadBuffer(paintdata_slug63, 28);
        SkPaint paint_slug63 = SkPaintPriv::Unflatten(paintbuffer_slug63);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect15 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect15, 28);
        SkReadBuffer paintBuffer_rect15(paintdata_rect15, 28);
        SkPaint paintRect15 = SkPaintPriv::Unflatten(paintBuffer_rect15);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ConcatOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawPathOp
        void *pathdata2 = malloc(736);
        hexToRawData("050000005300000000000000350000000000b044000018440000b044000090430000b044000029430070a5440000a94200e09a440000000000008c4400000000000090430000000000002943000000000000a9420000a942000000000000294300000000000090430000000000008c440000000000e09a440000a9420070a544000029430000b044000090430000b044000078440000b04400807b440000b04400c07d4400e0ae440000804400c0ad44000080440000ac44000080440000a444000080440040a24400c07d440020a14400807b440000a044000078440000a044000090430000a04400005e430000a04400002f4300209a4400000043004094440000004300008c4400000043000090430000004300005e4300002f4300002f4300005e4300000043000090430000004300008c4400000043004094440000004300209a4400002f430000a04400005e430000a044000090430000a044000018440000a04400801b440020a14400c01d440040a244000020440000a444000020440000ac440000204400c0ad440000204400e0ae4400c01d440000b04400801b440000b044000018440000e0440000b8440000e044000070440000e0440080694400a0dd4400c064440040db44000060440000d8440000604400c0d444000060440060d24400c064440060bc440060884400c055440080db43004053440080d643000050440080d64300c04c440080d64300404a440080db4300c02d4400400a4400402b4400c00c4400402b440000104400402b440040134400c02d4400c015440060a84400609c44006092440060b2440000904400c0b444000090440000b844000090440040bb440060924400a0bd4400c094440000c044000098440000c0440000d8440000c0440040db440000c04400a0dd4400a0bd440000e0440040bb440000e0440000b8440001020201020201020201020201020201020201020201020201020201020205000102020201010202010202010102020201020205000000", pathdata2, 736);
        SkPath path2;
        path2.readFromMemory(pathdata2, 736);
        void *paintdata_path2 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_path2, 28);
        SkReadBuffer paintBuffer_path2(paintdata_path2, 28);
        SkPaint paintPath2 = SkPaintPriv::Unflatten(paintBuffer_path2);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect16 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fdedd5d3fdedd5d3f0000803f01030000", paintdata_rect16, 28);
        SkReadBuffer paintBuffer_rect16(paintdata_rect16, 28);
        SkPaint paintRect16 = SkPaintPriv::Unflatten(paintBuffer_rect16);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data64 = malloc(324);
        hexToRawData("0000e040000086c23812e0430000b0410000c44200c8b145680100000000803f000000000000c442000000000000803f0040124400000000000000000000803f010000000100000000000000010000000000803f000000000000c442000000000000803f0040124400000000000000000000803f0000d242008001440080084400c01744090000000000d24200c0014400002743004006440000534300c0014400006a430040064400808e43004006440000b843008001440080d443008006440000ed43004006440080004400400344d9c83acd4c000000010000006365727338000000040000000000b6420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300900000044020000360500001804000093040000eb0300000a0200006b0500003705000055050000", data64, 324);
        auto slug64 = sktext::gpu::Slug::Deserialize(data64, 324);
        free(data64);
        void *paintdata_slug64 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug64, 28);
        SkReadBuffer paintbuffer_slug64 = SkReadBuffer(paintdata_slug64, 28);
        SkPaint paint_slug64 = SkPaintPriv::Unflatten(paintbuffer_slug64);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -5104.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 5104.000000, 1344.000000, 5744.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect14);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug58->draw(canvas, paint_slug58);
        //slug58->draw(canvas)
        free(paintdata_slug58);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug59->draw(canvas, paint_slug59);
        //slug59->draw(canvas)
        free(paintdata_slug59);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug60->draw(canvas, paint_slug60);
        //slug60->draw(canvas)
        free(paintdata_slug60);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug61->draw(canvas, paint_slug61);
        //slug61->draw(canvas)
        free(paintdata_slug61);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug62->draw(canvas, paint_slug62);
        //slug62->draw(canvas)
        free(paintdata_slug62);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug63->draw(canvas, paint_slug63);
        //slug63->draw(canvas)
        free(paintdata_slug63);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 5105.000000, 1264.000000, 5108.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect15);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(676.000000, 5178.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(7.000000, 0.000000, 46.000000, 40.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ConcatOp\n";
{
            SkM44 mat = SkM44(0.021096f,0.000000,0.000000,7.604476f,0.000000,-0.021096f,0.000000,35.505310f,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000);
            canvas->concat(mat);
            }
        
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawPathOp\n";
{
        canvas->drawPath(path2, paintPath2);
        free(pathdata2);
        free(paintdata_path2);
    }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 5727.000000, 1264.000000, 5730.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect16);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug64->draw(canvas, paint_slug64);
        //slug64->draw(canvas)
        free(paintdata_slug64);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 616B444226AE34436F91AA33ABBFA325_1764622850655751.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest10, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect17 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect17, 28);
        SkReadBuffer paintBuffer_rect17(paintdata_rect17, 28);
        SkPaint paintRect17 = SkPaintPriv::Unflatten(paintBuffer_rect17);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data65 = malloc(588);
        hexToRawData("00004040000044c2ebbb8844000070410000524200d8b645c80200000000803f0000000000005242000000000000803f0000da4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000da4200000000000000000000803f000060420000704200408f440000f8421f00000000006042000078420000ca420000944200000f430000944200002e430000944200005d4300009642008081430000944200009343000096420000a74300007c420080ae43000096420000c243000094420000da43000092420000ec43000094420000fd4300008442000004440000844200400a440000944200401244000094420080204400007042008026440000944200402f440000944200003e440000704200c042440000704200c047440000704200404d44000094420000564400009442000061440000964200c06e440000704200c0734400008442004079440000704200c0834400008442008086440000704200c08b4400009442daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301f000000ca000000450100001801000020010000700100004a0100006001000018080000670100002101000029010000480100005e0100005f0100002301000046010000260100001301000041010000330100003c01000032010000130100005401000069010000320100005f0100002f0100005d0100002d01000021010000", data65, 588);
        auto slug65 = sktext::gpu::Slug::Deserialize(data65, 588);
        free(data65);
        void *paintdata_slug65 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug65, 28);
        SkReadBuffer paintbuffer_slug65 = SkReadBuffer(paintdata_slug65, 28);
        SkPaint paint_slug65 = SkPaintPriv::Unflatten(paintbuffer_slug65);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data66 = malloc(612);
        hexToRawData("00000000000044c201259244000070410000524200a8b945e80200000000803f0000000000005242000000000000803f0000474300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000474300000000000000000000803f000054420000164300c098440000564321000000000054420000164300009642000024430000da4200002443000015430000234300003743000025430000614300002443000081430000234300009343000024430000a34300003f430000b34300001c430000be43000016430000d343000024430080e343000024430000f24300002443004005440000244300000d4400002443004015440000244300801c4400002443004025440000254300402f4400002443000037440000244300c03e44000024430040474400002443008052440000244300405a440000244300c062440000244300c070440000164300407b44000024430080814400001643000084440000244300e08a440000254300a08f44000024430000944400002543daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430210000003e01000010010000460100002901000060010000100100002a010000220100003c0000005d0100002e0100002201000058010000220100005601000021010000580100004a01000063010000570100001a01000022010000590100001801000010010000460100002e010000220100003c0100004f010000730100004901000063010000", data66, 612);
        auto slug66 = sktext::gpu::Slug::Deserialize(data66, 612);
        free(data66);
        void *paintdata_slug66 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug66, 28);
        SkReadBuffer paintbuffer_slug66 = SkReadBuffer(paintdata_slug66, 28);
        SkPaint paint_slug66 = SkPaintPriv::Unflatten(paintbuffer_slug66);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data67 = malloc(360);
        hexToRawData("00000000000044c28006d24300007041000052420078bc45980100000000803f0000000000005242000000000000803f0080904300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080904300000000000000000000803f00005442000070430080ec43000098430c0000000000544200007e430000b84200007f43000004430000764300002b430000704300003f4300007643000065430000764300007e4300007e430080974300007f430080b44300007e430000c64300007e430000d443000070430000e84300008c43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300c0000004e010000610100005d010000330100005c0100005e0100004b010000690100004b010000540100003b01000046000000", data67, 360);
        auto slug67 = sktext::gpu::Slug::Deserialize(data67, 360);
        free(data67);
        void *paintdata_slug67 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug67, 28);
        SkReadBuffer paintbuffer_slug67 = SkReadBuffer(paintdata_slug67, 28);
        SkPaint paint_slug67 = SkPaintPriv::Unflatten(paintbuffer_slug67);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data68 = malloc(504);
        hexToRawData("00000040000044c240114844000070410000524200c0c645580200000000803f0000000000005242000000000000803f00801a4400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00801a4400000000000000000000803f0000584200400e440040554400401e44180000000000584200000f440000be42000012440000084300c011440000234300c00f4400003a4300000f440000474300c011440000744300c011440080874300c00f440080934300c011440080a44300c011440080b94300400e440000cd4300c011440000de4300c011440080ed4300400e440000044400400e440000094400400e4400000e4400400e4400c0174400c0114400401f4400c0114400c0274400c0114400c02e440000124400003c4400400e440080464400c0114400404f4400c01144daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43018000000d6000000630100005b0100005d0100001a080000580100005b0100005d01000012010000470100001e01000011010000570100001d0100003e0100003001000014010000570100001101000057010000710100002d010000110100005b010000", data68, 504);
        auto slug68 = sktext::gpu::Slug::Deserialize(data68, 504);
        free(data68);
        void *paintdata_slug68 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug68, 28);
        SkReadBuffer paintbuffer_slug68 = SkReadBuffer(paintdata_slug68, 28);
        SkPaint paint_slug68 = SkPaintPriv::Unflatten(paintbuffer_slug68);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data69 = malloc(324);
        hexToRawData("00004040000044c2aa578d430000803f00e4594400c0c645680100000000803f0000000000e45944000000000000803f00801a4400000000000000000000803f010000000100000000000000010000000000803f0000000000e45944000000000000803f00801a4400000000000000000000803f00805a4400400e440040904400c01a440900000000805a4400c01144004062440000124400806b4400c00f4400c0714400c0114400c0794400c011440020824400c011440060854400400e4400e087440000124400c08c4400c01144dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b43009000000220100006d0100005f010000230100004601000059010000320100006701000021010000", data69, 324);
        auto slug69 = sktext::gpu::Slug::Deserialize(data69, 324);
        free(data69);
        void *paintdata_slug69 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug69, 28);
        SkReadBuffer paintbuffer_slug69 = SkReadBuffer(paintdata_slug69, 28);
        SkPaint paint_slug69 = SkPaintPriv::Unflatten(paintbuffer_slug69);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect18 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect18, 28);
        SkReadBuffer paintBuffer_rect18(paintdata_rect18, 28);
        SkPaint paintRect18 = SkPaintPriv::Unflatten(paintBuffer_rect18);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data70 = malloc(408);
        hexToRawData("00000000000068c25c1235440000984100d0d24200e0c145d80100000000803f0000000000d0d242000000000000803f0000e74300000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f0000e74300000000000000000000803f0000d4420000ca4300804f440080f043100000000000d4420000ca43000043430000d34300007f430000cb43000095430000ce430000a4430000d3430000ba430000d3430080ce430080ca430080e5430000d3430080fb430000d343008003440080ca43000015440080cb4300401f440080cb43000024440080ca4300802f440000d343004035440000d343000040440080d24318bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43010000000f2020000910300001802000055050000f40200009104000081030000f402000025050000810300005e010000190400006603000026050000f602000057060000", data70, 408);
        auto slug70 = sktext::gpu::Slug::Deserialize(data70, 408);
        free(data70);
        void *paintdata_slug70 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug70, 28);
        SkReadBuffer paintbuffer_slug70 = SkReadBuffer(paintdata_slug70, 28);
        SkPaint paint_slug70 = SkPaintPriv::Unflatten(paintbuffer_slug70);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -5742.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 5742.000000, 1344.000000, 6382.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect17);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug65->draw(canvas, paint_slug65);
        //slug65->draw(canvas)
        free(paintdata_slug65);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug66->draw(canvas, paint_slug66);
        //slug66->draw(canvas)
        free(paintdata_slug66);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug67->draw(canvas, paint_slug67);
        //slug67->draw(canvas)
        free(paintdata_slug67);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug68->draw(canvas, paint_slug68);
        //slug68->draw(canvas)
        free(paintdata_slug68);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug69->draw(canvas, paint_slug69);
        //slug69->draw(canvas)
        free(paintdata_slug69);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 6235.000000, 1264.000000, 6238.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect18);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug70->draw(canvas, paint_slug70);
        //slug70->draw(canvas)
        free(paintdata_slug70);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: EC39CD75C5E632C880EDE5FDB919A8F9_1764622851257322.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest11, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect19 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect19, 28);
        SkReadBuffer paintBuffer_rect19(paintdata_rect19, 28);
        SkPaint paintRect19 = SkPaintPriv::Unflatten(paintBuffer_rect19);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data71 = malloc(408);
        hexToRawData("00000000000044c25c4d10440000803f000052420090c945d80100000000803f0000000000005242000000000000803f00008c4200000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00008c4200000000000000000000803f000050420000a84100801d4400008e4210000000000050420000c0410000c6420000c041000009430000c041000031430000a8410000584300000c4200007c4300000c4200808c43000010420000a14300000c420080bf4300000c420080cf4300000c420080e3430000d8410080ef4300000c42004000440000d84100c005440000a84100400b4400000c420000144400000c42dc4bbfbc4c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000db9249ff590000000100b4301000000092000000cc000000b00000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004901000047010000", data71, 408);
        auto slug71 = sktext::gpu::Slug::Deserialize(data71, 408);
        free(data71);
        void *paintdata_slug71 = malloc(28);
        hexToRawData("00000000000080408584843e8c8b0b3fcbca4a3f0000803f01030000", paintdata_slug71, 28);
        SkReadBuffer paintbuffer_slug71 = SkReadBuffer(paintdata_slug71, 28);
        SkPaint paint_slug71 = SkPaintPriv::Unflatten(paintbuffer_slug71);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data72 = malloc(420);
        hexToRawData("0000803f000044c27e980e440000704100d61d440090c945e80100000000803f0000000000d61d44000000000000803f00008c4200000000000000000000803f010000000100000000000000010000000000803f0000000000d61d44000000000000803f00008c4200000000000000000000803f00401e440000a841004096440000aa421100000000401e440000784200c025440000104200c033440000a84100c038440000d84100403e440000a84100c04c4400000c42008054440000104200c05d4400000c42008067440000a84100c06c4400000c420080754400000c420000804400000c42002084440000d84100e086440000a84100c0894400000c4200008e4400000c420040934400000c42daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430110000003d0000006a010000330100005c0100002c010000220100006d0100004e0100003d0100001301000045010000100100005e010000320100004b010000440100005b010000", data72, 420);
        auto slug72 = sktext::gpu::Slug::Deserialize(data72, 420);
        free(data72);
        void *paintdata_slug72 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug72, 28);
        SkReadBuffer paintbuffer_slug72 = SkReadBuffer(paintdata_slug72, 28);
        SkPaint paint_slug72 = SkPaintPriv::Unflatten(paintbuffer_slug72);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data73 = malloc(600);
        hexToRawData("00004040000044c27a3e914400007041000052420060cc45d80200000000803f0000000000005242000000000000803f0000204300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000204300000000000000000000803f00005c420000de4200e0974400002f432000000000005c420000fa420000b4420000de42000001430000de4200002b430000fa4200004c430000fc4200008a430000ea42008096430000fa420080af430000fc420080c4430000fa420000d3430000fa420080ea430000fc420000fe430000fa4200c007440000fa4200c00e440000de42008014440000fa4200001d440000fc42004027440000fa42000032440000ea4200c037440000de4200c041440000de42000047440000fa42000051440000f84200c059440000fa4200c0604400001843000069440000fa4200c071440000fa4200407c440000fc42006085440000fa42004089440000de4200a08b440000de42008090440000fa4200e094440000fa42daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430200000004a010000270100002e0100004a0100006b0100005e0100004b010000620100005a01000023010000640100001201000054010000320100004b01000060010000580100005f0100002c01000030010000450100002b0100005b0100003d000000110100005b0100006a010000230100003e0100003c010000100100005a010000", data73, 600);
        auto slug73 = sktext::gpu::Slug::Deserialize(data73, 600);
        free(data73);
        void *paintdata_slug73 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug73, 28);
        SkReadBuffer paintbuffer_slug73 = SkReadBuffer(paintdata_slug73, 28);
        SkPaint paint_slug73 = SkPaintPriv::Unflatten(paintbuffer_slug73);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data74 = malloc(540);
        hexToRawData("00004040000044c27587724400007041000052420030cf45880200000000803f0000000000005242000000000000803f00007a4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00007a4300000000000000000000803f00005c420000494300807f44008084431b00000000005c42000057430000ac42000058430000fa420000574300001f430000574300005a4300005743008080430000494300808b43000057430080a443000057430000b443000057430000c643000049430080d943000057430080f143000049430000fe430000574300c0074400005743008013440000574300801c4400005743004024440000574300002c440000574300c0344400005743004043440000574300004d44000049430000524400004943008057440000574300005e4400004943004068440000494300406d44000057430040774400005643daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301b000000220100006d01000012010000400100004e0100003d0100002301000018010000480100001d0100002001000024010000490100005701000013010000190100001901000049010000420100004c0100003f010000310100005a0100002f01000033010000440100002a010000", data74, 540);
        auto slug74 = sktext::gpu::Slug::Deserialize(data74, 540);
        free(data74);
        void *paintdata_slug74 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug74, 28);
        SkReadBuffer paintbuffer_slug74 = SkReadBuffer(paintdata_slug74, 28);
        SkPaint paint_slug74 = SkPaintPriv::Unflatten(paintbuffer_slug74);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data75 = malloc(576);
        hexToRawData("00000000000044c2ade1874400007041000052420000d245b80200000000803f0000000000005242000000000000803f0000aa4300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000aa4300000000000000000000803f000050420080914300808e440080b1431e00000000005042000099430000b842008098430000fc420080984300001b43008091430000314300809843000054430000994300007d430080984300009443008094430000a043008098430080b143008098430000bf43008091430080d243008098430000e1430080a5430000f14300809243000002440080984300400b440080914300c01444008098430080214400809843000029440000994300c032440080984300803b440080984300004a440080984300c05344008091430040594400809843008061440080984300406c440080914300c076440080984300007f4400009943006084440080984300a08a4400809843daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e0000006601000010010000560100003001000049010000630100005b0100005e01000012010000580100003a0100005901000047000000980000004a0100001c01000022010000230100006e01000013010000410100004f0100003e010000200100005b0100002e01000012010000640100002201000012010000", data75, 576);
        auto slug75 = sktext::gpu::Slug::Deserialize(data75, 576);
        free(data75);
        void *paintdata_slug75 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug75, 28);
        SkReadBuffer paintbuffer_slug75 = SkReadBuffer(paintdata_slug75, 28);
        SkPaint paint_slug75 = SkPaintPriv::Unflatten(paintbuffer_slug75);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data76 = malloc(576);
        hexToRawData("00004040000044c2cc1e8c44000070410000524200d0d445b80200000000803f0000000000005242000000000000803f0000d74300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000d74300000000000000000000803f000060420080be4300c092440080de431e000000000060420080bf430000a6420000c0430000f6420000c643000024430080c54300004c430000c043000078430080be4300808f430000c6430080a3430080c1430080ae430080c1430080ba430080c5430000cc430080c5430080e9430080c5430000fb430080c54300800b440080be43000016440080c54300801e440000c643004028440080c543004030440080c54300c03b440080c143004041440080be4300c04b440080c543000054440080c14300405e440080c54300c066440080c543000071440080c543000079440080c54300c081440080c543002087440080c14300e089440080be4300208f440080c543daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e00000026080000d700000061010000450100002b08000016010000610100005d0100005e0100004a0100004401000048010000450100002d010000490100006701000021010000570100005c0100002c010000100100005e010000480100004e01000021010000470100005a0100005d0100002e01000022010000", data76, 576);
        auto slug76 = sktext::gpu::Slug::Deserialize(data76, 576);
        free(data76);
        void *paintdata_slug76 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug76, 28);
        SkReadBuffer paintbuffer_slug76 = SkReadBuffer(paintdata_slug76, 28);
        SkPaint paint_slug76 = SkPaintPriv::Unflatten(paintbuffer_slug76);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data77 = malloc(480);
        hexToRawData("00000040000044c2471a4344000070410000524200a0d745380200000000803f0000000000005242000000000000803f0000024400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0000024400000000000000000000803f00005c420080eb430040504400c005441600000000005c420080f2430000a8420080f2430000ec420080f243000030430080f243000057430080eb4300006d430080f24300808e430080eb43000099430080f2430000b5430080ee430000c0430080eb430000d5430080f2430000ed430080f243004000440080eb43008005440080f24300800d440000f34300c016440000f24300401f440080f243000027440080f24300802f440000f34300c039440080f243004044440080eb4300004e440080ff43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430160000005a01000010010000420100004c0100003e0100002101000031010000450100005e0100002e010000220100004f0100003d01000013010000700100002b010000560100004901000062010000460100001d01000044000000", data77, 480);
        auto slug77 = sktext::gpu::Slug::Deserialize(data77, 480);
        free(data77);
        void *paintdata_slug77 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug77, 28);
        SkReadBuffer paintbuffer_slug77 = SkReadBuffer(paintdata_slug77, 28);
        SkPaint paint_slug77 = SkPaintPriv::Unflatten(paintbuffer_slug77);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect0 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01030000", paintdata_rrect0, 28);
        SkReadBuffer paintBuffer_rrect0(paintdata_rrect0, 28);
        SkPaint paintRRect0 = SkPaintPriv::Unflatten(paintBuffer_rrect0);
    
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect1 = malloc(28);
        hexToRawData("0000404000008040cdcc4c3fcdcc4c3fcdcc4c3f0000803f01031000", paintdata_rrect1, 28);
        SkReadBuffer paintBuffer_rrect1(paintdata_rrect1, 28);
        SkPaint paintRRect1 = SkPaintPriv::Unflatten(paintBuffer_rrect1);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data78 = malloc(576);
        hexToRawData("0000000000000cc216a132440000304100008b420068dc45b80200000000803f0000000000008b42000000000000803f0040284400000000000000000000803f010000000100000000000000010000000000803f0000000000008b42000000000000803f0040284400000000000000000000803f00008c4200801f440000444400002b441e00000000008c4200c01f440000c042004022440000f24200402244000012430040224400002043004022440000374300801f440000594300c0204400006c4300801f44000083430040224400008a430040224400809743008022440080a343004022440080b14300801f440000c34300c020440080cc4300801f440080d843004022440080ea43004022440000f44300c020440000fd430040224400c004440040224400c00a4400801f440080114400402244000018440040224400401b4400801f440040254400801f4400c027440000204400802a4400801f44004031440040224400c034440040224400003b4400402244fd23bae34c00000001000000636572733800000006000000666630420000803f000000000000803f00000000000000000000803f000080bf00000000000000006d6d6dff590000000100b4301e0000001a02000093030000f402000024050000680300000b040000550500000a04000024050000b104000069050000eb0300000a0400005405000009040000930300003405000054050000f50200009104000083030000f6020000270500008303000072040000180400006603000025050000f402000054060000", data78, 576);
        auto slug78 = sktext::gpu::Slug::Deserialize(data78, 576);
        free(data78);
        void *paintdata_slug78 = malloc(28);
        hexToRawData("0000000000008040ebeaea3eebeaea3eebeaea3e0000803f01030000", paintdata_slug78, 28);
        SkReadBuffer paintbuffer_slug78 = SkReadBuffer(paintdata_slug78, 28);
        SkPaint paint_slug78 = SkPaintPriv::Unflatten(paintbuffer_slug78);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect2 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01030000", paintdata_rrect2, 28);
        SkReadBuffer paintBuffer_rrect2(paintdata_rrect2, 28);
        SkPaint paintRRect2 = SkPaintPriv::Unflatten(paintBuffer_rrect2);
    
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect3 = malloc(28);
        hexToRawData("0000404000008040cdcc4c3fcdcc4c3fcdcc4c3f0000803f01031000", paintdata_rrect3, 28);
        SkReadBuffer paintBuffer_rrect3(paintdata_rrect3, 28);
        SkPaint paintRRect3 = SkPaintPriv::Unflatten(paintBuffer_rrect3);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data79 = malloc(288);
        hexToRawData("0000000000000cc24e4705430000803f80bc88440068dc45380100000000803f0000000080bc8844000000000000803f0040284400000000000000000000803f010000000100000000000000010000000000803f0000000080bc8844000000000000803f0040284400000000000000000000803f00c0884400801f4400609944008028440600000000c0884400c01f4400208c440040224400208f44004022440040924400402244000094440040224400e0964400801f440107e1e44c00000001000000636572733800000006000000666630420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430060000001802000091030000f5020000250500006a03000009040000", data79, 288);
        auto slug79 = sktext::gpu::Slug::Deserialize(data79, 288);
        free(data79);
        void *paintdata_slug79 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug79, 28);
        SkReadBuffer paintbuffer_slug79 = SkReadBuffer(paintdata_slug79, 28);
        SkPaint paint_slug79 = SkPaintPriv::Unflatten(paintbuffer_slug79);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -6380.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 6380.000000, 1344.000000, 7020.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect19);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug71->draw(canvas, paint_slug71);
        //slug71->draw(canvas)
        free(paintdata_slug71);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug72->draw(canvas, paint_slug72);
        //slug72->draw(canvas)
        free(paintdata_slug72);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug73->draw(canvas, paint_slug73);
        //slug73->draw(canvas)
        free(paintdata_slug73);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug74->draw(canvas, paint_slug74);
        //slug74->draw(canvas)
        free(paintdata_slug74);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug75->draw(canvas, paint_slug75);
        //slug75->draw(canvas)
        free(paintdata_slug75);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug76->draw(canvas, paint_slug76);
        //slug76->draw(canvas)
        free(paintdata_slug76);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug77->draw(canvas, paint_slug77);
        //slug77->draw(canvas)
        free(paintdata_slug77);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(54.500000, 6996.500000, 1059.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect0);
        }
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(54.500000, 6996.500000, 1059.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect1);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(56.000000, 6998.000000, 1058.000000, 7078.000000);
        SkVector radii[4] = { { 7.500000,7.500000 },
            { 7.500000, 7.500000 },
            { 7.500000, 7.500000 },
            { 7.500000, 7.500000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        canvas->clipRRect(rrect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(70.000000, 7012.000000, 1009.000000, 7064.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug78->draw(canvas, paint_slug78);
        //slug78->draw(canvas)
        free(paintdata_slug78);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(1078.500000, 6996.500000, 1245.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect2);
        }
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(1078.500000, 6996.500000, 1245.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect3);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug79->draw(canvas, paint_slug79);
        //slug79->draw(canvas)
        free(paintdata_slug79);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 523F2D75FCC6400257DD652ADD944D1B_1764622851437462.paintbuf
// Failed to find matching Op: StrikeClientLo
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest12, canvas, 1344, 640) {
                
std::cout << "init op type: RestoreOp\n";
//StrikeClientLo
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect20 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01010000", paintdata_rect20, 28);
        SkReadBuffer paintBuffer_rect20(paintdata_rect20, 28);
        SkPaint paintRect20 = SkPaintPriv::Unflatten(paintBuffer_rect20);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect4 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01030000", paintdata_rrect4, 28);
        SkReadBuffer paintBuffer_rrect4(paintdata_rrect4, 28);
        SkPaint paintRRect4 = SkPaintPriv::Unflatten(paintBuffer_rrect4);
    
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect5 = malloc(28);
        hexToRawData("0000404000008040cdcc4c3fcdcc4c3fcdcc4c3f0000803f01031000", paintdata_rrect5, 28);
        SkReadBuffer paintBuffer_rrect5(paintdata_rrect5, 28);
        SkPaint paintRRect5 = SkPaintPriv::Unflatten(paintBuffer_rrect5);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data80 = malloc(576);
        hexToRawData("0000000000000cc216a132440000304100008b420068dc45b80200000000803f0000000000008b42000000000000803f00000c4200000000000000000000803f010000000100000000000000010000000000803f0000000000008b42000000000000803f00000c4200000000000000000000803f00008c420000008000004444000038421e00000000008c420000803f0000c042000030410000f24200003041000012430000304100002043000030410000374300000080000059430000a04000006c4300000080000083430000304100008a430000304100809743000040410080a343000030410080b143000000800000c3430000a0400080cc43000000800080d843000030410080ea43000030410000f4430000a0400000fd430000304100c004440000304100c00a44000000800080114400003041000018440000304100401b4400000080004025440000008000c027440000004000802a4400000080004031440000304100c034440000304100003b4400003041fd23bae34c00000001000000636572733800000006000000666630420000803f000000000000803f00000000000000000000803f000080bf00000000000000006d6d6dff590000000100b4301e0000001a02000093030000f402000024050000680300000b040000550500000a04000024050000b104000069050000eb0300000a0400005405000009040000930300003405000054050000f50200009104000083030000f6020000270500008303000072040000180400006603000025050000f402000054060000", data80, 576);
        auto slug80 = sktext::gpu::Slug::Deserialize(data80, 576);
        free(data80);
        void *paintdata_slug80 = malloc(28);
        hexToRawData("0000000000008040ebeaea3eebeaea3eebeaea3e0000803f01030000", paintdata_slug80, 28);
        SkReadBuffer paintbuffer_slug80 = SkReadBuffer(paintdata_slug80, 28);
        SkPaint paint_slug80 = SkPaintPriv::Unflatten(paintbuffer_slug80);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect6 = malloc(28);
        hexToRawData("00000000000080400000803f0000803f0000803f0000803f01030000", paintdata_rrect6, 28);
        SkReadBuffer paintBuffer_rrect6(paintdata_rrect6, 28);
        SkPaint paintRRect6 = SkPaintPriv::Unflatten(paintBuffer_rrect6);
    
std::cout << "init op type: RestoreOp\n";
//DrawRRectOp
        void *paintdata_rrect7 = malloc(28);
        hexToRawData("0000404000008040cdcc4c3fcdcc4c3fcdcc4c3f0000803f01031000", paintdata_rrect7, 28);
        SkReadBuffer paintBuffer_rrect7(paintdata_rrect7, 28);
        SkPaint paintRRect7 = SkPaintPriv::Unflatten(paintBuffer_rrect7);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data81 = malloc(288);
        hexToRawData("0000000000000cc24e4705430000803f80bc88440068dc45380100000000803f0000000080bc8844000000000000803f00000c4200000000000000000000803f010000000100000000000000010000000000803f0000000080bc8844000000000000803f00000c4200000000000000000000803f00c088440000008000609944000010420600000000c088440000803f00208c440000304100208f44000030410040924400003041000094440000304100e09644000000800107e1e44c00000001000000636572733800000006000000666630420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b430060000001802000091030000f5020000250500006a03000009040000", data81, 288);
        auto slug81 = sktext::gpu::Slug::Deserialize(data81, 288);
        free(data81);
        void *paintdata_slug81 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug81, 28);
        SkReadBuffer paintbuffer_slug81 = SkReadBuffer(paintdata_slug81, 28);
        SkPaint paint_slug81 = SkPaintPriv::Unflatten(paintbuffer_slug81);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data82 = malloc(576);
        hexToRawData("00000000000044c2e5da8d44000070410000524200e8e645b80200000000803f0000000000005242000000000000803f0080b94300000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0080b94300000000000000000000803f000054420000a143006094440000c1431e000000000054420080a2430000ee420000a143000021430000a843000042430000a84300006c430000a843000085430080a843000099430000a8430000a9430000a8430080bf430080a8430080d2430000a8430000e4430080a843008000440000a843000009440000a84300c010440000a84300801c440080a84300c02a440000a84300c033440000a84300c03a440000a143000044440000a143004049440000a843004053440080a74300c05f440000a143000065440000a843008073440000a843004080440000a843000084440000a84300c087440000a84300e08b440000a44300008f440000a843000093440080b543daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301e000000ea0000002e010000220100004501000023010000660100002001000057010000730100004901000063010000100100005601000021010000690100004a010000540100003b0100003201000047010000290100003201000047010000130100001a01000056010000100100005e010000230100003d000000", data82, 576);
        auto slug82 = sktext::gpu::Slug::Deserialize(data82, 576);
        free(data82);
        void *paintdata_slug82 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug82, 28);
        SkReadBuffer paintbuffer_slug82 = SkReadBuffer(paintdata_slug82, 28);
        SkPaint paint_slug82 = SkPaintPriv::Unflatten(paintbuffer_slug82);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data83 = malloc(384);
        hexToRawData("0000a040000044c2f93f16440000704100006e4200b8e945b80100000000803f0000000000006e42000000000000803f0080e64300000000000000000000803f010000000100000000000000010000000000803f0000000000006e42000000000000803f0080e64300000000000000000000803f000080420000ce43000025440000ee430e000000000080420000d5430000ca420000d54300000a430000d543000030430000d543000056430000d543008090430000ce430080a3430000d5430080b7430000d5430000df430000dc430000f2430000dc43000001440000d54300000b440000d543000014440000d54300c01d440000d543b1ef66dd4c0000000100000063657273380000000300000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000240092ff590000000100b4300e0000001a0100001101000054010000280100004b0100001d01000048010000180100004200000041000000480100004c0100002301000046010000", data83, 384);
        auto slug83 = sktext::gpu::Slug::Deserialize(data83, 384);
        free(data83);
        void *paintdata_slug83 = malloc(28);
        hexToRawData("00000000000080408e8d0d3fd1d0d03de1e0603e0000803f01030000", paintdata_slug83, 28);
        SkReadBuffer paintbuffer_slug83 = SkReadBuffer(paintdata_slug83, 28);
        SkPaint paint_slug83 = SkPaintPriv::Unflatten(paintbuffer_slug83);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data84 = malloc(360);
        hexToRawData("380a8341000044c233a4ca430000704100d4274400b8e945980100000000803f0000000000d42744000000000000803f0080e64300000000000000000000803f010000000100000000000000010000000000803f0000000000d42744000000000000803f0080e64300000000000000000000803f00c02b440000ce4300a086440000ee430c00000000c02b440080d54300c039440000ce4300c03e440000ce43008043440000ce4300804c440080d443008055440000d54300c05d440000d543004068440000d543004070440000d54300c077440000d543000080440000d143000083440000d543daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300c0000006b010000300100003d0100003f0100002a01000022010000450100002301000056010000100100005e01000022010000", data84, 360);
        auto slug84 = sktext::gpu::Slug::Deserialize(data84, 360);
        free(data84);
        void *paintdata_slug84 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug84, 28);
        SkReadBuffer paintbuffer_slug84 = SkReadBuffer(paintdata_slug84, 28);
        SkPaint paint_slug84 = SkPaintPriv::Unflatten(paintbuffer_slug84);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data85 = malloc(540);
        hexToRawData("00004040000044c2ec8d6c4400007041000052420088ec45880200000000803f0000000000005242000000000000803f00c0094400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f00c0094400000000000000000000803f00005c420000fb4300c0794400800d441b00000000005c420000fb430000bc4200000144000002430000014400001f43004001440000484300000144008082430000014400809243000001440080a6430000fe430080b243000001440080c3430000fe430080ce430000fb430080d943000001440000eb430000014400c003440000fb4300000a440000014400c012440000014400c01d44004001440080274400000144000030440040014400403a4400000144008045440000014400804f4400000144004057440000014400405f440000fb43000065440000014400806d4400000144008074440000fe43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301b0000001e010000490100001a010000620100004201000020010000470100005e010000120100005c010000310100004a01000047010000270100004801000055010000720100004801000061010000550100004e010000540100004b01000034010000200100001b0100005f010000", data85, 540);
        auto slug85 = sktext::gpu::Slug::Deserialize(data85, 540);
        free(data85);
        void *paintdata_slug85 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug85, 28);
        SkReadBuffer paintbuffer_slug85 = SkReadBuffer(paintdata_slug85, 28);
        SkPaint paint_slug85 = SkPaintPriv::Unflatten(paintbuffer_slug85);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data86 = malloc(252);
        hexToRawData("00008040000040c23a35f0420000803f00127e440088ec45080100000000803f0000000000127e44000000000000803f00c0094400000000000000000000803f010000000100000000000000010000000000803f0000000000127e44000000000000803f00c0094400000000000000000000803f00007f440080fb4300208e4400000a440300000000007f440000014400a0834400000144004089440080fb43578ac2024c0000000100000063657273380000000700000000007c420000803f000080be0000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4300300000011010000470100001e010000", data86, 252);
        auto slug86 = sktext::gpu::Slug::Deserialize(data86, 252);
        free(data86);
        void *paintdata_slug86 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug86, 28);
        SkReadBuffer paintbuffer_slug86 = SkReadBuffer(paintdata_slug86, 28);
        SkPaint paint_slug86 = SkPaintPriv::Unflatten(paintbuffer_slug86);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data87 = malloc(252);
        hexToRawData("380a9b41000044c206c2b4420000803f80628d440088ec45080100000000803f0000000080628d44000000000000803f00c0094400000000000000000000803f010000000100000000000000010000000000803f0000000080628d44000000000000803f00c0094400000000000000000000803f00c08f440000fb4300c0984400000a440300000000c08f440000014400e093440000fb43006096440000fb43daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43003000000120100003c0100003e010000", data87, 252);
        auto slug87 = sktext::gpu::Slug::Deserialize(data87, 252);
        free(data87);
        void *paintdata_slug87 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug87, 28);
        SkReadBuffer paintbuffer_slug87 = SkReadBuffer(paintdata_slug87, 28);
        SkPaint paint_slug87 = SkPaintPriv::Unflatten(paintbuffer_slug87);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data88 = malloc(564);
        hexToRawData("0000803f000044c26bb8714400007041000052420058ef45a80200000000803f0000000000005242000000000000803f0040204400000000000000000000803f010000000100000000000000010000000000803f0000000000005242000000000000803f0040204400000000000000000000803f000054420000144400007f44000024441d000000000054420000144400009242008015440000c2420080174400000f43000014440000354300801744000054430080174400007e430080174400008f43008017440000a443000014440080b743008017440080c743008017440080dc43008017440000eb43000014440000f64300801744004003440080174400400e44000014440040134400801744008021440080154400002744000014440080314400801744008039440000144400c03e440080174400804a4400801744004052440080174400005b4400801744008062440080174400406a4400801744008072440080174400c0794400801544daab77574c0000000100000063657273380000000100000000007c420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b4301d000000320100005f0100005b0100001f010000210100004c01000023010000460100001c01000023010000460100001801000030010000210100005801000033010000470100005c0100002c01000020010000330100005401000018010000480100005501000054010000230100001a0100005e010000", data88, 564);
        auto slug88 = sktext::gpu::Slug::Deserialize(data88, 564);
        free(data88);
        void *paintdata_slug88 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug88, 28);
        SkReadBuffer paintbuffer_slug88 = SkReadBuffer(paintdata_slug88, 28);
        SkPaint paint_slug88 = SkPaintPriv::Unflatten(paintbuffer_slug88);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect21 = malloc(28);
        hexToRawData("0000000000008040dedd5d3fe9e8683ffdfc7c3f0000803f01030000", paintdata_rect21, 28);
        SkReadBuffer paintBuffer_rect21(paintdata_rect21, 28);
        SkPaint paintRect21 = SkPaintPriv::Unflatten(paintBuffer_rect21);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawSlugOp
        void *data89 = malloc(516);
        hexToRawData("00000000000068c212b67e440000803f00d0d2420008e245680200000000803f0000000000d0d242000000000000803f0000574300000000000000000000803f010000000100000000000000010000000000803f0000000000d0d242000000000000803f0000574300000000000000000000803f0000d44200001d4300808c4400005843190000000000d442000020430000144300002f43000042430000304300006e4300002f4300009043000020430080a34300002f430080b94300002f430080c54300002f430080d74300002f430000ef4300002f430000024400002f4300c00c4400001d4300801644000020430040234400002f4300802e4400002f4300403844000030430040434400002f430000534400002f4300c05d4400002f43008067440000254300406f4400002f4300c078440000254300608044000020430080824400002f430060884400002f4318bcf5ee4c00000001000000636572733800000005000000333397420000803f000000000000803f00000000000000000000803f000080bf0000000000000000000000ff590000000100b43019000000c2020000b20400006805000024050000ff010000900300002605000036050000b004000092040000f60200007304000095000000b10400006b0300006805000088040000920300009004000056050000f60200005605000019040000b204000091040000", data89, 516);
        auto slug89 = sktext::gpu::Slug::Deserialize(data89, 516);
        free(data89);
        void *paintdata_slug89 = malloc(28);
        hexToRawData("00000000000080400000000000000000000000000000803f01030000", paintdata_slug89, 28);
        SkReadBuffer paintbuffer_slug89 = SkReadBuffer(paintdata_slug89, 28);
        SkPaint paint_slug89 = SkPaintPriv::Unflatten(paintbuffer_slug89);
        
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: StrikeClientLo\n";
// Render not implemented for: StrikeClientLo
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -7018.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 7018.000000, 1344.000000, 7658.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1316.000000, 16895.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect20);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(54.500000, 6996.500000, 1059.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect4);
        }
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(54.500000, 6996.500000, 1059.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect5);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(56.000000, 6998.000000, 1058.000000, 7078.000000);
        SkVector radii[4] = { { 7.500000,7.500000 },
            { 7.500000, 7.500000 },
            { 7.500000, 7.500000 },
            { 7.500000, 7.500000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        canvas->clipRRect(rrect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(70.000000, 7012.000000, 1009.000000, 7064.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug80->draw(canvas, paint_slug80);
        //slug80->draw(canvas)
        free(paintdata_slug80);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(1078.500000, 6996.500000, 1245.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect6);
        }
std::cout << "render op type: DrawRRectOp\n";
{
        SkRect rect = SkRect::MakeLTRB(1078.500000, 6996.500000, 1245.500000, 7079.500000);
        SkVector radii[4] = { { 9.000000,9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            { 9.000000, 9.000000 },
            };
        int type = 0;

        // private constructor, can't use: SkRRect rrect(rect, radii, type);
        SkRRect rrect;
        rrect.setRectRadii(rect, radii);
        //SkPaint p;
        //p.setColor(SkColors::kGreen);
        canvas->drawRRect(rrect, paintRRect7);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug81->draw(canvas, paint_slug81);
        //slug81->draw(canvas)
        free(paintdata_slug81);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug82->draw(canvas, paint_slug82);
        //slug82->draw(canvas)
        free(paintdata_slug82);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug83->draw(canvas, paint_slug83);
        //slug83->draw(canvas)
        free(paintdata_slug83);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug84->draw(canvas, paint_slug84);
        //slug84->draw(canvas)
        free(paintdata_slug84);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug85->draw(canvas, paint_slug85);
        //slug85->draw(canvas)
        free(paintdata_slug85);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug86->draw(canvas, paint_slug86);
        //slug86->draw(canvas)
        free(paintdata_slug86);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug87->draw(canvas, paint_slug87);
        //slug87->draw(canvas)
        free(paintdata_slug87);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug88->draw(canvas, paint_slug88);
        //slug88->draw(canvas)
        free(paintdata_slug88);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(53.000000, 7264.000000, 1264.000000, 7267.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect21);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawSlugOp\n";
{
        slug89->draw(canvas, paint_slug89);
        //slug89->draw(canvas)
        free(paintdata_slug89);
        }
        
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 2C64B029CA5826CF359A568A7EAA36A1_1764622852139017.paintbuf
