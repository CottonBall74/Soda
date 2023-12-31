#pragma once

#include "Soda/Renderer/Texture.h"


namespace Soda
{
	class OpenGLTexture2D : public Texture2D
	{
	public:
		OpenGLTexture2D(const std::string& path);
		virtual ~OpenGLTexture2D();

		virtual void Bind(uint32_t slot = 0) override;
		virtual void Unbind(uint32_t slot) override;

		virtual unsigned int GetWidth() const override
		{ return m_Width; }
		virtual unsigned int GetHeight() const override
		{ return m_Height; }

		virtual const std::string& GetFilePath() const override
		{ return m_Path; }
		virtual const uint32_t GetTextureID() const override
		{ return m_TextureID; }

	private:
		std::string m_Path;
		uint32_t m_Width, m_Height;
		uint32_t m_TextureID;
	};
}