// Unnamed technique, shader fft_vertical
/*$(ShaderResources)*/

#include "fft_core.hlsl"

/*$(_compute:fftVertical)*/(uint local_index : SV_GroupIndex, uint3 workgroup_id : SV_GroupID)
{
	fft(local_index, workgroup_id.x, 1, false);
}

/*
Shader Resources:
	Buffer FFTBuffer (as UAV)
*/