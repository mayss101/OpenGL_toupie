#pragma once

#include "shape.h"
#include <vector>

class Cone : public Shape {
public:
    Cone(Shader *shader_program, float height = 1.0f, float radius = 0.5f, int slices = 16,int stack_count = 18);
    void draw(glm::mat4& model, glm::mat4& view, glm::mat4& projection) override;

private:

    //void buildVertices(float height,int stack_count,int slices);
    //void buildIndices(int stack_count,int slices);
    unsigned int num_indices;
    GLuint VAO;
    GLuint buffers[2];
};
