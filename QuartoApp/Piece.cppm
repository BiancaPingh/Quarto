export module Piece;
import <iostream>;

namespace Quarto
{
	export class Piece
	{
	public:
		enum class Color : uint8_t 
		{
			LIGHT,
			DARK
		};
		enum class Height : uint8_t 
		{
			SHORT,
			TALL
		};
		enum class Shape : uint8_t 
		{
			ROUND,
			SQUARE
		};
		enum class Body : uint8_t 
		{
			SOLID,
			HOLLOW
		};
		Piece(Color color, Height height, Shape shape, Body body)
			: m_color{ color }, m_height{ height }, m_shape{ shape }, m_body{ body }
		{
		}
		Piece(const Piece& other) = delete;
		Piece& operator=(const Piece& other) = delete; // NU POTI FACE COPY
		Piece(Piece&& other) noexcept = default; //contructor de mutare
		Piece& operator=(Piece&& other) noexcept = default; //operator de mutare
	private:
		Color m_color:1;
		Height m_height:1;
		Shape m_shape:1;
		Body m_body:1;
		
		Color getColor() const { return m_color; }
		Height getHeight() const { return m_height; }
		Shape getShape() const { return m_shape; }
		Body getBody() const { return m_body; }
		

	};

	export std::ostream& operator<<(std::ostream& os, const Piece& piece);

} // namespace Quarto