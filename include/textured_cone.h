#ifndef TEXTURED_CONE_H
#define TEXTURED_CONE_H

#include "cone.h"
#include "texture.h"

class TexturedCone : public Cone {
public:
    TexturedCone(Shader *shader_program, Texture *texture);

    virtual void draw(glm::mat4& model, glm::mat4& view, glm::mat4& projection) override;

private:
    GLuint loc_diffuse_map;
    Texture *texture;
};

#endif // TEXTURED_SPHERE_H
