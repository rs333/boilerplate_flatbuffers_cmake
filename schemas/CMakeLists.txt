
set(BOILER_SCHEMAS
	"./dog.fbs"
)

flatbuffers_generate_headers(
	TARGET boilerfbs
	SCHEMAS ${BOILER_SCHEMAS}
)
