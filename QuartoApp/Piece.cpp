module piece;


Quarto::Piece::Color Quarto::Piece::GetColor() const
{
	return m_color;
}

Quarto::Piece::Height Quarto::Piece::GetHeight() const
{
	return m_height;
}

Quarto::Piece::Shape Quarto::Piece::GetShape() const
{
	return m_shape;
}

Quarto::Piece::Body Quarto::Piece::GetBody() const
{
	return m_body;
}

std::ostream& Quarto::operator<<(std::ostream& os, const Quarto::Piece& piece)
{
	os << std::format("{} {} {} {}",
		static_cast<int>(piece.GetColor()),
		static_cast<int>(piece.GetHeight()),
		static_cast<int>(piece.GetShape()),
		static_cast<int>(piece.GetBody())
		);
	return os;
}