#include "SGL.hpp"

namespace SGL{
	int Keyboard::GetPushedKey( SDL_Scancode scan_code ){
		return Base::sgl_ctrl_data.pushed_key[ scan_code ];
	}
}