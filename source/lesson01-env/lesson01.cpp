#include <windows.h>
#include <tchar.h>

extern "C"
{
#include <libavcodec/avcodec.h>
//#include <libavdevice/>
//#include <libavfilter/>
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libavutil/imgutils.h>
#include <libavutil/parseutils.h>
//#include <libpostproc/>
//#include <libswresample/>
#include <libswscale/swscale.h>
}


int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, _T("Create Message Box Success"), _T("Success"), MB_OK);
	return 0;
}