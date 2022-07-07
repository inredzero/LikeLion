from django import forms

class SearchForm(forms.Form):
    search = forms.CharField(label = 'Search For Mocies...', max_length=100)