<?xml version="1.0" encoding="iso-8859-1"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:output method="html" indent="yes" encoding="iso-8859-1"/>
  <xsl:template match="/*">
    <xsl:value-of select="text()" disable-output-escaping="yes"/>
  </xsl:template>
</xsl:stylesheet>
