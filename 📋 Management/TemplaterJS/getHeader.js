async function getHeader(tp) {
    const title = tp.file.title.split('-');
    return title[0];
}

module.exports = getHeader
