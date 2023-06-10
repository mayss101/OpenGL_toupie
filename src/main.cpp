#include "viewer.h"
#include "triangle.h"
#include "pyramid.h"
#include "cylinder.h"
#include "sphere.h"
#include "cone.h"
#include "etoile.h"
#include "node.h"
#include "shader.h"
#include <string>

#ifndef SHADER_DIR
#error "SHADER_DIR not defined"
#endif

int main()
{
    // create window, add shaders & scene objects, then run rendering loop
    Viewer viewer;

    // get shader directory
    std::string shader_dir = SHADER_DIR;

    Shader *color_shader = new Shader(shader_dir + "color.vert", shader_dir + "color.frag");

	//toupie1
    glm::mat4 toupie1_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -3.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.9f, 0.9f, 0.9f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        
    Node* toupie1 = new Node(toupie1_mat);
    
    	//toupie2
    glm::mat4 toupie2_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -3.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.9f, 0.9f, 0.9f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        
    Node* toupie2 = new Node(toupie2_mat);

	//toupie3
    glm::mat4 toupie3_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -3.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.9f, 0.9f, 0.9f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        
    Node* toupie3 = new Node(toupie3_mat);
    
    // Pointe1
    Shape* pointehaute1 = new Cone(color_shader);
    glm::mat4 pointehaute1_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.5f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.7f, 1.2f, 0.7f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointehaute1_node = new Node(pointehaute1_mat);
    pointehaute1_node->add(pointehaute1);
    
    Shape* pointebasse1 = new Cone(color_shader);
    glm::mat4 pointebasse1_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, -0.5f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.7f, 1.2f, 0.7f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(-90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointebasse1_node = new Node(pointebasse1_mat);
    pointebasse1_node->add(pointebasse1);

	// Pointe2
    Shape* pointehaute2 = new Cone(color_shader);
    glm::mat4 pointehaute2_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.65f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.8f, 1.15f, 0.8f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointehaute2_node = new Node(pointehaute2_mat);
    pointehaute2_node->add(pointehaute2);
    
    Shape* pointebasse2 = new Cone(color_shader);
    glm::mat4 pointebasse2_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, -0.65f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.8f, 1.15f, 0.8f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(-90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointebasse2_node = new Node(pointebasse2_mat);
    pointebasse2_node->add(pointebasse2);

	// Arrondi
		Shape* rond = new Sphere(color_shader);
		glm::mat4 rond_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.0f))
			* glm::scale(glm::mat4(1.0f), glm::vec3(0.9f, 0.60f, 0.9f))
			* glm::rotate(glm::mat4(1.0f), glm::radians(0.0f), glm::vec3(1.0f, 1.0f, 1.0f));
		Node* rond_node = new Node(rond_mat);
		rond_node->add(rond);
		
		// Pointe3
    Shape* pointehaute3 = new Cone(color_shader);
    glm::mat4 pointehaute3_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.65f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.1f, 1.15f, 0.1f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointehaute3_node = new Node(pointehaute3_mat);
    pointehaute3_node->add(pointehaute3);
    
    Shape* pointebasse3 = new Cone(color_shader);
    glm::mat4 pointebasse3_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, -0.65f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.1f, 1.15f, 0.1f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(-90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointebasse3_node = new Node(pointebasse3_mat);
    pointebasse3_node->add(pointebasse3);
    
    Shape* pointehautebase3 = new Cone(color_shader);
    glm::mat4 pointehautebase3_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.25f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.3f, 0.4f, 0.3f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointehautebase3_node = new Node(pointehautebase3_mat);
    pointehautebase3_node->add(pointehautebase3);
    
    Shape* pointebassebase3 = new Cone(color_shader);
    glm::mat4 pointebassebase3_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, -0.25f, 0.0f))
        * glm::scale(glm::mat4(1.0f), glm::vec3(0.3f, 0.4f, 0.3f))
        * glm::rotate(glm::mat4(1.0f), glm::radians(-90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    Node* pointebassebase3_node = new Node(pointebassebase3_mat);
    pointebassebase3_node->add(pointebassebase3);
		
	// Etoile
		Shape* etoile = new Etoile(color_shader);
		glm::mat4 etoile_mat = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.0f))
			* glm::scale(glm::mat4(1.0f), glm::vec3(1.7f, 0.15f, 1.7f))
			* glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
		Node* etoile_node = new Node(etoile_mat);
		etoile_node->add(etoile);
    

    // Add the root node to the scene
    toupie1->add(pointehaute1_node);
    toupie1->add(pointebasse1_node);
    toupie2->add(pointehaute2_node);
    toupie2->add(pointebasse2_node);
    toupie2->add(rond_node);
    toupie3->add(pointehaute3_node);
    toupie3->add(pointehautebase3_node);
    toupie3->add(pointebasse3_node);
    toupie3->add(pointebassebase3_node);
    toupie3->add(etoile_node);

    viewer.scene_root->add(toupie3);

    viewer.run();
}
