#include "textured_cone.h"

TexturedCone::TexturedCone(Shader *shader_program, Texture *texture)
    : Cone(shader_program), texture(texture)
{
    loc_diffuse_map = glGetUniformLocation(this->shader_program_, "diffuse_map");
}

void TexturedCone::draw(glm::mat4& model, glm::mat4& view, glm::mat4& projection) {

    glUseProgram(this->shader_program_);

    // texture access setups
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, this->texture->getGLid());
    glUniform1i(loc_diffuse_map, 0);

    Cone::draw(model, view, projection);

    // leave clean state for easier debugging
    glBindTexture(GL_TEXTURE_2D, 0);
    glUseProgram(0);
}
