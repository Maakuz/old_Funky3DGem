#pragma once
#include <GL/glew.h>
#include "Shader.h"
#include "Camera.h"

class Renderer
{
public:
	Renderer();
	virtual ~Renderer() {};

	void draw(const Camera* camera);

	static void queueModel(Entity entity);

private:
	Shader m_vertex;
	Shader m_fragment;
	Program m_program;
	
	static std::vector<Entity> s_modelQueue;
};