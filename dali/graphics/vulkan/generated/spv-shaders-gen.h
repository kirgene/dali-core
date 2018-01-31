// Autogenerated
#ifndef SPV_GENERATED_HEADER
#define SPV_GENERATED_HEADER
#include <vector>
#include <cstdint>


extern std::vector<uint8_t> VSH_CODE;
/*
#version 430

layout( location = 0 ) in vec3 aPosition;

layout( set = 0, binding = 0, std140 ) uniform world
{
    mat4 modelMat;
    mat4 viewMat;
    mat4 projMat;
    vec4 color;
};

layout( location = 0 ) out vec4 triColor;

void main()
{
    gl_Position = projMat * viewMat * modelMat * vec4( aPosition, 1.0 );
    triColor = color;
}*/


extern std::vector<uint8_t> FSH_CODE;
/*
#version 430

layout( location = 0 ) in vec4 triColor;
layout( location = 0 ) out vec4 outColor;

void main()
{
    outColor = triColor;
}*/


#endif // SPV_GENERATED_HEADER

