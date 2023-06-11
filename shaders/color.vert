#version 330 core

// input attribute variable, given per vertex
in vec3 position;

// global matrix variables
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

// color given to the fragment shader
out vec3 fragColor;

vec3 RandomGradientWarm() {
    vec3 color;
    vec3 purple = vec3(180./255., 151./255., 202./255.);
    vec3 pink = vec3(213./255., 66./255., 108./255.);
    vec3 mint = vec3(28./255., 169./255., 178./255.);

    color.r = position.y * (pink.r - mint.r) + mint.r;
    color.g = position.y * (pink.g - mint.g) + mint.g;
    color.b = position.x * (pink.b - mint.b) + mint.b;
    

    return color;
}

void main() {

    fragColor = RandomGradientWarm();
    gl_Position = projection * view * model * vec4(position, 1);
}

